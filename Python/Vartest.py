import pygame
from pygame.locals import *
import random
import sys


def move():
	global moving
	if(not moving):
		moving = True


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
	snake_list[0].x += x_change
	snake_list[0].y += y_change


background = BLUE

snake_length = 5
moving = False
snake_rect = pygame.Rect(200, 200, snake_width, snake_width)
snake_list = [snake_rect]

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
				move()
				x_change = -speed
				y_change = 0
			elif(event.key == K_RIGHT):
				move()
				x_change = +speed
				y_change = 0
			elif(event.key == K_UP):
				move()
				x_change = 0
				y_change = -speed
			elif(event.key == K_DOWN):
				move()
				x_change = 0
				y_change = +speed
			elif(event.key == K_s):
				x_change = y_change = 0

	if(moving):
		snake_list.append(pygame.Rect(snake_rect.x, snake_rect.y, snake_width, snake_width))

		if(len(snake_list) > snake_length):
			del snake_list[0]

	snake_movement()

	if(snake_rect == food_rect):
		food_x = random.choice(range(0, SCREENWIDTH - food_width, food_width))
		food_y = random.choice(range(0, SCREENHEIGHT - food_width, food_width))
		food_rect = pygame.Rect(food_x, food_y, food_width, food_width)

	# drawing part
	win.fill(background)

	# drawing the snake
	for snake in snake_list:
		pygame.draw.rect(win, RED, snake)

	pygame.draw.rect(win, GREEN, food_rect)

	pygame.display.update()
	CLOCK.tick(FPS)
