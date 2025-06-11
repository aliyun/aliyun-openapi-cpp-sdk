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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_MODIFYTENANTUSERROLESREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_MODIFYTENANTUSERROLESREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT ModifyTenantUserRolesRequest : public RpcServiceRequest {
public:
	ModifyTenantUserRolesRequest();
	~ModifyTenantUserRolesRequest();
	std::string getUserType() const;
	void setUserType(const std::string &userType);
	std::string getUserRole() const;
	void setUserRole(const std::string &userRole);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getModifyType() const;
	void setModifyType(const std::string &modifyType);
	std::string getGlobalPermissions() const;
	void setGlobalPermissions(const std::string &globalPermissions);
	std::string getTenantId() const;
	void setTenantId(const std::string &tenantId);
	std::string getUserName() const;
	void setUserName(const std::string &userName);

private:
	std::string userType_;
	std::string userRole_;
	std::string instanceId_;
	std::string modifyType_;
	std::string globalPermissions_;
	std::string tenantId_;
	std::string userName_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_MODIFYTENANTUSERROLESREQUEST_H_
