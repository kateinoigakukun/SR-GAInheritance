import FakeUIKit

@MainActor
class MyView: FakeUIKit.View {
    init(tag: ()) {
        super.init(designated: ())
    }
}
