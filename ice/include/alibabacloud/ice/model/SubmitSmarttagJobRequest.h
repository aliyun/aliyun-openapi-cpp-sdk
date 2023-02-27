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

#ifndef ALIBABACLOUD_ICE_MODEL_SUBMITSMARTTAGJOBREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_SUBMITSMARTTAGJOBREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT SubmitSmarttagJobRequest : public RpcServiceRequest {
public:
	struct ScheduleConfig {
		std::string priority;
		std::string pipelineId;
	};
	struct Input {
		std::string media;
		std::string type;
	};
	SubmitSmarttagJobRequest();
	~SubmitSmarttagJobRequest();
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getContent() const;
	void setContent(const std::string &content);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getNotifyUrl() const;
	void setNotifyUrl(const std::string &notifyUrl);
	ScheduleConfig getScheduleConfig() const;
	void setScheduleConfig(const ScheduleConfig &scheduleConfig);
	std::string getParams() const;
	void setParams(const std::string &params);
	std::string getTemplateId() const;
	void setTemplateId(const std::string &templateId);
	std::string getContentType() const;
	void setContentType(const std::string &contentType);
	Input getInput() const;
	void setInput(const Input &input);
	std::string getContentAddr() const;
	void setContentAddr(const std::string &contentAddr);

private:
	std::string title_;
	std::string content_;
	std::string userData_;
	std::string notifyUrl_;
	ScheduleConfig scheduleConfig_;
	std::string params_;
	std::string templateId_;
	std::string contentType_;
	Input input_;
	std::string contentAddr_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_SUBMITSMARTTAGJOBREQUEST_H_
