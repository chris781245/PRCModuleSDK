#
# Be sure to run `pod lib lint PRCModuleSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'PRCModuleSDK'
  s.version          = '0.1.0'
  s.summary          = 'A short description of PRCModuleSDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/chris781245/PRCModuleSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'chris781245' => 'chris781245@hotmail.com' }
  s.source           = { :git => 'https://github.com/chris781245/PRCModuleSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '10.0'
  s.vendored_frameworks = 'PRCModuleSDK.framework'
  s.resource = "PRCModuleSDK.framework/PRCModuleSDKResource.bundle"

  #  s.source_files = 'PRCModuleSDK/Classes/**/*'
  
  # s.resource_bundles = {
  #   'PRCModuleSDK' => ['PRCModuleSDK/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
  s.dependency 'SDWebImage'            "~> 5.18.3"
  s.dependency 'TTTAttributedLabel'    "~> 2.0.0"
  s.dependency 'Masonry',              "~> 1.1.0"
  
end
