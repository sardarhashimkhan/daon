// swift-tools-version: 6.0
import PackageDescription

let package = Package(
    name: "DaonFrameworks",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "DaonFrameworks",
            targets: ["DaonFrameworks"]
        ),
    ],
    dependencies: [
            .package(url: "https://github.com/Alamofire/Alamofire.git", from: "5.0.0"),
            .package(url: "https://github.com/jdg/MBProgressHUD", from: "1.2.0"),
            .package(url: "https://github.com/yourJWTLibrary/JWT", from: "3.0.0"),
            .package(url: "https://github.com/datatheorem/TrustKit.git", from: "1.6.0")
        ],
    targets: [
        .target(
            name: "DaonFrameworks",
            dependencies: [
                            "BlinkID",
                            "DaonAuthenticatorFace",
                            "DaonAuthenticatorSDK",
                            "DaonCryptoSDK",
                            "DaonDocument",
                            "DaonFaceDetector",
                            "DaonFaceLiveness",
                            "DaonFaceMatcher",
                            "DaonFaceQuality",
                            "DaonFaceSDK",
                            "DaonFIDOSDK",
                            "DaonIDCapture",
                            "nc7000_3a_fs_matcher",
                            "Alamofire",
                            "MBProgressHUD",
                            "JWT",
                            "TrustKit"
                        ]
        ),
        .binaryTarget(
            name: "BlinkID",
            path: "Frameworks/BlinkID.xcframework"
        ),
        .binaryTarget(
            name: "DaonAuthenticatorFace",
            path: "Frameworks/DaonAuthenticatorFace.xcframework"
        ),
        .binaryTarget(
            name: "DaonAuthenticatorSDK",
            path: "Frameworks/DaonAuthenticatorSDK.xcframework"
        ),
        .binaryTarget(
            name: "DaonCryptoSDK",
            path: "Frameworks/DaonCryptoSDK.xcframework"
        ),
        .binaryTarget(
            name: "DaonDocument",
            path: "Frameworks/DaonDocument.xcframework"
        ),
        .binaryTarget(
            name: "DaonFaceDetector",
            path: "Frameworks/DaonFaceDetector.xcframework"
        ),
        .binaryTarget(
            name: "DaonFaceLiveness",
            path: "Frameworks/DaonFaceLiveness.xcframework"
        ),
        .binaryTarget(
            name: "DaonFaceMatcher",
            path: "Frameworks/DaonFaceMatcher.xcframework"
        ),
        .binaryTarget(
            name: "DaonFaceQuality",
            path: "Frameworks/DaonFaceQuality.xcframework"
        ),
        .binaryTarget(
            name: "DaonFaceSDK",
            path: "Frameworks/DaonFaceSDK.xcframework"
        ),
        .binaryTarget(
            name: "DaonFIDOSDK",
            path: "Frameworks/DaonFIDOSDK.xcframework"
        ),
        .binaryTarget(
            name: "DaonIDCapture",
            path: "Frameworks/DaonIDCapture.xcframework"
        ),
        .binaryTarget(
            name: "nc7000_3a_fs_matcher",
            path: "Frameworks/nc7000_3a_fs_matcher.xcframework"
        ),
        
    ]
)
