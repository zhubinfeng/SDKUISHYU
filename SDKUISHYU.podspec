
Pod::Spec.new do |spec|

  spec.name         = "SDKUISHYU"
  spec.version      = "0.0.3"
  spec.summary      = "This is a SDK UI of SDKUISHYU."
  spec.description  = "Like this you can get LTGameSDKcore and SDKUISHYU use it."
  spec.homepage     = "https://github.com/zhubinfeng/SDKUISHYU"
  spec.license      = "MIT"
  spec.author       = { "zhubinfeng" => "zhubin_feng@163.com" }
  spec.platform     = :ios
  spec.source       = { :git => "https://github.com/zhubinfeng/SDKUISHYU.git", :tag => "#{spec.version}" }
  spec.source_files  = "SDKUISHYU/SDKUISHYU.framework/Headers/*.{h}"
  spec.vendored_frameworks = 'SDKUISHYU/SDKUISHYU.framework'
  spec.resource  = "SDKUISHYU/LTResource.bundle"
  spec.framework  = "Foundation", "UIKit"

end
