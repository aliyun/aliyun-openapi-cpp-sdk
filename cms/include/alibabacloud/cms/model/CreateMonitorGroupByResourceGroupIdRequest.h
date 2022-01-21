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

#ifndef ALIBABACLOUD_CMS_MODEL_CREATEMONITORGROUPBYRESOURCEGROUPIDREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_CREATEMONITORGROUPBYRESOURCEGROUPIDREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT CreateMonitorGroupByResourceGroupIdRequest : public RpcServiceRequest {
public:
	CreateMonitorGroupByResourceGroupIdRequest();
	~CreateMonitorGroupByResourceGroupIdRequest();
	std::string getResourceGroupName() const;
	void setResourceGroupName(const std::string &resourceGroupName);
	bool getEnableSubscribeEvent() const;
	void setEnableSubscribeEvent(bool enableSubscribeEvent);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	bool getEnableInstallAgent() const;
	void setEnableInstallAgent(bool enableInstallAgent);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<std::string> getContactGroupList() const;
	void setContactGroupList(const std::vector<std::string> &contactGroupList);

private:
	std::string resourceGroupName_;
	bool enableSubscribeEvent_;
	std::string resourceGroupId_;
	bool enableInstallAgent_;
	std::string regionId_;
	std::vector<std::string> contactGroupList_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_CREATEMONITORGROUPBYRESOURCEGROUPIDREQUEST_H_
