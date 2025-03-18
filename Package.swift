// swift-tools-version: 6.0

import PackageDescription

let package = Package(
    name: "DaonFrameworks",
    platforms: [
        .iOS(.v13),
        .macOS(.v10_14)
    ],
    products: [
        .library(
            name: "DaonFrameworks",
            targets: ["DaonDocument"]
        )
    ],
    targets: [
        .binaryTarget(
            name: "DaonDocument",
            path: "Frameworks/DaonDocument.xcframework"
        )
    ]
)
