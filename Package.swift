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
        )
    ],
    dependencies: [],
    targets: [
        .binaryTarget(
            name: "DaonFrameworks",
            path: "Sources/DaonFrameworks/DaonFrameworks.xcframework"
        )
    ]
)
