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

#ifndef ALIBABACLOUD_IMM_MODEL_CREATEIMAGESPLICINGTASKREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_CREATEIMAGESPLICINGTASKREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT CreateImageSplicingTaskRequest : public RpcServiceRequest {
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
	struct Sources {
		long rotate;
		std::string uRI;
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
	CreateImageSplicingTaskRequest();
	~CreateImageSplicingTaskRequest();
	long getAlign() const;
	void setAlign(long align);
	std::string getBackgroundColor() const;
	void setBackgroundColor(const std::string &backgroundColor);
	Notification getNotification() const;
	void setNotification(const Notification &notification);
	std::string getNotifyEndpoint() const;
	void setNotifyEndpoint(const std::string &notifyEndpoint);
	std::string getScaleType() const;
	void setScaleType(const std::string &scaleType);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	long getMargin() const;
	void setMargin(long margin);
	std::string getNotifyTopicName() const;
	void setNotifyTopicName(const std::string &notifyTopicName);
	long getQuality() const;
	void setQuality(long quality);
	std::map<std::string, std::string> getTags() const;
	void setTags(const std::map<std::string, std::string> &tags);
	std::vector<Sources> getSources() const;
	void setSources(const std::vector<Sources> &sources);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getTargetURI() const;
	void setTargetURI(const std::string &targetURI);
	std::string getImageFormat() const;
	void setImageFormat(const std::string &imageFormat);
	std::string getDirection() const;
	void setDirection(const std::string &direction);
	long getPadding() const;
	void setPadding(long padding);
	CredentialConfig getCredentialConfig() const;
	void setCredentialConfig(const CredentialConfig &credentialConfig);

private:
	long align_;
	std::string backgroundColor_;
	Notification notification_;
	std::string notifyEndpoint_;
	std::string scaleType_;
	std::string projectName_;
	long margin_;
	std::string notifyTopicName_;
	long quality_;
	std::map<std::string, std::string> tags_;
	std::vector<Sources> sources_;
	std::string userData_;
	std::string targetURI_;
	std::string imageFormat_;
	std::string direction_;
	long padding_;
	CredentialConfig credentialConfig_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_CREATEIMAGESPLICINGTASKREQUEST_H_
