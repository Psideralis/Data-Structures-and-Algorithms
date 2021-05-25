#import <Foundation/Foundation.h>

#define  message_for(a, b)  \
   NSLog(@#a " and " #b ": We love you!\n")

typedef unsigned char BYTE;

NSNumber myInt;
NSString myString;
CGFloat myFloat;

struct Books {
   NSString *title;
   NSString *author;
   NSString *subject;
};  

typedef struct Books {
   NSString *title;
   NSString *author;
   NSString *subject;
} book_t;  

struct Books* {
   NSString *title;
   NSString *author;
   NSString *subject;
} book_ptr;

struct packed_struct {
   unsigned int f1:1;
   unsigned int f2:1;
   unsigned int f3:1;
   unsigned int f4:1;
   unsigned int type:4;
   unsigned int my_int:9;
} pack;

void (^simpleBlock)(void) = ^{
   NSLog(@"This is a block");
};

double (^multiplyTwoValues)(double, double) = 
   ^(double firstValue, double secondValue) {
      return firstValue * secondValue;
};

@interface SampleClass<ObjectType>:NSObject{
   double length;
   double breadth;
}
@property(nonatomic, readwrite) double height;
- (void)sampleMethod;
@end

@implementation SampleClass
-(id)init {
   self = [super init];
   return self;
}

- (void)dealloc{
  [super dealloc];
}

- (void)sampleMethod {
   NSLog(@"Hello, World! \n");
}
@end

- (int) max:(int) num1 secondNumber:(int) num2 {
   int result;
   if (num1 > num2) {
      result = num1;
   } else {
      result = num2;
   }
   return result; 
}

int main( int argc, char *argv[] ) {
   char* ch;
   SampleClass *sampleClass = [[SampleClass alloc]init];
   [sampleClass sampleMethod];
   ret = [max:2 secondNumber:3];
   [sampleClass released];
   sampleClass = nil;
   simpleBlock();
   message_for(Carole, Debra);
   double result = multiplyTwoValues(2,4); 
   NSLog(@"The result is %f", result);
   return 0;
}