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

#ifndef ALIBABACLOUD_IMM_MODEL_CREATETRIGGERREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_CREATETRIGGERREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT CreateTriggerRequest : public RpcServiceRequest {
public:
	struct Notification {
		std::string endpoint;
		struct MNS {
			std::string endpoint;
			std::string topicName;
		};
		MNS mNS;
		struct RocketMQ {
			std::string endpoint;
			std::string instanceId;
			std::string topicName;
		};
		RocketMQ rocketMQ;
		std::string topic;
	};
	struct Input {
		struct OSS {
			std::string bucket;
			std::string prefix;
			std::string string;
			std::vector<std::string> matchExpressions;
		};
		OSS oSS;
	};
	struct Actions {
		std::string name;
		std::string string;
		std::vector<std::string> parameters;
	};
	CreateTriggerRequest();
	~CreateTriggerRequest();
	Notification getNotification() const;
	void setNotification(const Notification &notification);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	std::map<std::string, std::string> getTags() const;
	void setTags(const std::map<std::string, std::string> &tags);
	Input getInput() const;
	void setInput(const Input &input);
	std::string getServiceRole() const;
	void setServiceRole(const std::string &serviceRole);
	std::vector<Actions> getActions() const;
	void setActions(const std::vector<Actions> &actions);

private:
	Notification notification_;
	std::string projectName_;
	std::map<std::string, std::string> tags_;
	Input input_;
	std::string serviceRole_;
	std::vector<Actions> actions_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_CREATETRIGGERREQUEST_H_
