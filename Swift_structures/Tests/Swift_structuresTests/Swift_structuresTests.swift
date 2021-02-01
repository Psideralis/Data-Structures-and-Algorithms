import XCTest
@testable import Swift_structures

final class Swift_structuresTests: XCTestCase {
    func testExample() {
        // This is an example of a functional test case.
        // Use XCTAssert and related functions to verify your tests produce the correct
        // results.
        XCTAssertEqual(Swift_structures().text, "Hello, World!")
    }

    static var allTests = [
        ("testExample", testExample),
    ]
}
