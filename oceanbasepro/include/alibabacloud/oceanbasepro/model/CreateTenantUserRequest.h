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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATETENANTUSERREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATETENANTUSERREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT CreateTenantUserRequest : public RpcServiceRequest {
public:
	CreateTenantUserRequest();
	~CreateTenantUserRequest();
	std::string getRoles() const;
	void setRoles(const std::string &roles);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getUserPassword() const;
	void setUserPassword(const std::string &userPassword);
	std::string getGlobalPermissions() const;
	void setGlobalPermissions(const std::string &globalPermissions);
	std::string getTenantId() const;
	void setTenantId(const std::string &tenantId);
	std::string getEncryptionType() const;
	void setEncryptionType(const std::string &encryptionType);
	std::string getUserType() const;
	void setUserType(const std::string &userType);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getUserName() const;
	void setUserName(const std::string &userName);

private:
	std::string roles_;
	std::string description_;
	std::string userPassword_;
	std::string globalPermissions_;
	std::string tenantId_;
	std::string encryptionType_;
	std::string userType_;
	std::string instanceId_;
	std::string userName_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_CREATETENANTUSERREQUEST_H_
