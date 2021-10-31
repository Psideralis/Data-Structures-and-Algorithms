/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: PsideralisDataStructures_Primitives.cs
Description:
********************************************* */

/* *********************************************
NAMESPACE:
    PsideralisDataStructures_Primitives
ENUMS:
    BOOL_e
    RET_e
STRUCTS:

CLASSES:
    PSI
METHODS:

********************************************* */
using IronPython.Hosting;
using Microsoft.Scripting.Hosting;
using System.Runtime.InteropServices;

namespace PsideralisDataStructures_Primitives
{
    static public class PSI_Base{
        public enum BOOL_e{
            PSI_true = 1,
            PSI_false = 0
        };

        public enum RET_e{
            EOF_EXCP = 6,
            UNEXCPECTEDOUT_EXCP = 5,
            UNEXCPECTEDIN_EXCP = 4,
            SIGN_EXCP = 3,
            OVERFLOW_EXCP = 2,
            ZERODIV_EXCP = 1,
            NO_ERROR = 0,
            NULLPTR_ERROR = -1,
            CAST_ERROR = -2,
            TYPE_ERROR = -3,
            NOTINIT_ERROR = -4,
            NOTALLOC_ERROR = -5,
            NOTDEALLOC_ERROR = -6
        };
    }
    public class PythonEngine{
        [DllImport("JSPsideralisDataStructures.dll")]
        public static extern object someTSFunction(object input);
        [DllImport("JSPsideralisDataStructures.dll")]
        public static extern object someJSFunction(object input);
        [DllImport("CPPPsideralisDataStructures.dll")]
        public static extern object someAsmFunction(object input);
        [DllImport("CPPPsideralisDataStructures.dll")]
        public static extern object someCFunction(object input);
        [DllImport("CPPPsideralisDataStructures.dll")]
        public static extern object someCppFunction(object input);
        public void foo(){
            ScriptEngine eng = Python.CreateEngine();
            var scope = eng.CreateScope();
            eng.Execute(@"
            def greetings(name):
                return 'Hello ' + name.title() + '!'
            ", scope);
            dynamic greetings = scope.GetVariable("greetings");
            System.Console.WriteLine(greetings("world"));
        }     
    }      
}
