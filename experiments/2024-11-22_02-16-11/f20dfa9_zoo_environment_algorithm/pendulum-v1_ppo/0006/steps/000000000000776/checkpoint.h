// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/matrix/matrix.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/matrix/matrix.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/standardize/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
#include <rl_tools/nn_models/mlp/network.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/matrix/matrix.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/matrix/matrix.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/matrix/matrix.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/matrix/matrix.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/matrix/matrix.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/matrix/matrix.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
namespace rl_tools::checkpoint::actor {
    namespace layer_0 {
        namespace mean {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {35, 229, 207, 190, 233, 103, 168, 60, 215, 232, 167, 62};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Matrix<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Constant>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace precision {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {195, 84, 235, 63, 233, 60, 174, 63, 87, 123, 141, 62};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Matrix<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Constant>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_0 {
        using CONFIG = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::standardize::Configuration<float, unsigned long>; 
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::standardize::BindConfiguration<CONFIG>;
        using INPUT_SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::capability::Forward<true>;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::standardize::Layer<CONFIG, CAPABILITY, INPUT_SHAPE>;
        const TYPE module = {mean::parameters, precision::parameters};
        template <typename T_TYPE = TYPE>
        const T_TYPE factory = {mean::parameters, precision::parameters};
        template <typename T_TYPE = TYPE>
        const T_TYPE factory_function(){return T_TYPE{mean::parameters, precision::parameters};}
    }
    namespace layer_1 {
        namespace input_layer {
            namespace weights {
                namespace parameters_memory {
                    static_assert(sizeof(unsigned char) == 1);
                    alignas(float) const unsigned char memory[] = {79, 41, 13, 191, 83, 241, 101, 189, 28, 154, 54, 191, 57, 166, 20, 63, 117, 123, 147, 62, 174, 55, 20, 190, 249, 224, 120, 190, 124, 115, 138, 61, 135, 194, 219, 190, 212, 28, 140, 190, 201, 173, 53, 191, 124, 36, 169, 189, 102, 213, 18, 191, 204, 232, 186, 189, 99, 180, 27, 191, 77, 209, 20, 63, 91, 112, 146, 62, 191, 111, 42, 191, 46, 142, 126, 190, 148, 83, 217, 190, 71, 161, 153, 62, 24, 72, 57, 62, 113, 202, 39, 63, 235, 90, 46, 63, 204, 201, 33, 191, 89, 86, 152, 188, 110, 118, 127, 63, 53, 190, 62, 190, 240, 122, 105, 191, 88, 14, 78, 61, 83, 140, 65, 190, 24, 213, 16, 63, 127, 39, 51, 63, 123, 84, 45, 191, 199, 40, 158, 62, 121, 241, 124, 63, 212, 50, 27, 63, 81, 189, 100, 190, 224, 99, 31, 63, 157, 120, 98, 190, 151, 190, 211, 62, 133, 29, 47, 190, 111, 40, 23, 191, 103, 51, 26, 190, 211, 111, 68, 191, 26, 218, 201, 61, 7, 204, 31, 62, 45, 211, 174, 62, 107, 47, 227, 62, 112, 92, 7, 188, 25, 120, 112, 189, 183, 117, 172, 190, 63, 119, 219, 62, 28, 23, 144, 190, 83, 159, 3, 63, 109, 165, 195, 190, 186, 214, 164, 189, 29, 137, 108, 190, 62, 93, 24, 191, 181, 52, 128, 191, 164, 196, 133, 61, 84, 246, 146, 190, 47, 165, 230, 190, 255, 162, 247, 190, 99, 3, 169, 189, 31, 220, 38, 63, 7, 216, 7, 190, 100, 208, 135, 62, 8, 106, 9, 189, 78, 169, 129, 62, 156, 204, 16, 63, 13, 160, 59, 63, 149, 71, 232, 190, 222, 178, 81, 62, 2, 181, 17, 191, 6, 236, 4, 61, 165, 130, 175, 190, 81, 156, 165, 61, 154, 99, 228, 62, 205, 56, 143, 59, 66, 199, 15, 191, 148, 162, 17, 190, 149, 245, 61, 191, 178, 185, 143, 62, 212, 235, 67, 62, 38, 178, 145, 62, 127, 121, 14, 63, 95, 54, 140, 61, 250, 145, 218, 62, 222, 195, 19, 63, 187, 84, 141, 190, 170, 195, 192, 62, 177, 216, 107, 63, 195, 209, 44, 191, 203, 18, 53, 62, 98, 100, 93, 63};
                    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 32, 3, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Matrix<CONTAINER_SPEC>;
                    const CONTAINER_TYPE container = {(float*)memory}; 
                }
                using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
                const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
            }
            namespace biases {
                namespace parameters_memory {
                    static_assert(sizeof(unsigned char) == 1);
                    alignas(float) const unsigned char memory[] = {141, 100, 36, 191, 167, 127, 30, 62, 126, 114, 11, 63, 7, 185, 235, 188, 211, 67, 233, 190, 217, 84, 220, 62, 20, 88, 107, 190, 225, 5, 214, 190, 33, 77, 8, 191, 113, 145, 147, 62, 179, 200, 206, 62, 64, 198, 5, 191, 157, 251, 17, 63, 116, 206, 92, 189, 231, 151, 172, 190, 194, 44, 186, 190, 3, 42, 13, 190, 247, 144, 120, 190, 169, 9, 171, 62, 7, 245, 251, 62, 86, 197, 215, 189, 205, 25, 87, 190, 131, 35, 25, 189, 77, 129, 1, 191, 4, 194, 4, 191, 182, 171, 7, 190, 20, 73, 157, 62, 147, 185, 245, 189, 135, 117, 10, 191, 247, 181, 247, 189, 34, 59, 56, 63, 185, 202, 14, 191};
                    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Matrix<CONTAINER_SPEC>;
                    const CONTAINER_TYPE container = {(float*)memory}; 
                }
                using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
                const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
            }
        }
        namespace input_layer {
            using CONFIG = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Configuration<float, unsigned long, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::FAST_TANH, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::DefaultInitializer<float, unsigned long>, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input>; 
            using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::BindConfiguration<CONFIG>;
            using INPUT_SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
            using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::capability::Forward<true>;
            using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CONFIG, CAPABILITY, INPUT_SHAPE>;
            const TYPE module = {weights::parameters, biases::parameters};
            template <typename T_TYPE = TYPE>
            const T_TYPE factory = {weights::parameters, biases::parameters};
            template <typename T_TYPE = TYPE>
            const T_TYPE factory_function(){return T_TYPE{weights::parameters, biases::parameters};}
        }
        namespace hidden_layer_0 {
            namespace weights {
                namespace parameters_memory {
                    static_assert(sizeof(unsigned char) == 1);
                    alignas(float) const unsigned char memory[] = {79, 180, 126, 62, 227, 88, 121, 189, 202, 217, 151, 59, 77, 89, 47, 62, 3, 78, 16, 60, 81, 33, 166, 62, 26, 95, 83, 189, 76, 207, 184, 62, 194, 121, 67, 190, 52, 65, 127, 187, 45, 139, 132, 62, 214, 244, 0, 190, 113, 235, 52, 189, 110, 130, 195, 189, 209, 122, 11, 62, 204, 229, 129, 59, 91, 69, 54, 190, 28, 38, 158, 61, 242, 165, 222, 189, 100, 115, 49, 190, 91, 162, 144, 189, 123, 13, 112, 189, 92, 78, 134, 188, 66, 229, 17, 188, 32, 41, 112, 62, 103, 201, 39, 60, 202, 7, 149, 61, 115, 141, 165, 189, 202, 167, 226, 61, 14, 96, 150, 61, 227, 57, 231, 62, 6, 92, 171, 190, 22, 141, 124, 62, 109, 38, 125, 189, 230, 1, 11, 190, 219, 44, 184, 60, 155, 176, 133, 62, 62, 96, 163, 62, 167, 114, 74, 61, 238, 216, 130, 62, 57, 63, 141, 190, 119, 69, 15, 190, 235, 124, 46, 62, 186, 83, 31, 190, 175, 129, 199, 189, 153, 124, 160, 61, 127, 38, 158, 62, 111, 136, 143, 188, 116, 23, 21, 61, 244, 60, 131, 62, 185, 50, 6, 62, 165, 236, 183, 190, 125, 200, 35, 188, 66, 143, 31, 190, 105, 245, 214, 189, 151, 139, 198, 61, 69, 234, 184, 62, 76, 201, 42, 60, 156, 217, 40, 60, 226, 7, 6, 190, 13, 172, 32, 62, 47, 240, 50, 61, 206, 232, 218, 62, 239, 37, 135, 190, 82, 6, 183, 62, 255, 166, 174, 189, 12, 49, 126, 189, 18, 190, 124, 61, 26, 15, 59, 62, 5, 59, 39, 60, 242, 8, 166, 188, 18, 203, 81, 62, 96, 42, 129, 190, 34, 113, 208, 61, 255, 25, 30, 62, 45, 58, 139, 190, 106, 161, 140, 187, 130, 105, 93, 61, 136, 82, 75, 62, 5, 236, 58, 62, 132, 92, 29, 190, 149, 0, 68, 62, 203, 248, 5, 62, 242, 54, 56, 190, 141, 143, 18, 190, 175, 166, 112, 190, 83, 12, 220, 189, 20, 241, 227, 61, 24, 213, 11, 62, 230, 117, 162, 61, 220, 200, 101, 62, 158, 33, 37, 190, 38, 37, 151, 61, 147, 137, 32, 62, 8, 111, 211, 62, 27, 82, 50, 190, 23, 123, 230, 189, 25, 95, 8, 189, 180, 231, 130, 62, 22, 36, 140, 189, 28, 121, 135, 190, 56, 69, 213, 189, 110, 10, 213, 187, 79, 163, 136, 190, 57, 13, 173, 62, 117, 192, 40, 60, 76, 222, 185, 190, 14, 147, 189, 62, 63, 75, 161, 61, 215, 53, 76, 189, 121, 86, 214, 189, 183, 166, 194, 189, 216, 227, 216, 189, 0, 43, 145, 190, 39, 166, 133, 61, 135, 152, 186, 62, 84, 125, 180, 62, 200, 11, 153, 61, 40, 59, 88, 190, 132, 28, 124, 190, 48, 119, 42, 190, 150, 122, 67, 60, 37, 12, 122, 58, 59, 26, 184, 61, 44, 6, 163, 60, 93, 41, 83, 190, 220, 65, 229, 190, 87, 42, 38, 62, 147, 187, 147, 190, 170, 129, 11, 62, 96, 83, 95, 62, 98, 231, 244, 61, 203, 71, 32, 190, 231, 209, 156, 190, 26, 116, 14, 62, 133, 71, 141, 190, 22, 124, 232, 62, 243, 51, 141, 61, 21, 69, 76, 189, 115, 1, 197, 62, 140, 43, 132, 62, 48, 198, 119, 190, 220, 71, 176, 190, 98, 252, 2, 60, 128, 1, 23, 61, 51, 143, 92, 189, 80, 193, 36, 62, 197, 221, 134, 62, 129, 73, 7, 62, 28, 224, 135, 189, 64, 244, 186, 188, 100, 90, 139, 190, 212, 176, 137, 190, 196, 66, 162, 189, 219, 175, 15, 190, 98, 38, 63, 62, 40, 181, 241, 189, 246, 162, 159, 190, 246, 52, 120, 190, 68, 30, 116, 61, 255, 217, 34, 191, 92, 35, 93, 62, 145, 101, 92, 189, 247, 247, 138, 189, 5, 98, 224, 190, 6, 138, 33, 62, 216, 232, 94, 190, 17, 22, 157, 59, 29, 86, 4, 62, 86, 153, 115, 189, 148, 226, 73, 62, 33, 217, 117, 189, 185, 121, 149, 62, 200, 243, 211, 188, 171, 155, 186, 190, 68, 69, 49, 190, 182, 66, 111, 189, 55, 205, 152, 190, 23, 235, 215, 61, 175, 59, 7, 190, 82, 98, 108, 60, 108, 210, 190, 189, 159, 129, 7, 62, 112, 77, 76, 62, 225, 31, 4, 191, 171, 214, 139, 189, 37, 125, 44, 190, 169, 208, 56, 190, 220, 60, 46, 61, 37, 162, 168, 61, 127, 47, 165, 62, 247, 158, 158, 189, 167, 8, 241, 61, 12, 35, 14, 62, 179, 102, 35, 189, 8, 227, 1, 62, 150, 38, 199, 61, 190, 91, 109, 62, 234, 226, 29, 190, 105, 11, 219, 62, 75, 184, 4, 190, 77, 144, 40, 190, 229, 116, 173, 62, 36, 60, 174, 190, 1, 58, 106, 190, 169, 59, 7, 189, 80, 46, 39, 62, 230, 255, 249, 188, 87, 197, 240, 188, 207, 221, 130, 62, 102, 232, 189, 61, 171, 236, 243, 190, 179, 88, 156, 190, 77, 97, 95, 59, 100, 4, 15, 189, 233, 167, 144, 59, 211, 132, 145, 62, 221, 57, 171, 60, 162, 222, 228, 188, 30, 226, 98, 189, 213, 213, 126, 62, 106, 57, 173, 61, 194, 190, 186, 62, 214, 63, 102, 190, 112, 28, 133, 62, 74, 103, 174, 61, 237, 119, 50, 190, 167, 172, 34, 188, 112, 219, 111, 62, 175, 104, 109, 62, 116, 239, 42, 190, 177, 53, 168, 62, 131, 212, 175, 190, 248, 86, 155, 61, 133, 173, 51, 62, 23, 118, 130, 190, 109, 239, 110, 190, 123, 53, 110, 62, 180, 190, 51, 61, 59, 4, 142, 62, 227, 17, 246, 61, 98, 124, 180, 60, 142, 79, 251, 61, 43, 143, 158, 190, 47, 156, 180, 190, 79, 142, 137, 61, 138, 193, 18, 60, 232, 210, 42, 60, 242, 46, 207, 61, 148, 222, 12, 62, 217, 187, 47, 61, 214, 219, 14, 190, 209, 120, 215, 61, 41, 70, 183, 62, 12, 98, 176, 62, 155, 39, 174, 189, 50, 8, 57, 61, 222, 83, 27, 189, 171, 2, 121, 190, 95, 66, 37, 61, 33, 162, 73, 60, 20, 84, 35, 62, 187, 81, 66, 189, 21, 162, 170, 62, 148, 127, 31, 190, 176, 224, 43, 190, 33, 218, 107, 62, 243, 107, 67, 189, 152, 59, 131, 190, 54, 36, 128, 62, 142, 76, 91, 189, 200, 239, 236, 61, 98, 17, 19, 61, 227, 219, 125, 61, 139, 119, 237, 188, 197, 9, 50, 190, 51, 29, 150, 189, 251, 164, 93, 61, 109, 137, 142, 60, 135, 86, 15, 62, 178, 87, 149, 187, 240, 189, 225, 189, 200, 110, 188, 189, 169, 141, 193, 61, 75, 26, 204, 188, 234, 193, 174, 62, 210, 116, 103, 62, 192, 110, 33, 190, 59, 159, 134, 62, 183, 143, 171, 61, 65, 149, 140, 190, 151, 69, 242, 189, 133, 189, 154, 62, 219, 113, 193, 61, 17, 242, 144, 61, 126, 224, 174, 62, 200, 39, 120, 190, 218, 203, 102, 189, 92, 142, 151, 62, 48, 71, 203, 190, 49, 116, 140, 190, 149, 71, 13, 62, 108, 164, 147, 61, 179, 120, 163, 189, 112, 242, 205, 189, 67, 87, 48, 189, 96, 162, 173, 61, 138, 103, 102, 190, 89, 187, 169, 190, 38, 150, 161, 189, 164, 184, 20, 62, 110, 170, 212, 61, 161, 51, 34, 62, 99, 1, 6, 62, 189, 148, 164, 61, 151, 173, 65, 190, 61, 0, 141, 59, 53, 102, 176, 61, 180, 235, 216, 62, 3, 49, 42, 190, 219, 232, 157, 62, 138, 70, 135, 61, 230, 252, 133, 189, 222, 158, 48, 189, 159, 139, 181, 61, 238, 151, 101, 62, 184, 51, 199, 61, 71, 241, 153, 188, 41, 30, 57, 190, 215, 117, 43, 62, 58, 243, 26, 188, 181, 137, 77, 190, 112, 46, 198, 189, 33, 7, 235, 189, 50, 4, 211, 60, 13, 76, 178, 60, 58, 200, 248, 189, 106, 119, 59, 61, 127, 122, 205, 61, 187, 248, 105, 190, 247, 35, 17, 62, 193, 16, 158, 61, 245, 141, 204, 189, 84, 132, 196, 60, 106, 197, 20, 62, 246, 69, 116, 62, 220, 117, 129, 189, 248, 102, 15, 62, 25, 29, 134, 189, 68, 185, 3, 190, 172, 88, 125, 62, 192, 65, 23, 190, 114, 139, 135, 62, 85, 242, 238, 189, 235, 41, 82, 61, 185, 36, 94, 62, 242, 233, 110, 62, 122, 206, 89, 188, 135, 173, 39, 189, 4, 165, 152, 189, 25, 9, 23, 189, 172, 252, 40, 61, 84, 53, 68, 190, 117, 160, 208, 189, 73, 73, 74, 190, 193, 127, 147, 61, 70, 114, 29, 62, 172, 98, 142, 61, 76, 202, 62, 190, 131, 146, 65, 189, 64, 112, 179, 61, 74, 11, 139, 61, 32, 58, 196, 61, 221, 45, 54, 189, 46, 249, 53, 62, 210, 217, 10, 55, 125, 188, 148, 62, 212, 218, 211, 61, 73, 12, 49, 60, 1, 215, 224, 189, 145, 220, 62, 62, 143, 205, 16, 189, 150, 179, 21, 190, 189, 53, 240, 60, 109, 219, 131, 190, 200, 242, 132, 61, 149, 236, 1, 61, 142, 228, 189, 189, 221, 117, 59, 190, 22, 91, 64, 190, 252, 88, 232, 60, 61, 56, 50, 189, 250, 19, 129, 62, 60, 219, 210, 189, 249, 251, 151, 189, 118, 54, 193, 62, 210, 150, 89, 62, 33, 102, 133, 61, 89, 12, 26, 190, 64, 196, 254, 189, 47, 7, 1, 190, 114, 3, 81, 190, 232, 190, 224, 187, 19, 163, 231, 61, 225, 108, 117, 61, 134, 172, 88, 62, 92, 50, 160, 61, 14, 145, 225, 189, 83, 47, 100, 185, 4, 41, 110, 190, 221, 191, 240, 188, 211, 7, 205, 189, 3, 10, 107, 190, 15, 220, 149, 61, 29, 190, 185, 190, 96, 160, 178, 61, 248, 214, 199, 62, 226, 38, 48, 62, 115, 89, 155, 190, 114, 144, 40, 189, 104, 227, 170, 62, 214, 124, 186, 62, 173, 170, 59, 189, 164, 55, 113, 62, 98, 237, 232, 190, 213, 141, 86, 61, 90, 37, 198, 62, 7, 187, 82, 190, 177, 221, 137, 190, 119, 174, 211, 61, 167, 135, 101, 62, 252, 149, 16, 61, 238, 209, 157, 187, 7, 195, 130, 62, 173, 120, 240, 189, 31, 165, 207, 190, 156, 110, 181, 190, 98, 99, 32, 190, 27, 150, 232, 189, 201, 122, 142, 62, 191, 25, 206, 61, 173, 96, 143, 62, 187, 10, 147, 189, 218, 71, 240, 60, 222, 114, 62, 61, 60, 235, 168, 61, 215, 226, 15, 63, 172, 1, 206, 190, 196, 133, 101, 62, 167, 205, 241, 61, 178, 55, 174, 60, 151, 135, 131, 190, 91, 138, 109, 62, 172, 90, 243, 61, 75, 106, 27, 190, 91, 79, 252, 62, 118, 229, 210, 189, 251, 126, 47, 61, 130, 163, 2, 62, 206, 80, 129, 190, 38, 10, 94, 189, 180, 61, 18, 190, 21, 110, 198, 188, 140, 68, 154, 62, 75, 75, 243, 189, 89, 121, 156, 189, 122, 222, 177, 189, 206, 98, 217, 190, 79, 66, 146, 189, 194, 64, 139, 189, 145, 206, 62, 61, 37, 51, 196, 62, 45, 197, 153, 62, 53, 194, 12, 62, 79, 220, 224, 61, 49, 130, 180, 189, 91, 53, 60, 62, 12, 179, 127, 62, 38, 71, 235, 62, 5, 250, 245, 189, 132, 140, 22, 186, 53, 225, 110, 190, 82, 202, 177, 62, 171, 187, 122, 62, 251, 28, 106, 61, 233, 192, 253, 59, 19, 191, 136, 189, 73, 95, 109, 191, 15, 186, 22, 61, 162, 36, 74, 62, 76, 207, 130, 190, 42, 188, 42, 61, 72, 54, 181, 61, 206, 50, 133, 189, 148, 31, 30, 62, 44, 160, 219, 190, 95, 70, 54, 190, 196, 201, 241, 189, 76, 198, 248, 60, 222, 178, 26, 63, 133, 165, 139, 62, 13, 21, 11, 190, 97, 250, 198, 60, 177, 221, 0, 191, 9, 172, 79, 190, 206, 58, 225, 61, 125, 147, 46, 188, 232, 109, 220, 61, 40, 59, 12, 191, 54, 158, 29, 191, 165, 100, 211, 190, 146, 216, 250, 61, 123, 103, 22, 190, 14, 137, 152, 189, 53, 113, 178, 189, 107, 216, 243, 61, 150, 10, 174, 189, 116, 114, 16, 190, 21, 127, 129, 189, 98, 169, 188, 190, 87, 239, 194, 62, 179, 203, 179, 61, 235, 213, 220, 189, 116, 84, 136, 61, 254, 245, 4, 62, 78, 32, 30, 61, 59, 233, 3, 190, 217, 202, 86, 190, 112, 119, 198, 61, 207, 143, 72, 189, 2, 100, 159, 61, 187, 185, 174, 61, 129, 151, 35, 62, 58, 153, 141, 188, 47, 201, 143, 189, 57, 176, 162, 61, 227, 160, 24, 190, 239, 164, 74, 188, 157, 250, 112, 190, 204, 95, 197, 61, 179, 175, 123, 188, 121, 29, 16, 189, 172, 143, 121, 190, 227, 52, 123, 61, 36, 219, 200, 62, 2, 146, 3, 62, 55, 109, 222, 61, 148, 136, 13, 62, 142, 68, 142, 61, 24, 86, 151, 62, 106, 26, 80, 189, 100, 236, 182, 62, 157, 144, 189, 190, 154, 139, 24, 61, 156, 51, 142, 62, 65, 53, 139, 190, 139, 59, 191, 190, 33, 195, 132, 62, 70, 85, 104, 62, 176, 17, 26, 189, 77, 115, 240, 60, 57, 2, 58, 62, 129, 132, 178, 61, 86, 187, 123, 190, 156, 13, 156, 190, 245, 148, 60, 190, 128, 229, 79, 62, 228, 109, 128, 62, 11, 18, 14, 62, 5, 139, 209, 188, 64, 10, 74, 62, 91, 173, 229, 188, 42, 134, 224, 61, 23, 22, 139, 61, 144, 36, 102, 62, 50, 94, 253, 189, 86, 2, 96, 190, 255, 180, 188, 62, 200, 149, 214, 61, 27, 174, 161, 60, 50, 57, 22, 190, 233, 207, 28, 63, 163, 59, 99, 190, 74, 189, 38, 189, 5, 241, 25, 191, 17, 140, 189, 189, 134, 101, 171, 61, 73, 119, 28, 191, 155, 189, 166, 61, 158, 163, 242, 188, 119, 209, 17, 62, 186, 228, 0, 190, 54, 12, 208, 61, 176, 27, 17, 190, 139, 189, 209, 62, 144, 54, 131, 188, 248, 168, 6, 62, 199, 5, 198, 190, 123, 20, 131, 190, 21, 215, 28, 190, 32, 204, 13, 190, 158, 140, 210, 59, 188, 251, 18, 63, 80, 160, 58, 190, 130, 198, 255, 61, 206, 18, 106, 189, 22, 111, 14, 190, 80, 236, 191, 190, 157, 163, 37, 62, 113, 153, 241, 189, 220, 117, 142, 189, 190, 86, 153, 188, 154, 42, 76, 62, 32, 46, 25, 62, 113, 30, 23, 190, 143, 48, 236, 62, 0, 141, 171, 190, 126, 114, 37, 190, 101, 204, 197, 62, 188, 254, 139, 190, 82, 154, 128, 190, 150, 18, 82, 62, 40, 32, 124, 62, 215, 242, 112, 62, 251, 140, 217, 61, 32, 100, 213, 188, 68, 53, 146, 185, 62, 104, 0, 190, 85, 46, 251, 186, 206, 216, 171, 61, 48, 131, 22, 61, 228, 159, 21, 62, 148, 201, 97, 62, 12, 136, 62, 62, 240, 199, 69, 62, 213, 26, 2, 61, 68, 69, 8, 62, 154, 118, 141, 62, 0, 88, 221, 62, 216, 164, 168, 190, 17, 194, 140, 190, 55, 206, 191, 61, 187, 225, 165, 61, 252, 228, 157, 60, 77, 4, 141, 189, 173, 166, 167, 190, 149, 135, 217, 189, 42, 100, 157, 190, 35, 174, 171, 62, 42, 6, 6, 62, 220, 230, 195, 190, 96, 119, 213, 62, 193, 146, 16, 62, 157, 110, 101, 189, 97, 234, 166, 190, 178, 71, 11, 190, 166, 204, 58, 62, 161, 60, 40, 190, 113, 226, 61, 190, 68, 117, 242, 62, 21, 221, 114, 62, 222, 70, 73, 189, 78, 0, 46, 190, 97, 33, 128, 188, 3, 20, 134, 190, 125, 170, 25, 61, 203, 118, 231, 189, 189, 35, 103, 189, 152, 175, 169, 190, 121, 69, 108, 190, 169, 138, 182, 190, 17, 45, 154, 62, 75, 47, 55, 63, 189, 67, 123, 189, 156, 216, 73, 60, 4, 223, 150, 62, 240, 51, 4, 63, 52, 234, 136, 61, 143, 194, 113, 61, 207, 105, 187, 61, 25, 106, 64, 190, 102, 160, 23, 62, 231, 209, 0, 190, 97, 119, 180, 61, 48, 105, 166, 190, 130, 182, 55, 62, 63, 245, 161, 62, 183, 128, 161, 60, 108, 184, 24, 190, 163, 245, 126, 61, 168, 233, 106, 189, 36, 11, 164, 59, 37, 183, 149, 62, 3, 62, 181, 61, 120, 25, 254, 61, 13, 94, 237, 61, 64, 244, 35, 63, 58, 23, 166, 62, 99, 39, 170, 61, 231, 92, 31, 187, 75, 66, 149, 62, 19, 4, 139, 190, 148, 108, 161, 190, 168, 53, 228, 61, 147, 67, 96, 62, 20, 180, 104, 189, 97, 242, 86, 60, 234, 197, 34, 189, 166, 127, 25, 62, 112, 190, 44, 62, 76, 28, 86, 189, 152, 223, 220, 62, 56, 147, 192, 190, 49, 21, 135, 61, 100, 226, 154, 62, 189, 168, 161, 190, 7, 159, 152, 190, 137, 97, 233, 59, 110, 165, 237, 61, 253, 1, 110, 62, 133, 68, 133, 61, 210, 148, 105, 62, 232, 120, 147, 189, 254, 188, 214, 190, 149, 71, 133, 190, 73, 130, 12, 190, 12, 233, 250, 189, 27, 27, 182, 61, 74, 12, 166, 62, 98, 180, 167, 188, 187, 35, 161, 61, 245, 160, 49, 60, 95, 87, 86, 62, 30, 177, 152, 61, 23, 104, 144, 62, 9, 126, 82, 190, 55, 54, 254, 186, 188, 255, 10, 190, 35, 55, 63, 62, 54, 76, 49, 190, 158, 249, 127, 190, 157, 79, 159, 189, 59, 196, 5, 190, 26, 207, 211, 61, 231, 74, 0, 62, 212, 77, 160, 189, 215, 69, 131, 188, 193, 142, 0, 62, 165, 54, 121, 61, 142, 65, 46, 62, 54, 173, 77, 190, 111, 177, 114, 188, 197, 130, 73, 189, 150, 7, 243, 61, 49, 221, 20, 190, 30, 196, 150, 189, 237, 91, 41, 62, 229, 124, 30, 62, 0, 67, 222, 61, 2, 154, 137, 61, 251, 114, 246, 189, 181, 14, 39, 190, 176, 113, 25, 61, 211, 202, 212, 61, 112, 223, 211, 188, 183, 142, 207, 189, 162, 192, 52, 190, 196, 175, 186, 61, 5, 58, 173, 60, 213, 40, 98, 189, 244, 132, 5, 61, 171, 123, 188, 62, 53, 150, 129, 62, 184, 89, 1, 62, 14, 127, 30, 61, 170, 127, 82, 61, 16, 134, 192, 189, 103, 198, 167, 60, 245, 50, 50, 190, 65, 189, 122, 190, 26, 195, 8, 190, 74, 163, 68, 190, 101, 180, 63, 62, 245, 214, 25, 190, 154, 252, 185, 61, 218, 198, 13, 190, 213, 182, 43, 61, 177, 243, 90, 190, 44, 22, 136, 60, 147, 43, 251, 189, 1, 218, 59, 190, 125, 39, 181, 61, 76, 176, 137, 187, 207, 135, 101, 62, 250, 251, 162, 61, 163, 157, 143, 62, 247, 215, 210, 61, 238, 144, 148, 190, 61, 190, 101, 62, 67, 171, 149, 190, 117, 235, 111, 188, 108, 122, 53, 62, 37, 46, 162, 190, 167, 51, 122, 190, 117, 44, 187, 189, 138, 153, 81, 62, 191, 208, 143, 61, 33, 26, 250, 62, 121, 143, 50, 60, 169, 4, 52, 190, 78, 133, 61, 62, 147, 3, 96, 61, 212, 66, 81, 190, 164, 8, 45, 189, 142, 24, 48, 62, 50, 248, 183, 62, 69, 236, 134, 61, 220, 211, 178, 59, 96, 193, 39, 189, 108, 154, 53, 191, 138, 250, 183, 190, 215, 231, 161, 61, 130, 141, 3, 61, 45, 6, 245, 62, 155, 152, 37, 62, 143, 215, 57, 188, 217, 47, 194, 61, 59, 127, 133, 190, 234, 136, 174, 62, 152, 204, 36, 63, 243, 191, 230, 62, 141, 227, 178, 60, 13, 162, 63, 63, 245, 12, 151, 189, 16, 189, 125, 189, 150, 206, 151, 62, 1, 137, 3, 63, 154, 241, 32, 190, 173, 232, 25, 61, 236, 135, 133, 61, 74, 254, 98, 190, 65, 78, 216, 60, 228, 211, 227, 189, 254, 66, 206, 189, 66, 110, 127, 190, 33, 70, 142, 62, 184, 58, 227, 62, 183, 150, 242, 61, 225, 13, 56, 190, 18, 208, 88, 62, 142, 140, 143, 190, 200, 194, 27, 62, 171, 106, 212, 61, 122, 240, 82, 190, 40, 86, 182, 60, 82, 131, 243, 61, 236, 126, 72, 63, 200, 9, 27, 189, 72, 224, 200, 188, 148, 84, 239, 186, 228, 7, 49, 62, 29, 139, 190, 189, 57, 48, 25, 190, 59, 127, 219, 60, 40, 30, 213, 61, 87, 38, 233, 189, 165, 114, 27, 190, 239, 193, 221, 189, 130, 27, 247, 61, 229, 236, 103, 62, 56, 13, 244, 61, 99, 39, 184, 62, 5, 123, 167, 189, 251, 41, 51, 61, 104, 160, 116, 62, 11, 141, 190, 190, 64, 189, 95, 189, 171, 91, 49, 62, 183, 76, 151, 62, 9, 17, 96, 61, 66, 173, 180, 189, 172, 128, 145, 61, 6, 160, 17, 190, 37, 98, 219, 190, 245, 10, 25, 190, 99, 86, 48, 190, 118, 109, 6, 60, 196, 100, 101, 189, 128, 99, 39, 61, 243, 72, 65, 61, 154, 154, 105, 62, 59, 148, 154, 189, 192, 47, 163, 62, 223, 97, 194, 61, 17, 96, 170, 62, 214, 114, 54, 190, 200, 122, 203, 189, 27, 148, 7, 190, 73, 71, 114, 61, 96, 206, 26, 62, 128, 201, 16, 58, 81, 42, 173, 190, 110, 168, 15, 62, 7, 129, 162, 189, 114, 6, 225, 62, 0, 112, 18, 190, 228, 123, 11, 62, 74, 62, 174, 62, 56, 17, 104, 189, 193, 44, 94, 61, 59, 79, 181, 188, 83, 33, 134, 189, 156, 85, 180, 59, 90, 151, 228, 189, 201, 200, 187, 190, 133, 172, 130, 61, 209, 56, 66, 189, 68, 63, 160, 62, 151, 232, 71, 61, 77, 73, 0, 190, 15, 48, 134, 189, 172, 179, 95, 61, 54, 128, 150, 190, 134, 240, 202, 61, 175, 130, 19, 62, 19, 51, 19, 61, 192, 153, 46, 190, 238, 150, 14, 63, 198, 24, 165, 190, 194, 198, 24, 62, 88, 36, 236, 58, 197, 2, 4, 189, 74, 216, 181, 58, 235, 167, 191, 189, 85, 9, 132, 61, 11, 168, 49, 62, 168, 44, 46, 188, 243, 208, 86, 190, 235, 155, 231, 61, 107, 206, 158, 62, 170, 206, 40, 189, 1, 54, 67, 62, 193, 151, 134, 190, 75, 37, 59, 61, 16, 30, 20, 190, 104, 111, 27, 62, 177, 112, 163, 189, 155, 37, 69, 61, 58, 250, 238, 189, 203, 119, 95, 189, 14, 235, 129, 62, 192, 228, 225, 60, 118, 141, 204, 189, 90, 203, 129, 60, 0, 18, 48, 190, 182, 72, 198, 188, 216, 195, 26, 190, 120, 74, 150, 189, 140, 2, 131, 190, 193, 160, 188, 61, 246, 156, 244, 61, 246, 152, 179, 186, 250, 254, 4, 188, 120, 233, 202, 60, 125, 53, 89, 62, 13, 142, 218, 61, 236, 197, 68, 61, 204, 181, 105, 62, 117, 239, 232, 190, 177, 186, 230, 189, 36, 190, 146, 62, 222, 149, 98, 190, 189, 174, 152, 190, 176, 219, 9, 61, 82, 77, 107, 62, 215, 24, 104, 189, 5, 52, 1, 62, 231, 68, 243, 61, 31, 183, 216, 189, 133, 49, 197, 190, 155, 100, 59, 190, 235, 19, 254, 189, 211, 83, 89, 62, 219, 84, 126, 187, 136, 65, 36, 62, 117, 55, 20, 62, 39, 222, 42, 62, 58, 202, 232, 189, 230, 249, 171, 61, 36, 148, 172, 62, 46, 139, 184, 62, 166, 51, 144, 190, 177, 237, 47, 62, 185, 18, 254, 189, 221, 243, 141, 189, 142, 159, 132, 187, 195, 136, 134, 62, 173, 96, 136, 60, 153, 50, 182, 61, 194, 181, 149, 62, 187, 229, 204, 190, 221, 131, 175, 61, 182, 186, 165, 62, 55, 253, 18, 190, 81, 113, 194, 189, 116, 122, 24, 60, 50, 70, 191, 61, 160, 122, 59, 62, 126, 80, 68, 189, 150, 40, 127, 62, 252, 2, 81, 61, 81, 252, 25, 190, 176, 172, 151, 190, 242, 79, 12, 190, 200, 8, 52, 62, 26, 5, 125, 62, 91, 85, 155, 62, 26, 179, 155, 60, 116, 217, 76, 62, 30, 197, 68, 190, 166, 171, 43, 62, 210, 152, 143, 62, 66, 193, 194, 62, 190, 37, 183, 190};
                    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 32, 32, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Matrix<CONTAINER_SPEC>;
                    const CONTAINER_TYPE container = {(float*)memory}; 
                }
                using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
                const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
            }
            namespace biases {
                namespace parameters_memory {
                    static_assert(sizeof(unsigned char) == 1);
                    alignas(float) const unsigned char memory[] = {192, 224, 109, 60, 126, 91, 8, 62, 19, 41, 212, 60, 128, 31, 249, 188, 142, 116, 3, 190, 142, 28, 127, 62, 9, 148, 56, 189, 156, 190, 11, 190, 44, 143, 8, 62, 246, 199, 156, 189, 213, 112, 195, 61, 58, 176, 33, 190, 180, 248, 238, 189, 171, 55, 216, 61, 68, 146, 50, 190, 104, 207, 82, 62, 114, 193, 15, 62, 217, 144, 128, 189, 97, 105, 59, 62, 111, 131, 34, 189, 25, 200, 112, 189, 241, 244, 221, 189, 77, 30, 6, 62, 118, 161, 136, 61, 232, 157, 187, 189, 198, 6, 247, 187, 22, 37, 188, 190, 110, 202, 59, 188, 143, 42, 13, 189, 145, 255, 26, 61, 12, 70, 26, 190, 243, 176, 227, 61};
                    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Matrix<CONTAINER_SPEC>;
                    const CONTAINER_TYPE container = {(float*)memory}; 
                }
                using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
                const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
            }
        }
        namespace hidden_layer_0 {
            using CONFIG = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Configuration<float, unsigned long, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::FAST_TANH, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::DefaultInitializer<float, unsigned long>, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal>; 
            using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::BindConfiguration<CONFIG>;
            using INPUT_SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 32>;
            using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::capability::Forward<true>;
            using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CONFIG, CAPABILITY, INPUT_SHAPE>;
            const TYPE module = {weights::parameters, biases::parameters};
            template <typename T_TYPE = TYPE>
            const T_TYPE factory = {weights::parameters, biases::parameters};
            template <typename T_TYPE = TYPE>
            const T_TYPE factory_function(){return T_TYPE{weights::parameters, biases::parameters};}
        }
        namespace output_layer {
            namespace weights {
                namespace parameters_memory {
                    static_assert(sizeof(unsigned char) == 1);
                    alignas(float) const unsigned char memory[] = {85, 12, 77, 190, 120, 167, 123, 190, 111, 221, 143, 190, 55, 125, 142, 62, 208, 217, 78, 62, 10, 27, 174, 62, 181, 148, 177, 190, 12, 74, 150, 190, 126, 132, 72, 187, 73, 50, 190, 190, 222, 115, 34, 190, 90, 126, 180, 189, 126, 136, 57, 62, 32, 85, 170, 190, 248, 55, 8, 190, 93, 134, 169, 62, 229, 9, 11, 62, 230, 241, 141, 190, 50, 241, 176, 190, 200, 211, 82, 190, 220, 24, 158, 62, 228, 202, 100, 190, 63, 63, 195, 190, 8, 252, 160, 61, 16, 177, 134, 190, 252, 161, 132, 190, 142, 158, 159, 190, 207, 182, 149, 190, 182, 19, 144, 62, 220, 78, 232, 61, 191, 156, 131, 190, 236, 30, 80, 190};
                    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Matrix<CONTAINER_SPEC>;
                    const CONTAINER_TYPE container = {(float*)memory}; 
                }
                using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
                const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
            }
            namespace biases {
                namespace parameters_memory {
                    static_assert(sizeof(unsigned char) == 1);
                    alignas(float) const unsigned char memory[] = {238, 40, 249, 189};
                    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 1, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Matrix<CONTAINER_SPEC>;
                    const CONTAINER_TYPE container = {(float*)memory}; 
                }
                using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
                const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
            }
        }
        namespace output_layer {
            using CONFIG = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Configuration<float, unsigned long, 1, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::IDENTITY, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::DefaultInitializer<float, unsigned long>, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output>; 
            using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::BindConfiguration<CONFIG>;
            using INPUT_SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 32>;
            using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::capability::Forward<true>;
            using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CONFIG, CAPABILITY, INPUT_SHAPE>;
            const TYPE module = {weights::parameters, biases::parameters};
            template <typename T_TYPE = TYPE>
            const T_TYPE factory = {weights::parameters, biases::parameters};
            template <typename T_TYPE = TYPE>
            const T_TYPE factory_function(){return T_TYPE{weights::parameters, biases::parameters};}
        }
        using CONFIG = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn_models::mlp::Configuration<float, unsigned long, 1, 3, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::FAST_TANH, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::IDENTITY, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::DefaultInitializer<float, unsigned long>>; 
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn_models::mlp::BindConfiguration<CONFIG>;
        using INPUT_SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::capability::Forward<true>;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn_models::mlp::NeuralNetwork<CONFIG, CAPABILITY, INPUT_SHAPE>;
        const TYPE module = {input_layer::factory<TYPE::SPEC::INPUT_LAYER>, {hidden_layer_0::factory<TYPE::SPEC::HIDDEN_LAYER>}, output_layer::factory<TYPE::SPEC::OUTPUT_LAYER>};
        template <typename T_TYPE = TYPE>
        const T_TYPE factory = {input_layer::factory<typename T_TYPE::SPEC::INPUT_LAYER>, {hidden_layer_0::factory<typename T_TYPE::SPEC::HIDDEN_LAYER>}, output_layer::factory<typename T_TYPE::SPEC::OUTPUT_LAYER>};
        template <typename T_TYPE = TYPE>
        const T_TYPE factory_function(){return T_TYPE{input_layer::factory_function<typename T_TYPE::SPEC::INPUT_LAYER>(), {hidden_layer_0::factory_function<typename T_TYPE::SPEC::HIDDEN_LAYER>()}, output_layer::factory_function<typename T_TYPE::SPEC::OUTPUT_LAYER>()};}
    }
    namespace model_definition {
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::capability::Forward<true>; 
        template <typename T_CONTENT, typename T_NEXT_MODULE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn_models::sequential::OutputModule>
        using Module = typename RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn_models::sequential::Module<T_CONTENT, T_NEXT_MODULE>;
        using MODULE_CHAIN = Module<layer_0::TEMPLATE, Module<layer_1::TEMPLATE>>;
        using MODEL = typename RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn_models::sequential::Build<CAPABILITY, MODULE_CHAIN, layer_0::INPUT_SHAPE>;
    }
    using TYPE = model_definition::MODEL;
    const TYPE module = {layer_0::factory<TYPE::CONTENT>, {layer_1::factory<TYPE::NEXT_MODULE::CONTENT>, {}}};
    template <typename T_TYPE = TYPE>
    const T_TYPE factory = {layer_0::factory<typename T_TYPE::CONTENT>, {layer_1::factory<typename T_TYPE::NEXT_MODULE::CONTENT>, {}}};
    template <typename T_TYPE = TYPE>
    const T_TYPE factory_function(){return T_TYPE{layer_0::factory_function<typename T_TYPE::CONTENT>(), {layer_1::factory_function<typename T_TYPE::NEXT_MODULE::CONTENT>(), {}}};}
}
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/tensor/tensor.h>
namespace rl_tools::checkpoint::example::input {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {129, 186, 226, 62, 218, 237, 186, 188, 225, 191, 93, 63, 69, 84, 0, 191, 104, 3, 162, 63, 42, 3, 228, 63, 224, 127, 140, 189, 116, 61, 238, 63, 73, 168, 124, 191, 139, 77, 89, 190, 193, 102, 63, 62, 88, 122, 166, 63, 133, 14, 42, 62, 195, 123, 170, 190, 9, 223, 91, 190, 27, 115, 137, 63, 218, 18, 138, 63, 187, 75, 149, 190, 158, 184, 17, 191, 1, 209, 180, 191, 192, 14, 159, 191, 195, 182, 112, 62, 194, 43, 104, 190, 143, 159, 65, 63, 46, 124, 91, 63, 199, 28, 131, 63, 178, 24, 22, 187, 40, 199, 2, 63, 103, 180, 194, 63, 242, 7, 2, 64, 107, 129, 4, 191, 53, 95, 4, 191, 61, 0, 70, 191, 46, 45, 207, 190, 220, 160, 191, 59, 228, 179, 130, 63, 3, 115, 7, 62, 84, 167, 148, 62, 150, 6, 102, 191};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/tensor/tensor.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {122, 242, 44, 191, 11, 141, 60, 192, 16, 164, 152, 192, 212, 184, 39, 191, 167, 184, 56, 64, 206, 81, 139, 192, 50, 137, 81, 64, 172, 87, 184, 63, 127, 108, 141, 192, 185, 53, 149, 192, 40, 123, 37, 64, 81, 213, 192, 63, 97, 116, 115, 190};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 1>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-11-22_02-16-11/f20dfa9_zoo_environment_algorithm/pendulum-v1_ppo/0006/steps/000000000000776";
   char commit_hash[] = "f20dfa9e876d28301ef2e27976a432039a33cad5";
}