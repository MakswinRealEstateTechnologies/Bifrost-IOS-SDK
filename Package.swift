// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "Bifrost",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "Bifrost",
            targets: ["Bifrost"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "Bifrost",
            path: "./Bifrost.xcframework"
        ),
    ]
)
