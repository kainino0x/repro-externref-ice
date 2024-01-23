FLAGS := -mreference-types -O3 -g2

index.html: main.cpp
	emcc -o index.html main.cpp ${FLAGS}
