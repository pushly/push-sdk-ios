Pod::Spec.new do |s|
  s.name                    = "Pushly"
  s.version                 = "1.3.4"
  s.summary                 = "The official PushSDK Framework for iOS native app notifications"

  s.homepage                = "https://pushly.com"
  s.license                 = { :type => "MIT", :file => "LICENSE" }
  s.author                  = { "Pushly" => "support@pushly.com" }

  s.source                  = { :git => "https://github.com/pushly/push-sdk-ios.git", :tag => s.version.to_s }
  s.platform                = :ios, "11.0"
  s.swift_version           = "5.7"
  s.requires_arc            = true

  s.vendored_frameworks     = "Sources/Pushly.xcframework"

  s.documentation_url       = "https://documentation.pushly.com/integration/implementation-steps/apple-ios"
end
