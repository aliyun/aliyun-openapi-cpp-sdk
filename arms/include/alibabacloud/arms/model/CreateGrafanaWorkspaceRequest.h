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

#ifndef ALIBABACLOUD_ARMS_MODEL_CREATEGRAFANAWORKSPACEREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_CREATEGRAFANAWORKSPACEREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT CreateGrafanaWorkspaceRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string value;
		std::string key;
	};
	CreateGrafanaWorkspaceRequest();
	~CreateGrafanaWorkspaceRequest();
	std::string getAliyunLang() const;
	void setAliyunLang(const std::string &aliyunLang);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getGrafanaWorkspaceName() const;
	void setGrafanaWorkspaceName(const std::string &grafanaWorkspaceName);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getGrafanaVersion() const;
	void setGrafanaVersion(const std::string &grafanaVersion);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getGrafanaWorkspaceEdition() const;
	void setGrafanaWorkspaceEdition(const std::string &grafanaWorkspaceEdition);

private:
	std::string aliyunLang_;
	std::string description_;
	std::string grafanaWorkspaceName_;
	std::vector<Tags> tags_;
	std::string resourceGroupId_;
	std::string grafanaVersion_;
	std::string password_;
	std::string regionId_;
	std::string grafanaWorkspaceEdition_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_CREATEGRAFANAWORKSPACEREQUEST_H_
