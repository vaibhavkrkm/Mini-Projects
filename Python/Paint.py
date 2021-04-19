print("Loading...")

import pygame
import sys
import colors

pygame.init()

SCREENWIDTH = SCREENHEIGHT = 800
FPS = 30

game_display = pygame.display.set_mode((SCREENWIDTH, SCREENHEIGHT))
pygame.display.set_caption("Paint with Pygame")
pygame.mouse.set_cursor(*pygame.cursors.broken_x)
CLOCK = pygame.time.Clock()

pen_color = colors.really_blue
can_draw = False
coord = coord_prev = None

# filling the display surface
game_display.fill(colors.white)

print('''
Colors Available:
Press R: Red;
Press B: Blue;
Press G: Green;
Press P: Pink;
Press Y: Yellow

Press C: Clear Canvas
''')

while True:
	# ticking the FPS
	CLOCK.tick(FPS)

	# event section start
	for event in pygame.event.get():
		if(event.type == pygame.QUIT):
			pygame.quit()
			sys.exit()

		if(event.type == pygame.MOUSEBUTTONDOWN):
			can_draw = True
			coord = event.pos
		elif(event.type == pygame.MOUSEBUTTONUP):
			can_draw = False
			coord = coord_prev = None

		if(event.type == pygame.MOUSEMOTION):
			if(can_draw):
				coord_prev = coord
				coord = event.pos

		if(event.type == pygame.KEYDOWN):
			if(event.key == pygame.K_c):
				game_display.fill(colors.white)
			elif(event.key == pygame.K_r):
				pen_color = colors.really_red
			elif(event.key == pygame.K_g):
				pen_color = colors.earth_green
			elif(event.key == pygame.K_b):
				pen_color = colors.really_blue
			elif(event.key == pygame.K_p):
				pen_color = colors.bright_pink
			elif(event.key == pygame.K_y):
				pen_color = colors.bright_yellow
	# event section end

	if(can_draw):
		if(coord is not None and coord_prev is not None):
			pygame.draw.line(game_display, pen_color, coord, coord_prev, 3)

	# updating the display surface
	pygame.display.update()

pygame.quit()
sys.exit()
