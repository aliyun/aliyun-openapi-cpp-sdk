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

#ifndef ALIBABACLOUD_IMM_MODEL_CREATEIMAGEMODERATIONTASKREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_CREATEIMAGEMODERATIONTASKREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT CreateImageModerationTaskRequest : public RpcServiceRequest {
public:
	struct Notification {
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
	};
	struct CredentialConfig {
		struct ChainItem {
			std::string role;
			std::string roleType;
			std::string assumeRoleFor;
		};
		ChainItem chainItem;
		std::vector<ChainItem> chain;
		std::string serviceRole;
		std::string policy;
	};
	CreateImageModerationTaskRequest();
	~CreateImageModerationTaskRequest();
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	Notification getNotification() const;
	void setNotification(const Notification &notification);
	std::string getNotifyEndpoint() const;
	void setNotifyEndpoint(const std::string &notifyEndpoint);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	std::string getNotifyTopicName() const;
	void setNotifyTopicName(const std::string &notifyTopicName);
	long getMaxFrames() const;
	void setMaxFrames(long maxFrames);
	CredentialConfig getCredentialConfig() const;
	void setCredentialConfig(const CredentialConfig &credentialConfig);
	std::string getReviewer() const;
	void setReviewer(const std::string &reviewer);
	std::map<std::string, std::string> getTags() const;
	void setTags(const std::map<std::string, std::string> &tags);
	std::string getSourceURI() const;
	void setSourceURI(const std::string &sourceURI);
	std::vector<std::string> getScenes() const;
	void setScenes(const std::vector<std::string> &scenes);
	long getInterval() const;
	void setInterval(long interval);

private:
	std::string userData_;
	Notification notification_;
	std::string notifyEndpoint_;
	std::string projectName_;
	std::string notifyTopicName_;
	long maxFrames_;
	CredentialConfig credentialConfig_;
	std::string reviewer_;
	std::map<std::string, std::string> tags_;
	std::string sourceURI_;
	std::vector<std::string> scenes_;
	long interval_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_CREATEIMAGEMODERATIONTASKREQUEST_H_
