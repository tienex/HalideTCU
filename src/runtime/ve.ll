declare <4096 x float> @llvm.fabs.v4096f32(<4096 x float>)

define weak_odr <4096 x float> @abs_f32x4096(<4096 x float> %x) nounwind alwaysinline {
       %tmp = call <4096 x float> @llvm.fabs.v4096f32(<4096 x float> %x)
       ret <4096 x float> %tmp
}

declare <4096 x float> @llvm.sqrt.v4096f32(<4096 x float>)
declare <2048 x double> @llvm.sqrt.v2048f64(<2048 x double>)

define weak_odr <4096 x float> @sqrt_f32x4096(<4096 x float> %x) nounwind alwaysinline {
       %tmp = call <4096 x float> @llvm.sqrt.v4096f32(<4096 x float> %x)
       ret <4096 x float> %tmp
}

define weak_odr <2048 x double> @sqrt_f64x2048(<2048 x double> %x) nounwind alwaysinline {
       %tmp = call <2048 x double> @llvm.sqrt.v2048f64(<2048 x double> %x)
       ret <2048 x double> %tmp
}

define weak_odr float @fast_inverse_f32(float %x) nounwind alwaysinline {
       %y = fdiv float 1.000000e+00, %x
       ret float %y
}

declare float @sqrt_f32(float)

define weak_odr float @fast_inverse_sqrt_f32(float %x) nounwind alwaysinline {
       %y = call float @sqrt_f32(float %x)
       %z = fdiv float 1.000000e+00, %y
       ret float %z
}
