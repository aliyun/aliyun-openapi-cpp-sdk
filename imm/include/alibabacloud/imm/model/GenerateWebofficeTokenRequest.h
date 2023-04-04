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

#ifndef ALIBABACLOUD_IMM_MODEL_GENERATEWEBOFFICETOKENREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_GENERATEWEBOFFICETOKENREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT GenerateWebofficeTokenRequest : public RpcServiceRequest {
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
	struct Watermark {
		float rotate;
		long horizontal;
		std::string fillStyle;
		long vertical;
		long type;
		std::string value;
		std::string font;
	};
	struct Permission {
		bool print;
		bool readonly;
		bool rename;
		bool history;
		bool copy;
		bool export;
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
	struct User {
		std::string name;
		std::string id;
		std::string avatar;
	};
	GenerateWebofficeTokenRequest();
	~GenerateWebofficeTokenRequest();
	std::string getReferer() const;
	void setReferer(const std::string &referer);
	Notification getNotification() const;
	void setNotification(const Notification &notification);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getNotifyEndpoint() const;
	void setNotifyEndpoint(const std::string &notifyEndpoint);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	Watermark getWatermark() const;
	void setWatermark(const Watermark &watermark);
	std::string getNotifyTopicName() const;
	void setNotifyTopicName(const std::string &notifyTopicName);
	std::string getFilename() const;
	void setFilename(const std::string &filename);
	std::string getSourceURI() const;
	void setSourceURI(const std::string &sourceURI);
	bool getExternalUploaded() const;
	void setExternalUploaded(bool externalUploaded);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	long getPreviewPages() const;
	void setPreviewPages(long previewPages);
	bool getHidecmb() const;
	void setHidecmb(bool hidecmb);
	bool getCachePreview() const;
	void setCachePreview(bool cachePreview);
	Permission getPermission() const;
	void setPermission(const Permission &permission);
	CredentialConfig getCredentialConfig() const;
	void setCredentialConfig(const CredentialConfig &credentialConfig);
	User getUser() const;
	void setUser(const User &user);

private:
	std::string referer_;
	Notification notification_;
	std::string password_;
	std::string notifyEndpoint_;
	std::string projectName_;
	Watermark watermark_;
	std::string notifyTopicName_;
	std::string filename_;
	std::string sourceURI_;
	bool externalUploaded_;
	std::string userData_;
	long previewPages_;
	bool hidecmb_;
	bool cachePreview_;
	Permission permission_;
	CredentialConfig credentialConfig_;
	User user_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_GENERATEWEBOFFICETOKENREQUEST_H_
