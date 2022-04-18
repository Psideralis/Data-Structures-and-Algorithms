// [dependencies]
// libloading = "0.7"


fn call_dynamic() -> Result<u32, Box<dyn std::error::Error>> {
    unsafe {
        let lib = libloading::Library::new("/path/to/liblibrary.so")?;
        let func: libloading::Symbol<unsafe extern fn() -> u32> = lib.get(b"my_func")?;
        Ok(func())
    }
}