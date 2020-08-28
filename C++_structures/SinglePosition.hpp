#ifndef SINGLE_HPP
#define SINGLE_HPP
template <typename SingleContent>
class SinglePosition{
	public:
	SinglePosition(){};
	SinglePosition(SingleContent n){
		this->content = n;
		this->next = NULL;
	};
	~SinglePosition(){};
	SinglePosition(const SinglePosition &cpy){
		cpy->content = this->content;
		cpy->next = this->next;
	};
	SingleContent content;
	SinglePosition<SingleContent>* next;
};
#endif