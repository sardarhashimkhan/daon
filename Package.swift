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
        .library(
            name: "DaonFaceSupport",
            targets: [
                "DaonFaceMatcher",
                "DaonFaceDetector",
                "DaonFaceQuality",
            ]
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
                            "DaonDocument",
                            "DaonFaceLiveness",
                            "DaonFaceSDK",
                            "DaonIDCapture",
                            "DaonFIDOSDK",
                            "DaonCryptoSDK",
                            "DaonAuthenticatorSDK",
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
            url: "https://github.com/sardarhashimkhan/daon/releases/download/13.0.0/DaonFaceDetector.xcframework.zip",
            checksum: "91264d07cb5d70d3a97c9e604d28bcf6f03e601a6b742c710c7ea4583979baf5"
        ),
        .binaryTarget(
            name: "DaonFaceLiveness",
            path: "Frameworks/DaonFaceLiveness.xcframework"
        ),
        .binaryTarget(
            name: "DaonFaceMatcher",
            url: "https://github.com/sardarhashimkhan/daon/releases/download/13.0.0/DaonFaceDetector.xcframework.zip",
            checksum: "45fa53158c552b0ece62ed3d23a7c2c989fd59d239ae05e3fbddef71c150f9db"
        ),
        .binaryTarget(
            name: "DaonFaceQuality",
            url: "https://github.com/sardarhashimkhan/daon/releases/download/13.0.0/DaonFaceDetector.xcframework.zip",
            checksum: "ae9fd9c11efbcdd240c3e3211d7c456dcd3170dd20a262ed37f8741dae420287"
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
