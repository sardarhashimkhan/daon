// swift-tools-version: 6.0

import PackageDescription

let package = Package(
    name: "DaonFrameworks",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        .library(
            name: "DaonFrameworks",
            targets: ["DaonFrameworks"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "DaonDocument",
            path: "DaonFrameworks/DaonDocument.xcframework"
        ),
        .target(
            name: "DaonFrameworks",
            dependencies: ["DaonDocument"]
        ),
    ]
)
