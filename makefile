play: robot.o trabajador.o sirviente.o abastecedor.o main.o
	g++ robot.o trabajador.o sirviente.o abastecedor.o main.o -o play
main.o: main.cpp robot.h sirviente.h abastecedor.h trabajador.h
	g++ -c main.cpp
robot.o: robot.cpp robot.h
	g++ -c robot.cpp
trabajador.o: trabajador.cpp robot.h trabajador.h
	g++ -c trabajador.cpp
sirviente.o: sirviente.cpp robot.h sirviente.h
	g++ -c sirviente.cpp
abastecedor.o: abastecedor.cpp robot.h abastecedor.h
	g++ -c abastecedor.cpp