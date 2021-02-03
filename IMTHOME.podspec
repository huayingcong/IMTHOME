#
# Be sure to run `pod lib lint IMTHOME.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'IMTHOME'
  s.version          = '0.1.6'
  s.summary          = '全流量SDK - of framewirkPod.'
  s.description      = 'TODO: 上传pod的一个演示.'
  s.homepage         = 'https://github.com/huayingcong/IMTHOME'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'huayingcong' => 'huayingcong@sina.com' }
  s.source           = { :git => 'https://github.com/huayingcong/IMTHOME.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'
  # s.source_files = 'IMTHOME/Classes/**/*'
  s.vendored_frameworks = ['IMTHOME/Classes/IMTSDK.framework'] #自己的framework在工程中的路径
  # s.resource_bundles = {
  #    'IMTHOME' => ['IMTHOME/Assets/*.png']
  #  }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
