import pygame
from pygame.locals import *
import random
import sys


SCREENWIDTH = SCREENHEIGHT = 800
size = (SCREENWIDTH, SCREENHEIGHT)
win = pygame.display.set_mode(size)

pygame.display.set_caption("My Snake Game")

# Clock and FPS
CLOCK = pygame.time.Clock()
FPS = 5

# colors
GREEN = (0, 255, 0)
RED = (255, 0, 0)
BLUE = (0, 0, 255)
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
GREY = (128, 128, 128)

# x_change and y_change for snake movement
x_change = y_change = 0

# snake speed and width
snake_width = food_width = SCREENWIDTH // 20
speed = snake_width


def snake_movement():
	snake_rect.x += x_change
	snake_rect.y += y_change


background = BLUE

snake_rect = pygame.Rect(200, 200, snake_width, snake_width)

food_x = random.choice(range(0, SCREENWIDTH - food_width, food_width))
food_y = random.choice(range(0, SCREENHEIGHT - food_width, food_width))
food_rect = pygame.Rect(food_x, food_y, food_width, food_width)

run = True
while run:
	for event in pygame.event.get():
		if(event.type == QUIT):
			pygame.quit()
			sys.exit()
		if(event.type == KEYDOWN):
			if(event.key == K_LEFT):
				x_change = -speed
				y_change = 0
			elif(event.key == K_RIGHT):
				x_change = +speed
				y_change = 0
			elif(event.key == K_UP):
				x_change = 0
				y_change = -speed
			elif(event.key == K_DOWN):
				x_change = 0
				y_change = +speed
			elif(event.key == K_s):
				x_change = y_change = 0

	snake_movement()
	if(snake_rect == food_rect):
		food_x = random.choice(range(0, SCREENWIDTH - food_width, food_width))
		food_y = random.choice(range(0, SCREENHEIGHT - food_width, food_width))
		food_rect = pygame.Rect(food_x, food_y, food_width, food_width)

	# drawing part
	win.fill(background)
	pygame.draw.rect(win, RED, snake_rect)
	pygame.draw.rect(win, GREEN, food_rect)

	pygame.display.update()
	CLOCK.tick(FPS)
