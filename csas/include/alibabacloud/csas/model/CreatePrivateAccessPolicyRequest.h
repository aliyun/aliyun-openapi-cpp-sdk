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

#ifndef ALIBABACLOUD_CSAS_MODEL_CREATEPRIVATEACCESSPOLICYREQUEST_H_
#define ALIBABACLOUD_CSAS_MODEL_CREATEPRIVATEACCESSPOLICYREQUEST_H_

#include <alibabacloud/csas/CsasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Csas {
namespace Model {
class ALIBABACLOUD_CSAS_EXPORT CreatePrivateAccessPolicyRequest : public RpcServiceRequest {
public:
	struct CustomUserAttributes {
		std::string userGroupType;
		int idpId;
		std::string value;
		std::string relation;
	};
	CreatePrivateAccessPolicyRequest();
	~CreatePrivateAccessPolicyRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::vector<CustomUserAttributes> getCustomUserAttributes() const;
	void setCustomUserAttributes(const std::vector<CustomUserAttributes> &customUserAttributes);
	std::vector<std::string> getTagIds() const;
	void setTagIds(const std::vector<std::string> &tagIds);
	std::string getDeviceAttributeId() const;
	void setDeviceAttributeId(const std::string &deviceAttributeId);
	std::vector<std::string> getUserGroupIds() const;
	void setUserGroupIds(const std::vector<std::string> &userGroupIds);
	std::string getPolicyAction() const;
	void setPolicyAction(const std::string &policyAction);
	int getPriority() const;
	void setPriority(int priority);
	std::string getDeviceAttributeAction() const;
	void setDeviceAttributeAction(const std::string &deviceAttributeAction);
	std::vector<std::string> getApplicationIds() const;
	void setApplicationIds(const std::vector<std::string> &applicationIds);
	std::string getUserGroupMode() const;
	void setUserGroupMode(const std::string &userGroupMode);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getApplicationType() const;
	void setApplicationType(const std::string &applicationType);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string description_;
	std::string sourceIp_;
	std::vector<CustomUserAttributes> customUserAttributes_;
	std::vector<std::string> tagIds_;
	std::string deviceAttributeId_;
	std::vector<std::string> userGroupIds_;
	std::string policyAction_;
	int priority_;
	std::string deviceAttributeAction_;
	std::vector<std::string> applicationIds_;
	std::string userGroupMode_;
	std::string name_;
	std::string applicationType_;
	std::string status_;
};
} // namespace Model
} // namespace Csas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CSAS_MODEL_CREATEPRIVATEACCESSPOLICYREQUEST_H_
