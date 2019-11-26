uno : 
	c++ pendulo.cpp -o pendulo.out
	./pendulo.out 100000 1.4 1
	python pendulo.py
	./pendulo.out 100000 1.44 1
	python pendulo.py
	./pendulo.out 100000 1.465 1
	python pendulo.py
	
dos : 
	c++ pendulo.cpp -o pendulo.out
	./pendulo.out 10000 1.35 2
	./pendulo.out 10000 1.38 2
	./pendulo.out 10000 1.41 2
	./pendulo.out 10000 1.44 2
	./pendulo.out 10000 1.47 2
	./pendulo.out 10000 1.5 2
	python pendulo_dos.py