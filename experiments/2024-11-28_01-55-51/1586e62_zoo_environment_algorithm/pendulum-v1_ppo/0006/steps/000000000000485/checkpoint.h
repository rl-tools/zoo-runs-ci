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
                    alignas(float) const unsigned char memory[] = {211, 181, 23, 191, 194, 202, 220, 61, 65, 230, 31, 191, 14, 95, 228, 62, 128, 196, 189, 62, 7, 62, 123, 190, 67, 32, 130, 190, 173, 183, 31, 62, 29, 123, 214, 190, 70, 250, 161, 190, 109, 85, 64, 191, 86, 114, 132, 59, 68, 10, 33, 191, 255, 213, 75, 61, 122, 123, 6, 191, 243, 205, 232, 62, 182, 71, 240, 62, 56, 140, 49, 191, 233, 164, 71, 190, 238, 175, 13, 191, 93, 219, 173, 62, 38, 113, 30, 62, 178, 22, 45, 63, 179, 85, 39, 63, 255, 154, 243, 190, 188, 51, 120, 190, 5, 54, 131, 63, 20, 21, 111, 190, 248, 34, 91, 191, 162, 118, 190, 61, 84, 7, 53, 190, 85, 11, 27, 63, 56, 10, 49, 63, 212, 249, 4, 191, 156, 198, 186, 61, 96, 232, 121, 63, 233, 76, 40, 63, 70, 25, 194, 190, 145, 62, 12, 63, 182, 135, 124, 190, 163, 163, 245, 62, 134, 46, 41, 190, 212, 67, 39, 191, 172, 36, 246, 58, 197, 105, 53, 191, 177, 189, 155, 61, 170, 102, 8, 62, 236, 5, 174, 62, 24, 26, 243, 62, 87, 97, 192, 189, 210, 189, 18, 189, 173, 67, 194, 190, 216, 83, 2, 63, 41, 167, 122, 190, 236, 200, 238, 62, 45, 240, 175, 190, 110, 14, 78, 189, 185, 225, 91, 190, 38, 229, 13, 191, 175, 51, 131, 191, 187, 236, 144, 61, 181, 134, 167, 190, 98, 135, 233, 190, 162, 217, 192, 190, 230, 22, 140, 190, 190, 125, 43, 63, 158, 81, 9, 190, 48, 180, 163, 62, 244, 247, 73, 189, 166, 177, 122, 62, 190, 141, 3, 63, 184, 23, 62, 63, 7, 219, 0, 191, 51, 227, 173, 62, 36, 53, 3, 191, 148, 115, 32, 61, 253, 241, 164, 190, 71, 206, 173, 61, 102, 110, 166, 62, 26, 148, 49, 62, 231, 146, 17, 191, 24, 105, 21, 190, 214, 33, 84, 191, 212, 2, 139, 62, 85, 246, 39, 62, 122, 104, 134, 62, 66, 114, 12, 63, 27, 191, 105, 61, 156, 199, 213, 62, 100, 99, 22, 63, 228, 183, 109, 190, 160, 1, 165, 62, 162, 191, 131, 63, 208, 202, 5, 191, 70, 129, 201, 188, 196, 232, 84, 63};
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
                    alignas(float) const unsigned char memory[] = {144, 86, 11, 191, 6, 0, 45, 62, 124, 15, 254, 62, 162, 212, 238, 57, 170, 151, 179, 190, 230, 151, 219, 62, 231, 69, 125, 190, 76, 36, 174, 190, 23, 26, 15, 191, 81, 71, 144, 62, 42, 146, 196, 62, 95, 123, 16, 191, 86, 113, 248, 62, 154, 169, 135, 188, 187, 195, 85, 190, 68, 83, 160, 190, 115, 181, 66, 190, 44, 44, 77, 190, 78, 35, 175, 62, 2, 218, 203, 62, 112, 203, 4, 190, 240, 24, 79, 190, 68, 56, 72, 189, 139, 9, 212, 190, 19, 254, 220, 190, 33, 160, 164, 189, 85, 42, 170, 62, 207, 81, 51, 190, 230, 20, 242, 190, 140, 2, 141, 189, 168, 86, 48, 63, 135, 226, 23, 191};
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
                    alignas(float) const unsigned char memory[] = {197, 6, 100, 62, 107, 242, 108, 189, 202, 130, 10, 61, 176, 251, 19, 62, 157, 54, 218, 187, 45, 15, 169, 62, 94, 113, 180, 189, 204, 79, 175, 62, 70, 241, 49, 190, 231, 34, 140, 188, 178, 127, 145, 62, 204, 87, 157, 189, 134, 46, 36, 189, 240, 41, 143, 189, 88, 67, 247, 61, 212, 140, 81, 188, 36, 60, 67, 190, 171, 5, 192, 61, 232, 233, 252, 189, 201, 227, 16, 190, 214, 49, 207, 189, 181, 117, 119, 189, 17, 210, 17, 60, 244, 204, 59, 189, 67, 17, 107, 62, 196, 57, 145, 188, 20, 126, 140, 61, 59, 88, 7, 190, 27, 171, 150, 61, 244, 10, 189, 61, 153, 11, 234, 62, 200, 127, 151, 190, 38, 138, 98, 62, 226, 87, 71, 189, 107, 139, 169, 189, 152, 68, 196, 188, 150, 41, 128, 62, 92, 158, 173, 62, 229, 53, 73, 188, 52, 206, 99, 62, 59, 163, 136, 190, 145, 8, 45, 190, 140, 4, 84, 62, 168, 53, 223, 189, 141, 76, 205, 189, 4, 246, 247, 61, 158, 226, 153, 62, 207, 113, 100, 189, 247, 144, 162, 60, 106, 195, 145, 62, 207, 16, 224, 61, 237, 152, 154, 190, 187, 237, 53, 189, 109, 138, 44, 190, 176, 204, 123, 189, 196, 140, 23, 61, 20, 49, 185, 62, 162, 72, 94, 189, 178, 56, 138, 60, 6, 208, 90, 190, 247, 182, 197, 61, 44, 227, 96, 61, 222, 14, 226, 62, 76, 115, 107, 190, 132, 73, 168, 62, 9, 101, 168, 189, 84, 200, 94, 188, 133, 232, 239, 60, 55, 153, 43, 62, 219, 99, 162, 60, 253, 30, 134, 189, 58, 222, 58, 62, 245, 129, 115, 190, 196, 140, 175, 61, 229, 155, 69, 62, 166, 17, 99, 190, 51, 205, 110, 186, 197, 52, 182, 61, 1, 192, 61, 62, 100, 242, 27, 62, 242, 232, 50, 190, 194, 239, 89, 62, 113, 72, 230, 61, 199, 145, 15, 190, 14, 119, 59, 190, 161, 57, 115, 190, 235, 41, 149, 189, 151, 24, 133, 61, 81, 66, 6, 62, 19, 164, 6, 61, 161, 43, 99, 62, 80, 208, 100, 190, 145, 136, 188, 60, 205, 141, 53, 62, 114, 124, 221, 62, 243, 245, 10, 190, 30, 1, 150, 189, 155, 245, 200, 188, 135, 41, 104, 62, 120, 172, 112, 189, 216, 68, 118, 190, 245, 198, 200, 189, 208, 238, 150, 60, 244, 31, 103, 190, 211, 190, 159, 62, 6, 213, 46, 188, 181, 182, 201, 190, 96, 68, 161, 62, 131, 167, 128, 61, 88, 208, 120, 189, 82, 48, 166, 189, 244, 232, 142, 189, 200, 101, 169, 189, 222, 19, 147, 190, 172, 79, 159, 61, 250, 166, 165, 62, 20, 212, 200, 62, 230, 208, 120, 61, 166, 83, 97, 190, 170, 170, 74, 190, 231, 3, 22, 190, 124, 155, 159, 60, 67, 66, 116, 60, 26, 212, 254, 61, 75, 84, 132, 61, 188, 252, 96, 190, 110, 208, 241, 190, 75, 205, 238, 61, 73, 33, 131, 190, 50, 144, 251, 61, 157, 203, 51, 62, 27, 41, 35, 62, 239, 94, 15, 190, 182, 13, 165, 190, 250, 21, 69, 62, 112, 54, 119, 190, 159, 141, 225, 62, 52, 136, 162, 61, 76, 9, 194, 189, 237, 109, 173, 62, 44, 196, 130, 62, 159, 203, 140, 190, 194, 81, 169, 190, 197, 124, 48, 61, 224, 148, 81, 61, 160, 210, 153, 189, 38, 21, 53, 62, 31, 20, 91, 62, 243, 49, 52, 62, 62, 235, 115, 189, 52, 64, 101, 189, 218, 239, 92, 190, 208, 177, 134, 190, 72, 184, 244, 188, 234, 94, 20, 190, 230, 217, 130, 62, 27, 24, 128, 189, 203, 169, 169, 190, 7, 93, 137, 190, 4, 83, 221, 60, 105, 35, 2, 191, 253, 155, 90, 62, 11, 253, 55, 190, 233, 230, 199, 188, 176, 8, 219, 190, 68, 148, 208, 61, 163, 160, 213, 189, 192, 1, 139, 61, 53, 39, 34, 62, 73, 124, 129, 189, 162, 177, 219, 61, 51, 100, 147, 189, 15, 35, 155, 62, 51, 34, 6, 190, 84, 148, 212, 190, 40, 191, 94, 189, 199, 216, 104, 60, 237, 8, 194, 190, 135, 84, 234, 61, 139, 16, 97, 190, 113, 129, 166, 61, 240, 151, 183, 189, 62, 171, 41, 61, 58, 34, 151, 62, 17, 103, 1, 191, 229, 94, 129, 61, 97, 2, 91, 190, 36, 91, 154, 189, 25, 197, 34, 62, 9, 63, 171, 61, 107, 27, 120, 62, 223, 68, 133, 189, 233, 13, 180, 61, 14, 212, 12, 62, 18, 100, 170, 60, 135, 158, 206, 61, 159, 95, 175, 61, 200, 54, 121, 62, 89, 233, 83, 190, 207, 200, 190, 62, 7, 91, 246, 189, 20, 218, 38, 190, 19, 197, 186, 62, 127, 138, 151, 190, 112, 119, 103, 190, 76, 186, 157, 59, 226, 144, 30, 62, 177, 142, 170, 189, 137, 64, 108, 189, 127, 161, 142, 62, 184, 141, 152, 61, 186, 172, 208, 190, 18, 119, 170, 190, 227, 33, 161, 186, 254, 60, 203, 185, 197, 8, 138, 189, 177, 84, 142, 62, 232, 233, 4, 189, 50, 238, 204, 188, 37, 120, 0, 190, 115, 240, 52, 62, 22, 97, 160, 61, 73, 69, 192, 62, 205, 250, 66, 190, 62, 118, 115, 62, 242, 190, 140, 61, 108, 220, 237, 189, 100, 7, 107, 188, 237, 198, 109, 62, 163, 175, 113, 62, 24, 97, 81, 190, 250, 82, 136, 62, 211, 87, 170, 190, 214, 243, 206, 61, 207, 185, 80, 62, 249, 113, 87, 190, 173, 134, 114, 190, 19, 175, 135, 62, 30, 49, 55, 61, 20, 40, 100, 62, 107, 205, 169, 61, 10, 12, 53, 61, 40, 212, 205, 61, 244, 7, 120, 190, 16, 164, 194, 190, 94, 209, 144, 61, 117, 37, 25, 61, 185, 111, 132, 189, 43, 56, 203, 61, 105, 117, 216, 61, 155, 201, 33, 61, 221, 12, 65, 190, 180, 150, 2, 61, 174, 169, 177, 62, 221, 55, 188, 62, 156, 42, 76, 189, 92, 220, 188, 60, 27, 117, 63, 189, 124, 247, 90, 190, 183, 165, 6, 61, 56, 108, 251, 58, 205, 6, 30, 62, 126, 144, 133, 189, 119, 139, 161, 62, 81, 246, 14, 190, 216, 189, 35, 190, 120, 141, 133, 62, 196, 48, 49, 188, 238, 48, 129, 190, 229, 230, 139, 62, 140, 43, 124, 189, 27, 55, 199, 61, 5, 163, 36, 60, 22, 83, 157, 61, 204, 103, 55, 189, 145, 200, 26, 190, 154, 244, 230, 189, 27, 27, 140, 61, 185, 253, 27, 61, 206, 26, 234, 61, 111, 239, 56, 188, 95, 137, 7, 190, 166, 157, 212, 189, 59, 39, 137, 61, 157, 5, 89, 189, 43, 115, 184, 62, 57, 44, 129, 62, 235, 106, 2, 190, 182, 178, 118, 62, 187, 35, 184, 61, 154, 35, 103, 190, 179, 128, 30, 190, 53, 60, 151, 62, 201, 194, 225, 61, 176, 158, 98, 60, 78, 24, 154, 62, 186, 108, 110, 190, 37, 205, 153, 189, 35, 81, 164, 62, 198, 68, 179, 190, 205, 110, 143, 190, 253, 2, 57, 62, 33, 90, 136, 61, 152, 187, 242, 189, 155, 210, 245, 189, 210, 31, 81, 188, 186, 232, 123, 61, 176, 223, 39, 190, 140, 95, 182, 190, 190, 20, 183, 189, 147, 34, 64, 62, 207, 203, 41, 61, 115, 217, 37, 62, 198, 236, 156, 61, 186, 30, 174, 61, 142, 86, 136, 190, 87, 55, 101, 189, 173, 88, 178, 61, 3, 29, 219, 62, 212, 116, 5, 190, 77, 83, 136, 62, 175, 101, 88, 61, 15, 25, 3, 188, 54, 145, 123, 189, 233, 118, 130, 61, 59, 247, 95, 62, 185, 129, 143, 61, 16, 148, 192, 188, 145, 247, 33, 190, 159, 186, 45, 62, 55, 162, 139, 61, 100, 21, 21, 190, 15, 196, 168, 189, 223, 103, 164, 189, 88, 119, 159, 59, 81, 108, 5, 188, 68, 6, 43, 190, 188, 27, 128, 61, 203, 63, 170, 61, 134, 91, 94, 190, 93, 135, 123, 61, 155, 212, 202, 61, 43, 2, 138, 189, 228, 170, 116, 187, 6, 118, 1, 62, 255, 33, 71, 62, 246, 224, 167, 189, 147, 31, 198, 61, 116, 85, 226, 189, 207, 156, 149, 189, 52, 176, 162, 62, 191, 219, 216, 189, 152, 68, 35, 62, 241, 114, 213, 189, 169, 169, 227, 61, 186, 121, 37, 62, 158, 26, 41, 62, 128, 155, 223, 187, 181, 138, 200, 189, 101, 183, 98, 189, 205, 52, 192, 187, 179, 37, 195, 60, 127, 37, 178, 189, 64, 171, 12, 189, 65, 213, 31, 190, 206, 74, 0, 62, 66, 16, 216, 61, 243, 18, 19, 61, 124, 140, 100, 190, 110, 225, 160, 188, 61, 123, 148, 61, 142, 207, 117, 61, 74, 31, 24, 188, 133, 138, 156, 188, 82, 238, 107, 62, 198, 171, 51, 188, 103, 157, 116, 62, 21, 129, 225, 60, 120, 25, 120, 187, 124, 69, 58, 190, 201, 43, 23, 62, 228, 27, 66, 61, 176, 135, 99, 189, 216, 124, 155, 61, 134, 38, 104, 190, 49, 199, 158, 61, 179, 5, 2, 189, 180, 97, 135, 189, 25, 227, 44, 190, 54, 202, 59, 190, 46, 17, 130, 61, 212, 109, 17, 189, 25, 9, 103, 62, 38, 28, 186, 189, 41, 44, 21, 190, 34, 251, 160, 62, 205, 185, 86, 62, 190, 85, 149, 60, 103, 178, 14, 190, 246, 244, 192, 189, 129, 254, 163, 189, 222, 123, 110, 190, 0, 38, 177, 60, 183, 157, 183, 61, 69, 5, 10, 62, 12, 30, 69, 62, 241, 211, 1, 61, 107, 29, 153, 189, 117, 137, 208, 59, 146, 146, 51, 190, 158, 136, 31, 188, 168, 16, 47, 189, 123, 75, 58, 190, 97, 141, 218, 60, 50, 71, 215, 190, 232, 211, 26, 61, 54, 198, 186, 62, 16, 132, 47, 62, 3, 139, 135, 190, 203, 41, 141, 189, 188, 98, 165, 62, 210, 136, 188, 62, 26, 202, 180, 189, 235, 17, 74, 62, 182, 40, 221, 190, 118, 205, 63, 61, 197, 178, 210, 62, 142, 174, 22, 190, 72, 83, 138, 190, 203, 133, 8, 62, 36, 248, 89, 62, 0, 111, 199, 59, 34, 57, 194, 188, 154, 211, 141, 62, 86, 148, 17, 190, 63, 9, 180, 190, 36, 152, 196, 190, 56, 5, 33, 190, 144, 248, 168, 189, 110, 254, 95, 62, 96, 31, 202, 61, 241, 247, 125, 62, 139, 140, 159, 189, 227, 21, 252, 188, 108, 70, 2, 188, 1, 100, 188, 61, 38, 133, 16, 63, 72, 152, 181, 190, 168, 225, 65, 62, 168, 55, 173, 61, 199, 249, 177, 61, 106, 94, 117, 190, 6, 132, 100, 62, 125, 107, 224, 61, 77, 98, 48, 190, 102, 195, 206, 62, 249, 201, 171, 189, 79, 61, 218, 61, 67, 228, 40, 62, 72, 248, 78, 190, 86, 137, 57, 189, 81, 127, 0, 190, 30, 159, 228, 188, 108, 93, 110, 62, 49, 183, 49, 190, 239, 27, 142, 189, 177, 32, 222, 189, 26, 210, 180, 190, 182, 235, 235, 189, 229, 140, 51, 189, 31, 26, 108, 61, 53, 220, 150, 62, 155, 195, 143, 62, 53, 31, 250, 61, 64, 172, 189, 61, 187, 156, 232, 189, 41, 145, 200, 61, 78, 227, 118, 62, 44, 227, 1, 63, 74, 248, 160, 189, 64, 14, 4, 61, 177, 161, 76, 190, 6, 218, 154, 62, 78, 16, 75, 62, 21, 157, 140, 61, 225, 141, 223, 60, 22, 6, 164, 189, 144, 171, 47, 191, 128, 164, 39, 60, 248, 218, 179, 61, 147, 193, 146, 190, 16, 96, 171, 56, 35, 4, 155, 61, 34, 134, 67, 189, 25, 232, 34, 62, 133, 212, 173, 190, 8, 84, 246, 189, 146, 10, 213, 189, 251, 37, 21, 61, 189, 251, 242, 62, 97, 158, 160, 62, 63, 34, 48, 190, 253, 104, 77, 61, 249, 104, 163, 190, 21, 254, 53, 190, 254, 30, 130, 61, 103, 113, 71, 60, 170, 102, 161, 61, 80, 3, 219, 190, 160, 84, 18, 191, 123, 205, 241, 190, 250, 39, 183, 61, 88, 102, 244, 189, 100, 127, 177, 189, 170, 188, 255, 189, 19, 188, 32, 62, 0, 40, 147, 189, 229, 140, 36, 190, 231, 229, 28, 188, 205, 246, 178, 190, 69, 44, 192, 62, 22, 150, 213, 61, 202, 47, 23, 190, 77, 11, 236, 60, 18, 51, 4, 62, 192, 39, 144, 59, 224, 120, 240, 189, 218, 76, 58, 190, 246, 146, 229, 61, 159, 85, 146, 189, 90, 152, 188, 61, 53, 2, 86, 61, 228, 188, 75, 62, 97, 129, 238, 187, 18, 195, 212, 189, 121, 74, 240, 61, 61, 248, 20, 190, 242, 106, 12, 61, 163, 175, 120, 190, 96, 70, 42, 62, 0, 161, 221, 60, 228, 97, 104, 189, 202, 151, 137, 190, 109, 206, 18, 61, 185, 9, 182, 62, 154, 38, 24, 62, 113, 110, 29, 62, 56, 183, 178, 61, 151, 78, 69, 61, 116, 204, 162, 62, 206, 194, 232, 189, 97, 139, 168, 62, 78, 103, 185, 190, 146, 128, 75, 60, 135, 46, 166, 62, 70, 104, 107, 190, 15, 91, 187, 190, 17, 204, 148, 62, 191, 44, 85, 62, 60, 117, 148, 189, 174, 60, 162, 60, 167, 31, 76, 62, 233, 47, 152, 61, 57, 66, 74, 190, 138, 197, 178, 190, 59, 97, 74, 190, 235, 3, 113, 62, 88, 215, 74, 62, 250, 70, 3, 62, 10, 167, 174, 189, 249, 36, 84, 62, 83, 99, 225, 189, 237, 181, 93, 61, 144, 119, 186, 61, 17, 136, 128, 62, 209, 150, 194, 189, 31, 203, 2, 190, 132, 204, 99, 62, 116, 118, 118, 62, 197, 221, 187, 60, 140, 0, 222, 187, 232, 13, 10, 63, 93, 243, 155, 190, 62, 236, 195, 189, 58, 244, 2, 191, 167, 107, 241, 189, 205, 93, 39, 62, 58, 236, 226, 190, 197, 145, 107, 189, 32, 84, 12, 62, 71, 201, 144, 62, 130, 165, 102, 190, 14, 239, 24, 189, 153, 91, 170, 60, 125, 137, 114, 62, 208, 124, 192, 61, 29, 104, 150, 61, 59, 182, 154, 190, 79, 171, 180, 189, 195, 231, 130, 190, 145, 56, 97, 188, 140, 226, 21, 190, 227, 96, 209, 62, 134, 24, 153, 190, 38, 47, 134, 60, 112, 112, 173, 189, 193, 37, 176, 189, 55, 169, 61, 190, 80, 148, 17, 62, 110, 62, 230, 189, 138, 96, 81, 188, 195, 209, 97, 189, 103, 197, 72, 62, 181, 223, 44, 62, 99, 251, 86, 190, 174, 215, 210, 62, 179, 182, 168, 190, 148, 40, 56, 190, 223, 137, 208, 62, 0, 223, 106, 190, 53, 18, 133, 190, 243, 35, 129, 62, 16, 167, 122, 62, 147, 6, 64, 62, 85, 108, 172, 61, 128, 183, 247, 59, 13, 217, 201, 188, 36, 62, 91, 189, 76, 172, 168, 188, 92, 166, 142, 61, 181, 102, 169, 61, 181, 181, 152, 61, 151, 91, 104, 62, 240, 125, 0, 62, 53, 132, 78, 62, 249, 61, 83, 189, 139, 26, 131, 61, 147, 192, 136, 62, 50, 149, 221, 62, 230, 153, 151, 190, 208, 152, 120, 190, 1, 188, 179, 61, 137, 126, 10, 61, 158, 162, 97, 61, 172, 52, 87, 189, 178, 79, 173, 190, 165, 64, 87, 189, 163, 71, 137, 190, 186, 107, 163, 62, 34, 159, 19, 62, 20, 226, 208, 190, 130, 124, 186, 62, 249, 166, 12, 62, 44, 245, 188, 189, 127, 37, 159, 190, 160, 111, 202, 189, 222, 92, 77, 62, 239, 18, 64, 190, 146, 52, 41, 190, 108, 229, 212, 62, 122, 66, 136, 62, 178, 99, 47, 189, 195, 165, 82, 190, 71, 249, 55, 61, 133, 20, 131, 190, 209, 226, 178, 61, 30, 104, 233, 189, 188, 104, 135, 60, 133, 61, 139, 190, 110, 169, 115, 190, 144, 180, 183, 190, 54, 218, 132, 62, 181, 63, 16, 63, 132, 23, 146, 189, 100, 78, 24, 62, 247, 151, 134, 62, 185, 127, 1, 63, 10, 223, 237, 61, 242, 91, 87, 189, 220, 86, 150, 60, 148, 199, 89, 190, 170, 203, 42, 62, 1, 173, 214, 188, 235, 72, 211, 61, 59, 73, 168, 190, 86, 91, 147, 62, 103, 57, 190, 62, 7, 119, 225, 189, 75, 229, 110, 190, 85, 123, 18, 62, 79, 52, 133, 189, 140, 46, 208, 61, 17, 167, 96, 62, 243, 202, 193, 61, 161, 15, 95, 62, 86, 154, 22, 60, 99, 221, 28, 63, 4, 57, 65, 62, 192, 199, 254, 61, 130, 27, 212, 189, 26, 196, 39, 62, 128, 13, 142, 190, 236, 25, 100, 190, 62, 245, 207, 61, 88, 87, 70, 62, 152, 9, 78, 189, 254, 203, 134, 61, 191, 66, 163, 189, 171, 58, 16, 62, 28, 204, 60, 62, 149, 5, 229, 189, 39, 154, 200, 62, 52, 60, 187, 190, 150, 221, 51, 61, 176, 89, 168, 62, 200, 239, 136, 190, 248, 26, 154, 190, 56, 18, 80, 61, 171, 21, 223, 61, 196, 78, 68, 62, 142, 176, 57, 61, 231, 212, 131, 62, 72, 228, 194, 189, 85, 191, 182, 190, 97, 20, 147, 190, 3, 62, 23, 190, 212, 199, 161, 189, 94, 13, 212, 60, 56, 105, 166, 62, 51, 219, 165, 189, 26, 183, 170, 61, 97, 62, 145, 189, 88, 132, 22, 62, 11, 243, 159, 61, 140, 59, 146, 62, 248, 99, 44, 190, 126, 102, 23, 61, 232, 19, 6, 190, 102, 69, 26, 62, 218, 232, 19, 190, 245, 172, 103, 190, 127, 141, 155, 189, 251, 181, 199, 189, 30, 81, 184, 61, 33, 45, 204, 61, 230, 62, 134, 189, 255, 68, 176, 189, 249, 30, 133, 61, 81, 63, 77, 61, 137, 231, 7, 62, 110, 104, 55, 190, 58, 58, 202, 187, 248, 185, 83, 188, 88, 70, 198, 61, 69, 1, 253, 189, 33, 69, 144, 189, 122, 41, 120, 62, 244, 142, 11, 62, 153, 104, 144, 61, 57, 242, 153, 61, 67, 171, 217, 189, 181, 92, 245, 189, 206, 117, 99, 61, 83, 61, 31, 62, 231, 44, 164, 187, 24, 61, 41, 190, 210, 137, 111, 190, 151, 60, 57, 61, 54, 207, 2, 189, 183, 151, 157, 189, 98, 121, 167, 61, 175, 156, 184, 62, 150, 231, 97, 62, 253, 55, 224, 61, 234, 221, 164, 60, 88, 151, 27, 61, 149, 202, 119, 189, 49, 197, 50, 61, 197, 21, 192, 189, 128, 222, 55, 190, 65, 246, 225, 189, 193, 174, 39, 190, 216, 141, 36, 62, 190, 206, 53, 190, 161, 45, 28, 61, 114, 130, 3, 190, 67, 208, 206, 60, 96, 202, 77, 190, 145, 160, 154, 189, 99, 186, 177, 189, 68, 95, 32, 190, 57, 177, 109, 61, 168, 33, 10, 189, 91, 44, 67, 62, 223, 115, 78, 61, 140, 241, 124, 62, 238, 53, 125, 61, 183, 109, 104, 190, 86, 19, 154, 62, 240, 240, 117, 190, 158, 32, 22, 189, 54, 250, 18, 62, 74, 162, 137, 190, 165, 52, 75, 190, 104, 31, 188, 189, 170, 78, 68, 62, 160, 142, 153, 61, 107, 6, 149, 62, 62, 109, 224, 60, 37, 83, 152, 189, 125, 169, 84, 62, 191, 202, 182, 61, 145, 140, 77, 190, 3, 171, 82, 189, 220, 176, 55, 62, 165, 171, 141, 62, 132, 22, 60, 60, 239, 125, 225, 186, 10, 229, 74, 189, 57, 196, 21, 191, 100, 79, 198, 190, 56, 84, 220, 61, 37, 23, 84, 60, 14, 126, 170, 62, 23, 40, 21, 62, 149, 91, 175, 60, 248, 57, 161, 61, 44, 51, 120, 190, 74, 161, 115, 62, 214, 187, 16, 63, 122, 52, 255, 62, 37, 105, 73, 61, 36, 80, 14, 63, 144, 223, 153, 189, 210, 42, 170, 61, 105, 131, 133, 62, 87, 31, 243, 62, 10, 78, 209, 189, 0, 172, 164, 189, 43, 35, 92, 188, 109, 199, 124, 190, 243, 35, 43, 61, 252, 184, 143, 187, 18, 226, 177, 189, 164, 58, 101, 190, 1, 53, 200, 62, 157, 145, 247, 62, 133, 255, 167, 188, 2, 151, 135, 190, 231, 128, 149, 62, 236, 70, 142, 190, 100, 43, 130, 62, 165, 60, 220, 60, 231, 152, 79, 190, 33, 1, 245, 61, 186, 38, 174, 59, 110, 15, 53, 63, 64, 99, 58, 190, 67, 96, 181, 60, 239, 19, 220, 189, 227, 109, 18, 61, 237, 124, 206, 189, 176, 43, 78, 189, 235, 15, 89, 60, 172, 5, 147, 61, 175, 161, 250, 189, 125, 194, 235, 189, 83, 159, 251, 189, 67, 69, 215, 61, 166, 144, 103, 62, 18, 141, 176, 61, 199, 42, 167, 62, 234, 237, 118, 189, 38, 128, 94, 61, 106, 59, 140, 62, 168, 174, 162, 190, 65, 84, 68, 189, 169, 2, 74, 62, 160, 191, 143, 62, 230, 197, 212, 60, 164, 23, 235, 189, 181, 52, 176, 61, 51, 103, 37, 190, 173, 88, 199, 190, 89, 147, 65, 190, 137, 149, 39, 190, 11, 27, 255, 60, 191, 227, 210, 189, 207, 67, 247, 60, 13, 140, 199, 60, 89, 90, 95, 62, 5, 206, 248, 189, 214, 55, 139, 62, 170, 148, 227, 61, 45, 47, 183, 62, 179, 151, 9, 190, 154, 128, 30, 190, 8, 168, 177, 188, 21, 0, 143, 189, 77, 215, 67, 62, 182, 148, 195, 189, 110, 46, 148, 190, 205, 77, 121, 62, 222, 178, 141, 189, 174, 31, 185, 62, 116, 212, 157, 189, 114, 101, 27, 61, 14, 50, 65, 62, 114, 220, 80, 61, 183, 81, 234, 189, 31, 137, 243, 189, 147, 137, 25, 58, 215, 242, 13, 62, 19, 50, 135, 190, 215, 255, 87, 190, 229, 67, 144, 187, 136, 238, 15, 61, 148, 101, 107, 62, 54, 103, 248, 189, 66, 204, 114, 189, 218, 82, 37, 190, 60, 205, 102, 62, 70, 50, 63, 190, 56, 58, 126, 62, 203, 164, 102, 62, 122, 82, 84, 60, 199, 75, 108, 190, 220, 192, 210, 62, 192, 5, 143, 190, 189, 137, 46, 62, 115, 0, 117, 189, 74, 83, 161, 188, 112, 62, 198, 60, 151, 131, 167, 189, 62, 97, 183, 61, 26, 7, 64, 62, 109, 81, 36, 189, 132, 94, 97, 190, 27, 114, 3, 61, 35, 152, 123, 62, 214, 232, 92, 189, 44, 184, 25, 62, 6, 166, 123, 190, 2, 220, 165, 61, 255, 207, 179, 189, 203, 109, 5, 62, 33, 171, 103, 189, 61, 255, 228, 60, 113, 247, 241, 188, 113, 44, 174, 189, 36, 99, 92, 62, 237, 52, 134, 61, 103, 112, 167, 189, 94, 21, 125, 61, 113, 218, 21, 190, 240, 224, 149, 60, 152, 28, 205, 189, 197, 70, 5, 190, 145, 43, 169, 190, 84, 25, 42, 61, 192, 199, 197, 61, 41, 37, 52, 60, 138, 40, 44, 61, 145, 167, 148, 188, 190, 85, 81, 62, 186, 62, 3, 62, 161, 41, 118, 188, 223, 237, 63, 62, 148, 197, 229, 190, 95, 251, 11, 190, 145, 76, 161, 62, 161, 98, 54, 190, 195, 131, 155, 190, 90, 210, 157, 61, 63, 232, 101, 62, 145, 231, 199, 189, 240, 188, 224, 61, 45, 117, 24, 62, 97, 137, 1, 190, 105, 187, 164, 190, 129, 183, 85, 190, 165, 12, 14, 190, 40, 190, 130, 62, 21, 74, 138, 189, 11, 169, 39, 62, 50, 179, 172, 61, 173, 151, 52, 62, 248, 222, 73, 190, 84, 99, 184, 60, 210, 13, 173, 62, 179, 158, 188, 62, 124, 71, 128, 190, 171, 123, 15, 62, 35, 28, 235, 189, 142, 167, 253, 188, 111, 103, 54, 189, 90, 155, 121, 62, 85, 194, 221, 60, 112, 177, 25, 61, 10, 136, 136, 62, 39, 143, 196, 190, 13, 134, 127, 61, 183, 124, 177, 62, 74, 118, 189, 189, 204, 124, 182, 189, 159, 0, 51, 61, 189, 81, 152, 61, 20, 23, 34, 62, 153, 139, 119, 189, 86, 135, 138, 62, 201, 182, 4, 61, 186, 4, 214, 189, 132, 4, 167, 190, 240, 2, 19, 190, 120, 226, 87, 62, 0, 82, 77, 62, 239, 237, 151, 62, 192, 52, 1, 189, 171, 226, 76, 62, 131, 135, 135, 190, 43, 168, 248, 61, 69, 254, 150, 62, 224, 63, 193, 62, 12, 87, 162, 190};
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
                    alignas(float) const unsigned char memory[] = {82, 230, 0, 61, 243, 202, 34, 62, 210, 35, 94, 61, 172, 61, 134, 189, 133, 219, 35, 190, 28, 111, 254, 61, 198, 200, 117, 187, 183, 241, 195, 189, 102, 97, 36, 62, 118, 74, 91, 189, 83, 216, 25, 62, 121, 140, 159, 189, 97, 10, 36, 190, 27, 165, 251, 61, 252, 25, 227, 189, 157, 59, 15, 62, 155, 173, 225, 61, 175, 90, 245, 188, 153, 199, 107, 62, 236, 240, 99, 188, 248, 126, 176, 189, 64, 151, 240, 60, 169, 78, 32, 62, 39, 160, 228, 60, 55, 25, 239, 188, 228, 243, 85, 61, 92, 215, 95, 190, 25, 234, 168, 60, 34, 64, 136, 189, 199, 161, 176, 188, 79, 25, 0, 190, 166, 82, 7, 62};
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
                    alignas(float) const unsigned char memory[] = {174, 202, 114, 190, 223, 216, 135, 190, 122, 126, 156, 190, 240, 228, 154, 62, 87, 208, 97, 62, 174, 35, 149, 62, 38, 250, 186, 190, 163, 21, 161, 190, 149, 110, 87, 189, 251, 27, 201, 190, 217, 231, 50, 190, 103, 145, 131, 189, 147, 108, 67, 62, 208, 246, 173, 190, 223, 229, 7, 190, 184, 41, 146, 62, 12, 111, 55, 62, 228, 181, 152, 190, 30, 223, 161, 190, 147, 0, 96, 190, 111, 120, 157, 62, 239, 240, 48, 190, 173, 227, 201, 190, 246, 177, 210, 61, 161, 215, 71, 190, 94, 124, 130, 190, 222, 253, 136, 190, 174, 213, 159, 190, 221, 141, 143, 62, 98, 247, 207, 61, 135, 205, 142, 190, 137, 63, 105, 190};
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
                    alignas(float) const unsigned char memory[] = {155, 193, 25, 190};
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
    alignas(float) const unsigned char memory[] = {227, 39, 24, 191, 92, 29, 53, 191, 87, 191, 171, 63, 48, 113, 181, 191, 78, 242, 20, 61, 228, 130, 129, 190, 87, 6, 30, 63, 156, 246, 230, 63, 102, 144, 213, 191, 196, 153, 171, 63, 63, 128, 71, 189, 49, 64, 194, 191, 16, 254, 192, 188, 15, 35, 37, 191, 194, 67, 162, 191, 83, 192, 91, 191, 193, 75, 189, 190, 86, 158, 8, 64, 247, 65, 46, 191, 248, 40, 89, 191, 11, 215, 170, 189, 159, 214, 253, 62, 131, 168, 241, 189, 80, 232, 93, 191, 157, 208, 33, 190, 234, 124, 103, 191, 255, 71, 47, 191, 117, 162, 50, 191, 47, 17, 129, 63, 216, 250, 30, 190, 244, 113, 83, 63, 91, 215, 6, 63, 9, 97, 224, 191, 190, 24, 227, 63, 212, 251, 199, 191, 56, 76, 197, 62, 14, 4, 157, 63, 89, 251, 252, 188, 147, 245, 181, 191};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 3>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers/tensor/tensor.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {119, 237, 164, 64, 140, 139, 78, 192, 42, 222, 178, 192, 93, 246, 83, 64, 114, 164, 141, 64, 35, 236, 107, 64, 191, 146, 141, 64, 60, 44, 26, 64, 141, 208, 160, 64, 30, 47, 221, 192, 121, 241, 128, 191, 23, 68, 179, 64, 36, 139, 68, 64};
    using SHAPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Shape<unsigned long, 1, 13, 1>;
    using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::Specification<float, unsigned long, SHAPE, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::tensor::RowMajorStride<SHAPE>, true>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::Tensor<SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-11-28_01-55-51/1586e62_zoo_environment_algorithm/pendulum-v1_ppo/0006/steps/000000000000485";
   char commit_hash[] = "1586e620bb4dfa38da7917a987c1b9d74423865d";
}