#ifndef DOUBLE_HPP
#define DOUBLE_HPP

template <typename DoubleContent>

class DoublePosition{
	public:
	DoublePosition(){};
	~DoublePosition(){};
	DoublePosition(const DoublePosition &cpy){
		cpy->content = this->content;
		cpy->next = this->next;
		cpy->previous = this->previous;
	};
	DoubleContent content;
	DoublePosition<DoubleContent>* previous;
	DoublePosition<DoubleContent>* next;
};

#endif