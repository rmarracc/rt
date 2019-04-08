# rt
Raytracer developed in C language

## Installation

### Clone

- Clone this repo using `git clone https://github.com/rmarracc/md5`

### Build

- Simply build the program with `make` in the cloned folder

## Usage

- Execute the program with `./rt [scenes]`
You can use the scenes given in the scenes folder ou create yours.

## Scene creation

Add light :
`light [position] [color/pow]`
- position : 3 decimal numbers
- color/pow : 3 decimal numbers, representating rgb color, higher number for stronger light spot

Add object :
`quadric [parameters] [color]
sphere [position] [radius] [color]
plane [position] [rotation x] [rotation y] [color]
cone [position] [rotation x] [rotation y] [angle] [color]
cylindre [position] [rotation x] [rotation y] [radius] [color]
dice [color]`
- parameters : quadric equation parameters (10 decimal numbers) (https://en.wikipedia.org/wiki/Quadric)
- color : rgb color (3 decimal numbers), between 0 and 1
- position : xyz position (3 decimal numbers), between 0 and 1
- rotation x/y : object rotation in degrees (2 decimal numbers)
- angle : cone angle (1 decimal number)
- radius : sphere/cylinder radius (1 decimal number)

Add group :
`section [num_objects]
union [num_objects]`
- num_objects : number of previously defined objects (1 entire number)

Additional objects parameters :
`inverted
material [reflextion] [transparency] [refraction indice]
texture [index] [zoom] [x offset]
damier [value]
wave [value]
wood [value]
perlin [value]
bump [value]
specular [specular] [alpha]`
- reflextion : reflextion percentage between 0 and 1 (1 decimal number)
- transparency : transparency percentage between 0 and 1 (1 decimal number)
- refraction indice : refraction value for Snell Descartes formula (1 decimal number) (glass : 1.54, water : 1.30, diamond : 2.40)
- index : Texture index, between 0 and 5 (1 entire number)
- value : perturbation value (1 decimal number)
- specular : specular light value (1 decimal number)
- alpha : specular alpha value (1 decimal number)


## Commands

- Rotate the camera by moving while holding the mouse
- Move the camera with WASD
- Exit the program with ESC or by cliking on the red cross

### Edit mode commands 

- E - Enable/Diseable the Edit mode
- P - Change perturbation (None, Checker, Perlin, Wood, Bumpmap, Wave)
- O/L - Increase/Decrease perturbation parameter
- B/N - Change selected object
- +/- - Change object parameter (Size for sphere or elipsoid, radius for cylinder, height for plane, angle for cone)

### Filter commands
- 1 - Sepia filter
- 2 - Manga filter (Add trames with 3 and 4)
- 5 - Export picture to .bmp
- 6 - 3D Stereoscopy
- 7 - Cell shading
- 8 - Display light spots
- 9 - Replace pure black color (rgb(0, 0, 0)) by 100% transparent item

## Known bugs

- Accepts scenes without any objects containing a new line
- Some noise while making a 2 overlaping plane section
- Texture only works on limited objects (Sphere, elipsoid)
- This version only supports MacOS

## Work distribution

mbenjell :

- Program architecture
- Parsing
- Textures
- Sepia filter
- Edition mode

cdittric :

- Basic raytracing algorithm
- Light gestion (Phong)
- Reflextion
- Combinational logic
- Sampling and camera movement

me (rmarracc) :

- Perturbations
- Filters
- Image saving (bmp format)
- Multithreading
- Transparency and Refraction
