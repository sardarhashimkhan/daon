// swift-tools-version: 5.7
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
        .binaryTarget(
            name: "DaonAuthenticatorFace",
            url: "https://github.com/sardarhashimkhan/daon/releases/download/1.0/DaonAuthenticatorFace.xcframework.zip",
            checksum: "bdec58fe3f302bcbb0a48c16211a9705cd7daebd367265f627bed43784c8a0c2"
        ),
        .binaryTarget(
            name: "DaonAuthenticatorSDK",
            url: "https://github.com/sardarhashimkhan/daon/releases/download/1.0/DaonAuthenticatorSDK.xcframework.zip",
            checksum: "609f51da2c7394b58b46c7623ecfce9b2cc2bf000e51c2c5261eee3fc3f8461e"
        ),
        .binaryTarget(
            name: "DaonCryptoSDK",
            url: "https://github.com/sardarhashimkhan/daon/releases/download/1.0/DaonCryptoSDK.xcframework.zip",
            checksum: "3a3f64c5d2abc25114fbe442745d299abb47087729953c58009989d47275a1a4"
        ),
        .binaryTarget(
            name: "DaonDocument",
            url: "https://github.com/sardarhashimkhan/daon/releases/download/1.0/DaonDocument.xcframework.zip",
            checksum: "5d96d93f71f541665c0eced98042d9987fc3e4001270827895feb522ad38f580"
        ),
        .binaryTarget(
            name: "DaonFaceDetector",
            url: "https://github.com/sardarhashimkhan/daon/releases/download/1.0/DaonFaceDetector.xcframework.zip",
            checksum: "69cdc62f15ef1377e1a15a6a33ed4b33756b1618642ae024b78e269e16457171"
        ),
        .binaryTarget(
            name: "DaonFaceLiveness",
            url: "https://github.com/sardarhashimkhan/daon/releases/download/1.0/DaonFaceLiveness.xcframework.zip",
            checksum: "bb8217b7f000e86d70a0da147908bbb1f94e4310c05119ab29ee6bd502d19227"
        ),
        .binaryTarget(
            name: "DaonFaceMatcher",
            url: "https://github.com/sardarhashimkhan/daon/releases/download/1.0/DaonFaceMatcher.xcframework.zip",
            checksum: "2a9d7e63cc801b17835d4f3496be48aba7df5515e9ea6afef1e8d09213e7bf95"
        ),
        .binaryTarget(
            name: "DaonFaceQuality",
            url: "https://github.com/sardarhashimkhan/daon/releases/download/1.0/DaonFaceQuality.xcframework.zip",
            checksum: "3e62ff7c8caab2ee973949315d58fadabb81f00fbf9a2ef3539cf9208f9efd80"
        ),
        .binaryTarget(
            name: "DaonFaceSDK",
            url: "https://github.com/sardarhashimkhan/daon/releases/download/1.0/DaonFaceSDK.xcframework.zip",
            checksum: "4265eb6a89f1097ea82a02114e6e8fd0344a6706cf66825a8b063fdc202ccbea"
        ),
        .binaryTarget(
            name: "DaonFIDOSDK",
            url: "https://github.com/sardarhashimkhan/daon/releases/download/1.0/DaonFIDOSDK.xcframework.zip",
            checksum: "58fdac47d1594e4795430ccbdf204952e71ee3c9d006591122f52f4e6d668352"
        ),
        .binaryTarget(
            name: "BlinkId",
            url: "https://github.com/sardarhashimkhan/daon/releases/download/1.0/BlinkId.xcframework.zip",
            checksum: "2a27b4e460636ab5d2d4868303fd0f09828127555f7a8fb02d2f2df2a6a109cf"
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
                "BlinkId"
            ]
        ),
        .testTarget(
            name: "DaonFrameworksTests",
            dependencies: ["DaonFrameworks"]
        ),
    ]
)
