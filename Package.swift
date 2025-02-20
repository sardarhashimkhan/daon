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
        // Add any dependencies if required
    ],
    targets: [
        .binaryTarget(
            name: "DaonFrameworks",
            url: "https://github.com/sardarhashimkhan/daon/releases/download/1.0/DaonFrameworks.zip",
            checksum: "ccd0a38db8e143cda18adcbb0a7c57007b7d79d23e72a2c178aa5d3441a0b9de", branch: "SPM/BBYN_SPM")
        )
    ]
)
