from pygame import * 
import random

'''
add in enemy attack time
'''

#Colours
RED = (255, 0, 0)
GREEN = (0, 255, 0)
BLUE = (0,0,255)
BLACK = (0,0,0)
WHITE = (255,255,255)
BROWN = (153, 51, 0)
GOLD = (255, 204, 0)
GREY = (105,105,105)
PURPLE=(128, 0, 255)
PINK = (255, 0, 128)
ORANGE = (255, 128, 0)
YELLOW= (255,255,0)
STEEL_GRAY = (67,70,75)
D_STEEL_GRAY = (45,48,53)
MIDNIGHT_BLUE = (25,25,112)
D_SLATE_GREY = (47,79,79)
DARK_YELLOW = (153,153,0)
LIGHT_SLATE_BLUE = (176,196,222)
MEDIUM_BLUE = (0,0,205)
DARK_GREEN = (0,100,0)
DARK_RED = (139,0,0)
INDIGO = 	(75,0,130)
DARK_ORAGNE = (255,140,0)
CYBER = (255,211,0)
LIGHT_YELLOW = (255,255,51)
YELLOW_OF_SOMESORT = (250,237,39)
D_GREY = (169,169,169)
SILVER = (192,192,192)
L_GREY = (211,211,211)
SOMEBLUE = (65,105,225)

init()
SIZE = (width,height) = (1000,800)
screen = display.set_mode(SIZE)

running = True
clock = time.Clock()

#map
blockSize = 550
mapListBlock = [] #10*10*3*3
mapList = []  # 10*10
mapListHitBox = []

def initMapList():
    for i in range(10):
        row = []
        for j in range(10):
            row.append(False)
        mapList.append(row)
def initMapListBlock():        
    for _ in range(10):
        row1 = []
        for _ in range(10):
            layer1 = []
            for _ in range(3):
                row = []
                for _ in range(3):
                    row.append(False)
                layer1.append(row)
            layer1[1][1] = True
            row1.append(layer1)
        mapListBlock.append(row1)
def getOptions(x,y):
    re = []
    for i in dir:
        cx = x+i[0]
        cy = y+i[1]
        if(cx >= 0 and cx < 10 and cy >= 0 and cy < 10 and not mapList[cx][cy]):
            re.append(i)
    return re

dir = [[1,0],[-1,0],[0,1],[0,-1]]
initMapList()
initMapListBlock()
mapList[0][0] = True

isDeadEnd = True
enemySpawnPoints = []

def getMap():
    stack = [[0,0]]
    while(not len(stack) == 0):
        pos = stack[-1]

        options = getOptions(pos[0],pos[1])
        if(len(options) == 0):
            stack.pop()
            if(isDeadEnd):
                enemySpawnPoints.append([pos[0]*3+1,pos[1]*3+1])
                isDeadEnd = False
            continue
        isDeadEnd = True

        toGo = random.choices(options)[0]
        mapList[pos[0] + toGo[0]][pos[1] + toGo[1]] = True
        stack.append([pos[0]+toGo[0], pos[1]+toGo[1]])

        mapListBlock[pos[0]][pos[1]] [1+toGo[0]][1+toGo[1]] = True
        mapListBlock[pos[0]+toGo[0]][pos[1]+toGo[1]] [1-toGo[0]][1-toGo[1]] = True
    print("done map")
def drawMapInit():
    for r in range(30):
        for c in range(30):
            if(grid[r][c]):
                block = Rect(r*blockSize + scrollX, c*blockSize + scrollY,blockSize,blockSize)
                mapListHitBox.append([block, Rect(r*blockSize, c*blockSize,blockSize,blockSize)])
                draw.rect(screen,GREY,block)

    print("done map init")
def drawMap():
    for i in range(len(mapListHitBox)):
        orgin = mapListHitBox[i][1]
        mapListHitBox[i][0] = Rect(orgin[0]+scrollX, orgin[1]+scrollY, blockSize, blockSize)
        draw.rect(screen, GREY, mapListHitBox[i][0])
    for i in enemySpawnPoints:
        draw.circle(screen, RED, (i[0]*blockSize + blockSize/2 + scrollX, i[1]*blockSize + blockSize/2 + scrollY), 80)

def convertMaze():
    grid = []
    for x in mapListBlock:
        rows = [[],[],[]]
        for y in x:
            for i in range(3):
                if(y[0][i]):
                    rows[0].append(0)
                else:
                    rows[0].append(-1)
                    
                if(y[1][i]):
                    rows[1].append(0)
                else:
                    rows[1].append(-1)
                    
                if(y[2][i]):
                    rows[2].append(0)
                else:
                    rows[2].append(-1)
        grid.append(rows[0])
        grid.append(rows[1])
        grid.append(rows[2])
    return grid

#bullet/shooting
bulletList = [] #2D( vect(x,y), vect dir, scrollX, scrollY )
bulletSize = 3
bulletSpeed = 25
bufferDelete = 10
bulletDamage = 35

bulletOffSetX = bulletOffSetY = 0
bulletSizeHalf = bulletSize/2

recoil = 0.75
RPS = 0.125
rps = RPS
dirMaxOffSet = 50
knockBack = 25

def drawBullet(x,y):
    draw.circle(screen, RED, (x,y), bulletSize)
def shootCreate(mosPos):
    global scrollX, scrollY, playerX, playerY

    #get bullet dir
    aimDir = (Vector2(mosPos) - playerCenter).normalize()
    aimDir.x += random.randint(-dirMaxOffSet,dirMaxOffSet)/1000
    aimDir.y += random.randint(-dirMaxOffSet,dirMaxOffSet)/1000
    bulletList.append([playerCenter,aimDir]) #add into list

    #recoil
    scrollX += aimDir.x * recoil
    scrollY += aimDir.y * recoil
    playerX -= aimDir.x * recoil
    playerY -= aimDir.y * recoil
def bulletCollsion(i):
    #bounds for the bullet
    if(i[0].x >= width + bufferDelete or i[0].x <= -bufferDelete or i[0].y >= height + bufferDelete or i[0].y <= -bufferDelete):
        bulletList.remove(i)
        print("screen collision")
        return True

    bRect =  Rect(i[0].x-bulletSize, i[0].y-bulletSize, bulletSize*2, bulletSize*2)
    #checks map for collsion
    for j in mapListHitBox:
        if(bRect.colliderect(j[0])):
            bulletList.remove(i)
            print("bullet map collision")
            return True
    
    for j in enemyList:
        eRect = Rect(j[0] +scrollX-enemySize,j[1] + scrollY-enemySize,enemySize*2,enemySize*2)
        if(eRect.colliderect(bRect)):
            bulletList.remove(i)
            print("bullet enemy collision")
            j[2] -= bulletDamage
            if(j[2] <= 0):
                enemyList.remove(j)
            else:
                j[0] += i[1].x*knockBack
                j[1] += i[1].y*knockBack
            return True
        
def shootUpdate(tPX, tPY):
    for i in bulletList:
        i[0].x += i[1].x * bulletSpeed + tPX
        i[0].y += i[1].y * bulletSpeed + tPY
        bulletCollsion(i)
def drawBullets():
    for i in bulletList:
        drawBullet(i[0].x, i[0].y)


#player
scrollX = blockSize*-1 #<------------------------------
scrollY = blockSize*-1   #<------------------------------
playerX = scrollX*-1+width/2
playerY = scrollY*-1+height/2
playerSpeed = 2
playerSpeedSprint = 10
playerSize = 10
playerHitBox = Rect(width/2-playerSize+1,height/2-playerSize+1,playerSize*2-2,playerSize*2-2)
playerCenter = Vector2(width/2,height/2)
playerHealth = 100

def drawPlayer(x,y):
    draw.circle(screen, GREEN, (width/2,height/2), playerSize)
    draw.rect(screen,PURPLE,playerHitBox)
def playerCollision(): #right side works sometimes, going up pushes u down and left
    for i in mapListHitBox:
        if(playerHitBox.colliderect(i[0])):
            #quit()
            pass

#enemy
enemySize = 10
enemySpeed = 10
enemyRange = 20
ENEMYSPAWNTIMER = 5
enemySpawnTimer = ENEMYSPAWNTIMER
enemyHealth = 100
enemyDamage = 25

enemyList = [] #2d ([])

def copyGrid():
    g = []
    for i in grid:
        row = []
        for j in i:
            row.append(j)
        g.append(row)
    return g

def pathFind(pX,pY):
    x = pX
    y = pY
    gridC = copyGrid()
    gridC[x][y] = 1

    queue = [[x,y,1]]
    while(not len(queue) == 0):
        info = queue.pop()
        rx = info[0]
        ry = info[1]
        num = info[2]

        for i in dir:
            xx = rx + i[0]
            yy = ry + i[1]
            if(xx >= 0 and xx <= 30 and yy >= 0 and yy <= 30):            
                if(gridC[xx][yy] == 0):
                    gridC[xx][yy] = num+1
                    queue.append([xx,yy,num+1])
    return gridC
def moveEnemy(path):
    global playerHealth
    for e in enemyList:
        enemy = e

        ex = int(enemy[0]/blockSize)
        ey = int(enemy[1]/blockSize)
        if(path[ex][ey] == 1):
            enemyC = Vector2(enemy[0]+scrollX,enemy[1]+scrollY)
            enemyDir = Vector2(playerCenter-enemyC).normalize()
            
            if((enemy[0]-playerX)**2 + (enemy[1]-playerY)**2 < enemySpeed**2):
                playerHealth -= enemyDamage

            enemy[0] += enemyDir.x*enemySpeed
            enemy[1] += enemyDir.y*enemySpeed
        
        for i in dir:
            xx = ex + i[0]
            yy = ey + i[1]
            if(path[xx][yy] == path[ex][ey] -1 ):
                enemy[0] += i[0]*enemySpeed
                enemy[1] += i[1]*enemySpeed

def spawnEnemies():
    for i in enemySpawnPoints:
        enemyList.append([i[0]*blockSize + blockSize/2, i[1]*blockSize + blockSize/2, enemyHealth])

def drawEnemies():
    for i in enemyList:
        drawEnemy(i[0], i[1])

def drawEnemy(x,y):
    eRect = Rect(x+scrollX-enemySize+1,y+scrollY-enemySize+1,enemySize*2-2,enemySize*2-2)
    draw.rect(screen, ORANGE, eRect)
    draw.circle(screen, RED, (x+scrollX,y+scrollY), enemySize)

#init
getMap()

exit = random.choice(enemySpawnPoints)
enemySpawnPoints.remove(exit)

grid = convertMaze()
drawMapInit()

deltaTime = 0

mapListBlock[4][4][0][0] = True
mapListBlock[4][4][0][1] = True
mapListBlock[4][4][0][2] = True

mapListBlock[4][4][1][0] = True
mapListBlock[4][4][1][1] = True
mapListBlock[4][4][1][2] = True

mapListBlock[4][4][2][0] = True
mapListBlock[4][4][2][1] = True
mapListBlock[4][4][2][2] = True

ok1 = int(abs(scrollX/blockSize))
ok2 = int(abs(scrollY/blockSize))
path = pathFind(ok1,ok2)

#enemyList.append([4*3*blockSize+blockSize*1.5,4*3*blockSize+blockSize*1.5])

while running:
    for evnt in event.get():
        if evnt.type == QUIT:
            running = False

    #movement
    pSpeed = playerSpeed
    tPX = tPY = 0 #movement along x and y during this frame
    keys = key.get_pressed()
    if(keys[K_LSHIFT]):
        pSpeed*=playerSpeedSprint
    if(keys[K_w]):
        scrollY += pSpeed
        bulletOffSetY += pSpeed
        tPY += pSpeed
        playerY-=pSpeed
        print("scroll: ",scrollX,scrollY)
        print("player: ",playerX,playerY)
    if(keys[K_a]):
        scrollX += pSpeed
        bulletOffSetX += pSpeed
        tPX += pSpeed
        playerX -= pSpeed
        print("scroll: ",scrollX,scrollY)
        print("player: ",playerX,playerY)
    if(keys[K_s]):
        scrollY -= pSpeed
        bulletOffSetY -= pSpeed
        tPY -= pSpeed
        playerY += pSpeed
        print("scroll: ",scrollX,scrollY)
        print("player: ",playerX,playerY)
    if(keys[K_d]):
        scrollX -= pSpeed
        bulletOffSetX -= pSpeed
        tPX -= pSpeed
        playerX += pSpeed
        print("scroll: ",scrollX,scrollY)
        print("player: ",playerX,playerY)

    #shooting
    rps -= deltaTime
    enemySpawnTimer-= deltaTime
    if(mouse.get_pressed()[0] and rps <= 0):
        shootCreate(mouse.get_pos())
        print("shoot")
        playerCenter = Vector2(width/2,height/2) #reset player center, *note, I have no idea why
        rps = RPS
    if(enemySpawnTimer <= 0):
        print("spawn")
        spawnEnemies()
        enemySpawnTimer = ENEMYSPAWNTIMER
    
    px = int(abs(playerX/blockSize))
    py = int(abs(playerY/blockSize))
    path = pathFind(px,py)
        
    draw.rect(screen, BLACK, (0,0,width,height))
    shootUpdate(tPX, tPY) #update bullets, and collision
    moveEnemy(path)
    playerCollision() #PLayer Collision

    drawMap()
    drawBullets()
    drawEnemies()
    drawPlayer(width/2, height/2)

    display.update()
    clock.tick(60)
    deltaTime = clock.tick(30)/1000

quit()