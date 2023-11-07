#pragma once

#include "lve_pipeline.hpp"
#include "lve_window.hpp"
#include "lve_device.hpp"

namespace lve {
class FirstApp {
	public:
		static constexpr int WIDTH = 1280;
		static constexpr int HEIGHT = 720;

		void run();
	private:
		LveWindow lveWindow{ WIDTH, HEIGHT, "Vulkan Rendering Engine" };
		LveDevice lveDevice{ lveWindow };
		LvePipeline lvePipeline{ lveDevice, "simple_shader.vert.spv", "simple_shader.frag.spv", LvePipeline::defaultPipelineConfigInfo(WIDTH,HEIGHT) };
};
}