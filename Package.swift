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
    dependencies: [],
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
                            "nc7000_3a_fs_matcher"
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
            url: "https://github.com/daoninc/fido-sdk-ios/releases/download/4.9.177/DaonCryptoSDK.xcframework.zip",
            checksum: "46b7af75e6e3884b0a807ed29ab8f002efde4328ff2ea7a2b5b3b54448f87288"
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
            url: "https://github.com/daoninc/fido-sdk-ios/releases/download/4.9.177/DaonFIDOSDK.xcframework.zip",
            checksum: "8aff6ddf32c5e342d6d0d44a828ef5da9670223ad8b837e8d75533575dae6e8f"
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
