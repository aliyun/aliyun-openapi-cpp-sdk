/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_ICE_MODEL_SUBMITSNAPSHOTJOBREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_SUBMITSNAPSHOTJOBREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT SubmitSnapshotJobRequest : public RpcServiceRequest {
public:
	struct Output {
		std::string media;
		std::string type;
	};
	struct TemplateConfig {
		struct OverwriteParams {
			int pixelBlackThreshold;
			long count;
			int width;
			bool isSptFrag;
			long interval;
			int blackLevel;
			std::string frameType;
			long time;
			std::string type;
			struct SpriteSnapshotConfig {
				int padding;
				int margin;
				std::string color;
				int cellHeight;
				int columns;
				int cellWidth;
				int lines;
			};
			SpriteSnapshotConfig spriteSnapshotConfig;
			int height;
		};
		OverwriteParams overwriteParams;
		std::string templateId;
	};
	struct ScheduleConfig {
		int priority;
		std::string pipelineId;
	};
	struct Input {
		std::string media;
		std::string type;
	};
	SubmitSnapshotJobRequest();
	~SubmitSnapshotJobRequest();
	std::string getSource() const;
	void setSource(const std::string &source);
	Output getOutput() const;
	void setOutput(const Output &output);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	TemplateConfig getTemplateConfig() const;
	void setTemplateConfig(const TemplateConfig &templateConfig);
	ScheduleConfig getScheduleConfig() const;
	void setScheduleConfig(const ScheduleConfig &scheduleConfig);
	Input getInput() const;
	void setInput(const Input &input);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string source_;
	Output output_;
	std::string userData_;
	TemplateConfig templateConfig_;
	ScheduleConfig scheduleConfig_;
	Input input_;
	std::string name_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_SUBMITSNAPSHOTJOBREQUEST_H_
