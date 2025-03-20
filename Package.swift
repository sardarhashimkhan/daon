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
            targets: ["BlinkID",
                      "DaonAuthenticatorFace",
                      "DaonAuthenticatorSDK",
                      "DaonDocument",
                      "DaonFaceDetector",
                      "DaonFaceMatcher",
                      "DaonFaceQuality",
                      "DaonFaceSDK",
                      "DaonIDCapture"]
        ),
        .library(
            name: "DaonFIDOSDK",
            targets: [
                "DaonFIDOSDK",
                "DaonCryptoSDK",
                "DaonAuthenticatorSDK",
                "DaonFaceLiveness"
            ]
        ),
    ],
    dependencies: [],
    targets: [
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
        
    ]
)
