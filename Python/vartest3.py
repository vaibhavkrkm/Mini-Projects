import pygame

pygame.init()

game_display = pygame.display.set_mode((800, 600))
bgcolor = (255, 0, 0)

while True:
    for event in pygame.event.get():
        if(event.type == pygame.QUIT):
            pygame.quit()
            quit()
        if(event.type == pygame.KEYDOWN):
            if(event.key == pygame.K_SPACE):
                bgcolor = (255, 255, 255)

    game_display.fill(bgcolor)
    pygame.display.update()
