// This file has been generated by codegen-options

#include <emscripten.h>
#include <emscripten/bind.h>

#include <filament/View.h>

using namespace emscripten;
using namespace filament;

EMSCRIPTEN_BINDINGS(jsenums_generated) {

enum_<View::QualityLevel>("View$QualityLevel")
    .value("LOW", View::QualityLevel::LOW)
    .value("MEDIUM", View::QualityLevel::MEDIUM)
    .value("HIGH", View::QualityLevel::HIGH)
    .value("ULTRA", View::QualityLevel::ULTRA)
    ;

enum_<View::BlendMode>("View$BlendMode")
    .value("OPAQUE", View::BlendMode::OPAQUE)
    .value("TRANSLUCENT", View::BlendMode::TRANSLUCENT)
    ;

enum_<View::BloomOptions::BlendMode>("View$BloomOptions$BlendMode")
    .value("ADD", View::BloomOptions::BlendMode::ADD)
    .value("INTERPOLATE", View::BloomOptions::BlendMode::INTERPOLATE)
    ;

enum_<View::DepthOfFieldOptions::Filter>("View$DepthOfFieldOptions$Filter")
    .value("NONE", View::DepthOfFieldOptions::Filter::NONE)
    .value("UNUSED", View::DepthOfFieldOptions::Filter::UNUSED)
    .value("MEDIAN", View::DepthOfFieldOptions::Filter::MEDIAN)
    ;

enum_<View::AntiAliasing>("View$AntiAliasing")
    .value("NONE", View::AntiAliasing::NONE)
    .value("FXAA", View::AntiAliasing::FXAA)
    ;

enum_<View::Dithering>("View$Dithering")
    .value("NONE", View::Dithering::NONE)
    .value("TEMPORAL", View::Dithering::TEMPORAL)
    ;

enum_<View::ShadowType>("View$ShadowType")
    .value("PCF", View::ShadowType::PCF)
    .value("VSM", View::ShadowType::VSM)
    .value("DPCF", View::ShadowType::DPCF)
    .value("PCSS", View::ShadowType::PCSS)
    ;

} // EMSCRIPTEN_BINDINGS
