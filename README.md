# SR-GAInheritance


```console
$ swift build
SR-GAInheritance/Sources/SR-GAInheritance/SR_GAInheritance.swift:6:15: error: call to main actor-isolated initializer 'init(designated:)' in a synchronous nonisolated context
        super.init(designated: ())
              ^
FakeUIKit.View:2:12: note: calls to initializer 'init(designated:)' from outside of its actor context are implicitly asynchronous
    public init!(designated: ())
```
