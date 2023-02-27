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

#ifndef ALIBABACLOUD_ICE_MODEL_SUBMITMEDIACENSORJOBREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_SUBMITMEDIACENSORJOBREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT SubmitMediaCensorJobRequest : public RpcServiceRequest {
public:
	struct ScheduleConfig {
		int priority;
		std::string pipelineId;
	};
	struct Input {
		std::string media;
		std::string type;
	};
	SubmitMediaCensorJobRequest();
	~SubmitMediaCensorJobRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getOutput() const;
	void setOutput(const std::string &output);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getNotifyUrl() const;
	void setNotifyUrl(const std::string &notifyUrl);
	std::string getCoverImages() const;
	void setCoverImages(const std::string &coverImages);
	ScheduleConfig getScheduleConfig() const;
	void setScheduleConfig(const ScheduleConfig &scheduleConfig);
	std::string getTemplateId() const;
	void setTemplateId(const std::string &templateId);
	Input getInput() const;
	void setInput(const Input &input);
	std::string getBarrages() const;
	void setBarrages(const std::string &barrages);

private:
	std::string description_;
	std::string title_;
	std::string output_;
	std::string userData_;
	std::string notifyUrl_;
	std::string coverImages_;
	ScheduleConfig scheduleConfig_;
	std::string templateId_;
	Input input_;
	std::string barrages_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_SUBMITMEDIACENSORJOBREQUEST_H_
