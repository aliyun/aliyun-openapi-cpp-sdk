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

#ifndef ALIBABACLOUD_CSAS_MODEL_CREATECLIENTUSERREQUEST_H_
#define ALIBABACLOUD_CSAS_MODEL_CREATECLIENTUSERREQUEST_H_

#include <alibabacloud/csas/CsasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Csas {
namespace Model {
class ALIBABACLOUD_CSAS_EXPORT CreateClientUserRequest : public RpcServiceRequest {
public:
	CreateClientUserRequest();
	~CreateClientUserRequest();
	std::string getMobileNumber() const;
	void setMobileNumber(const std::string &mobileNumber);
	std::string getDepartmentId() const;
	void setDepartmentId(const std::string &departmentId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getIdpConfigId() const;
	void setIdpConfigId(const std::string &idpConfigId);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getEmail() const;
	void setEmail(const std::string &email);
	std::string getUsername() const;
	void setUsername(const std::string &username);

private:
	std::string mobileNumber_;
	std::string departmentId_;
	std::string description_;
	std::string idpConfigId_;
	std::string password_;
	std::string email_;
	std::string username_;
};
} // namespace Model
} // namespace Csas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CSAS_MODEL_CREATECLIENTUSERREQUEST_H_
