@interface Base
- (instancetype)initWithTag __attribute__((objc_designated_initializer));
@end

__attribute__((swift_attr("@UIActor")))
@interface View : Base

- (instancetype)initWithDesignated __attribute__((objc_designated_initializer));

@end
