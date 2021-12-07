
# Flag introduction
CXX=g++
CXXFLAGS=-I.
NAME = namespaces
DEPS = $(NAME).hh
OBJS = $(NAME).o


%.o: %.c $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS)

$(NAME): $(OBJS)
	$(CXX) -o $@ $^ $(CFLAGS)
	echo "Compilation finished. Generated files"

clean:
	rm -f *.o $(OBJS)


