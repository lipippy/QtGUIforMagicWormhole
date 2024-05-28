import QtQuick 2.15
import QtTest 1.0

TestCase {
    name: "magic_wormhole"

    function test_case1() {
        compare(1 + 1, 2, "sanity check");
        verify(true);
    }
}
