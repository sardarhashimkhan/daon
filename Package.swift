// swift-tools-version: 6.0
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "DaonFrameworks",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "DaonFrameworks",
            targets: ["DaonFrameworks"]
        ),
    ],
    targets: [
        // Targets define the basic building blocks of a package, including modules or test suites.
        .binaryTarget(
            name: "DaonAuthenticatorFace",
            path: "DaonAuthenticatorFace.xcframework"
        ),
        .binaryTarget(
            name: "DaonAuthenticatorSDK",
            path: "DaonAuthenticatorSDK.xcframework"
        ),
        .binaryTarget(
            name: "DaonCryptoSDK",
            path: "DaonCryptoSDK.xcframework"
        ),
        .binaryTarget(
            name: "DaonDocument",
            path: "DaonDocument.xcframework"
        ),
        .binaryTarget(
            name: "DaonFaceDetector",
            path: "DaonFaceDetector.xcframework"
        ),
        .binaryTarget(
            name: "DaonFaceLiveness",
            path: "DaonFaceLiveness.xcframework"
        ),
        .binaryTarget(
            name: "DaonFaceMatcher",
            path: "DaonFaceMatcher.xcframework"
        ),
        .binaryTarget(
            name: "DaonFaceQuality",
            path: "DaonFaceQuality.xcframework"
        ),
        .binaryTarget(
            name: "DaonFaceSDK",
            path: "DaonFaceSDK.xcframework"
        ),
        .binaryTarget(
            name: "DaonFIDOSDK",
            path: "DaonFIDOSDK.xcframework"
        ),
        .binaryTarget(
            name: "DaonIDCapture",
            path: "DaonIDCapture.xcframework"
        ),
        .binaryTarget(
            name: "nc7000_3a_fs_matcher",
            path: "nc7000_3a_fs_matcher.xcframework"
        ),
        .binaryTarget(
            name: "BlinkId",
            path: "BlinkId.xcframework"
        ),
        .target(
            name: "DaonFrameworks",
            dependencies: [
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
                "BlinkId"
            ]
        ),
        .testTarget(
            name: "DaonFrameworksTests",
            dependencies: ["DaonFrameworks"]
        ),
    ]
)
