Pod::Spec.new do |s|
  s.name                    = "Pushly"
  s.version                 = "1.0.2"
  s.summary                 = "The official PushSDK Framework for iOS native app notifications"

  s.homepage                = "https://pushly.com"
  s.license                 = { :type => "MIT", :file => "LICENSE" }
  s.author                  = { "Pushly" => "support@pushly.com" }

  s.platform                = :ios
  s.swift_version           = "5.7"
  s.source                  = { :git => "https://github.com/pushly/push-sdk-ios.git", :tag => "#{s.version}" }
  s.source_files            = "Sources/Pushly.xcframework/**/*.{h,m,swift}"
  s.ios.deployment_target   = "11.0"
end
