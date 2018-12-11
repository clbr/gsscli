.PHONY: all clean

FILES = $(wildcard *.cpp ../brr/*.cpp)
OBJS = $(FILES:.cpp=.o)

CXXFLAGS += -Wall -Wextra -ffunction-sections -fdata-sections
LDFLAGS += -Wl,-O1 -Wl,-gc-sections

NAME = gsscli

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(LDFLAGS) $(CXXFLAGS) $(LIBS) $(OBJS)

$(OBJS): $(wildcard *.h)

clean:
	rm -f $(NAME) *.o
