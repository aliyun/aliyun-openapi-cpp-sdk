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
	long getPadding() const;
	void setPadding(long padding);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	long getMargin() const;
	void setMargin(long margin);
	std::string getNotifyTopicName() const;
	void setNotifyTopicName(const std::string &notifyTopicName);
	std::vector<Sources> getSources() const;
	void setSources(const std::vector<Sources> &sources);
	CredentialConfig getCredentialConfig() const;
	void setCredentialConfig(const CredentialConfig &credentialConfig);
	long getAlign() const;
	void setAlign(long align);
	long getQuality() const;
	void setQuality(long quality);
	std::string getBackgroundColor() const;
	void setBackgroundColor(const std::string &backgroundColor);
	std::map<std::string, std::string> getTags() const;
	void setTags(const std::map<std::string, std::string> &tags);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getNotifyEndpoint() const;
	void setNotifyEndpoint(const std::string &notifyEndpoint);
	std::string getTargetURI() const;
	void setTargetURI(const std::string &targetURI);
	std::string getScaleType() const;
	void setScaleType(const std::string &scaleType);
	std::string getImageFormat() const;
	void setImageFormat(const std::string &imageFormat);
	std::string getDirection() const;
	void setDirection(const std::string &direction);

private:
	long padding_;
	std::string projectName_;
	long margin_;
	std::string notifyTopicName_;
	std::vector<Sources> sources_;
	CredentialConfig credentialConfig_;
	long align_;
	long quality_;
	std::string backgroundColor_;
	std::map<std::string, std::string> tags_;
	std::string userData_;
	std::string notifyEndpoint_;
	std::string targetURI_;
	std::string scaleType_;
	std::string imageFormat_;
	std::string direction_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_CREATEIMAGESPLICINGTASKREQUEST_H_
