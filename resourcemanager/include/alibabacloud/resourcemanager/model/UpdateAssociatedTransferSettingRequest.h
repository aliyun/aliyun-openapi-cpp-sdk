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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_UPDATEASSOCIATEDTRANSFERSETTINGREQUEST_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_UPDATEASSOCIATEDTRANSFERSETTINGREQUEST_H_

#include <alibabacloud/resourcemanager/ResourceManagerExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ResourceManager {
namespace Model {
class ALIBABACLOUD_RESOURCEMANAGER_EXPORT UpdateAssociatedTransferSettingRequest : public RpcServiceRequest {
public:
	struct RuleSettings {
		std::string associatedService;
		std::string masterService;
		std::string masterResourceType;
		std::string associatedResourceType;
		std::string ruleId;
		std::string status;
	};
	UpdateAssociatedTransferSettingRequest();
	~UpdateAssociatedTransferSettingRequest();
	std::vector<RuleSettings> getRuleSettings() const;
	void setRuleSettings(const std::vector<RuleSettings> &ruleSettings);
	std::string getEnableExistingResourcesTransfer() const;
	void setEnableExistingResourcesTransfer(const std::string &enableExistingResourcesTransfer);

private:
	std::vector<RuleSettings> ruleSettings_;
	std::string enableExistingResourcesTransfer_;
};
} // namespace Model
} // namespace ResourceManager
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_UPDATEASSOCIATEDTRANSFERSETTINGREQUEST_H_
