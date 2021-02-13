fn main() {
    let company_string = "TutorialsPoint";  // string type
    let rating_float = 4.5;                 // float type
    let is_growing_boolean = true;          // boolean type
    let icon_char = '♥';                    //unicode character type
   
   
   
    //Syntax1
    let tuple_name:(data_type1,data_type2,data_type3) = (value1,value2,value3);
    //Syntax2
    let tuple_name = (value1,value2,value3);
    //Syntax1
    let variable_name = [value1,value2,value3];
    //Syntax2
    let variable_name:[dataType;size] = [value1,value2,value3];
    //Syntax3
    let variable_name:[dataType;size] = [default_value_for_elements,size]
    struct Name_of_structure {
        field1:data_type,
        field2:data_type,
        field3:data_type
    }
    enum enum_name {
        variant1,
        variant2,
        variant3
    }
}
//public module
pub mod a_public_module {
    pub fn a_public_function() {
       //public function
    }
    fn a_private_function() {
       //private function
    }
}
 //private module
mod a_private_module {
    fn a_private_function() {
    }
}