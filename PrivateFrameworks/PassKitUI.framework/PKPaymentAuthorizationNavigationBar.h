/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentAuthorizationNavigationBar : UINavigationBar {
    UIButton * _customButton;
    UILabel * _environmentLabel;
    PKPaymentAuthorizationLayout * _layout;
    UIImageView * _logoView;
    NSLayoutConstraint * _separatorLeftConstraint;
    UIView * _separatorView;
    long long  _style;
}

@property (nonatomic) PKPaymentAuthorizationLayout *layout;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (id)_buttonAttributedStringWithString:(id)arg1;
- (void)_createSubviewsWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_prepareConstraints;
- (id)_titleAttributedStringWithString:(id)arg1 color:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layout;
- (void)setCustomButtonHidden:(bool)arg1 animated:(bool)arg2;
- (void)setCustomButtonTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setLayout:(id)arg1;
- (void)setLogoHidden:(bool)arg1 animated:(bool)arg2;
- (void)setSeparatorHidden:(bool)arg1 animated:(bool)arg2;
- (void)setStyle:(long long)arg1;
- (long long)style;
- (void)updateConstraints;

@end
