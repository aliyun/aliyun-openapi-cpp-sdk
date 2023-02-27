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

#ifndef ALIBABACLOUD_ICE_MODEL_CREATELIVETRANSCODETEMPLATEREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_CREATELIVETRANSCODETEMPLATEREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT CreateLiveTranscodeTemplateRequest : public RpcServiceRequest {
public:
	struct TemplateConfig {
		struct AudioParams {
			std::string codec;
			std::string channels;
			std::string profile;
			std::string bitrate;
			std::string samplerate;
		};
		AudioParams audioParams;
		struct VideoParams {
			std::string codec;
			std::string profile;
			std::string width;
			std::string fps;
			std::string gop;
			std::string bitrate;
			std::string height;
		};
		VideoParams videoParams;
	};
	CreateLiveTranscodeTemplateRequest();
	~CreateLiveTranscodeTemplateRequest();
	std::string getType() const;
	void setType(const std::string &type);
	TemplateConfig getTemplateConfig() const;
	void setTemplateConfig(const TemplateConfig &templateConfig);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string type_;
	TemplateConfig templateConfig_;
	std::string name_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_CREATELIVETRANSCODETEMPLATEREQUEST_H_
