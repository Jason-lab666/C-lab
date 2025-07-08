import pygame
import random

pygame.init()
screen = pygame.display.set_mode((600, 400))
pygame.display.set_caption("Spaceship")

BLACK = (0, 0, 0)
WHITE = (255, 255, 255)
GREEN = (0, 255, 0)
RED = (255, 0, 0)

ship_x = 300
ship_y = 350
bullets = []
aliens = []

for _ in range(5):
    aliens.append([random.randint(0, 550), random.randint(0, 100)])

score = 0
running = True

while running:
    pygame.time.delay(30)
    
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
    
    keys = pygame.key.get_pressed()
    if keys[pygame.K_LEFT] and ship_x > 0:
        ship_x -= 5
    if keys[pygame.K_RIGHT] and ship_x < 550:
        ship_x += 5
    if keys[pygame.K_SPACE]:
        bullets.append([ship_x + 20, ship_y])
    
    for bullet in bullets[:]:
        bullet[1] -= 7
        if bullet[1] < 0:
            bullets.remove(bullet)
    
    for alien in aliens[:]:
        alien[1] += 2
        if alien[1] > 400:
            aliens.remove(alien)
            aliens.append([random.randint(0, 550), random.randint(0, 100)])
    
    for bullet in bullets[:]:
        for alien in aliens[:]:
            if (alien[0] < bullet[0] < alien[0]+50 and 
                alien[1] < bullet[1] < alien[1]+30):
                bullets.remove(bullet)
                aliens.remove(alien)
                aliens.append([random.randint(0, 550), random.randint(0, 100)])
                score += 1
                break
    
    screen.fill(BLACK)
    pygame.draw.rect(screen, GREEN, (ship_x, ship_y, 50, 30))
    
    for bullet in bullets:
        pygame.draw.rect(screen, WHITE, (bullet[0], bullet[1], 5, 10))
    
    for alien in aliens:
        pygame.draw.rect(screen, RED, (alien[0], alien[1], 50, 30))
    
    font = pygame.font.SysFont(None, 36)
    score_text = font.render(f"分数: {score}", True, WHITE)
    screen.blit(score_text, (10, 10))
    
    pygame.display.update()

pygame.quit()
