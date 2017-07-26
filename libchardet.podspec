Pod::Spec.new do |s|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  s.name         = "libchardet"
  s.version      = "1.0.5"
  s.summary      = "adding Objective-C wrapper to libchardet"

  s.description  = <<-DESC
                   Small Objective C warpper addiont for  libcharded
                   It supports:
                   Detection of c-style char encoding detection
                   and created NSString by it's encoding
                   DESC

  s.homepage     = "https://github.com/albert-qjinp-queuez/libchardet"


  # ―――  Spec License  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  s.license      = { :type => "MPL 1.1", :file => "LICENSE.md" }


  # ――― Author Metadata  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  s.author             = { "Albert Q Park" => "albert.q.park@gmail.com" }
  s.social_media_url   = "hahaha"


  # ――― Platform Specifics ――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  s.ios.deployment_target = "8.0"
  s.osx.deployment_target = "10.7"


  # ――― Source Location ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  s.source       = { :git => "https://github.com/albert-qjinp-queuez/libchardet.git",
                     :tag => s.version.to_s }


  # ――― Source Code ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  s.source_files  = "include/*.{h,m}", "src/*.{h,m,tab,cpp}", "src/**/*.{h,m,tab,cpp}",
                    "ObjCWrapper/*.{h,m}", "project/chardet/*.{h}"


  # ――― Publich Headers ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  s.public_header_files = ["include/nscore.h","include/prmem.h", "include/version.h",
                           "ObjCWrapper/CharDetector.h", "project/chardet/libchardet.h", 
                           "src/chardet.h", "ObjCWrapper/NSString+chardet.h"]


  # ――― Project Settings ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  s.requires_arc = true
  s.xcconfig = { "OTHER_LDFLAGS" => "-ObjC",
                 "GCC_WARN_UNUSED_FUNCTION" => "NO" }

end
