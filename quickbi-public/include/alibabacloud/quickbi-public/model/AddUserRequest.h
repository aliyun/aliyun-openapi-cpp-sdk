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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_ADDUSERREQUEST_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_ADDUSERREQUEST_H_

#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Quickbi_public {
namespace Model {
class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT AddUserRequest : public RpcServiceRequest {
public:
	AddUserRequest();
	~AddUserRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	bool getAdminUser() const;
	void setAdminUser(bool adminUser);
	std::string getAccessPoint() const;
	void setAccessPoint(const std::string &accessPoint);
	int getAccountType() const;
	void setAccountType(int accountType);
	std::string getAccountId() const;
	void setAccountId(const std::string &accountId);
	std::string getRoleIds() const;
	void setRoleIds(const std::string &roleIds);
	std::string getAccountName() const;
	void setAccountName(const std::string &accountName);
	std::string getNickName() const;
	void setNickName(const std::string &nickName);
	bool getAuthAdminUser() const;
	void setAuthAdminUser(bool authAdminUser);
	std::string getEmail() const;
	void setEmail(const std::string &email);
	int getUserType() const;
	void setUserType(int userType);
	std::string getSignType() const;
	void setSignType(const std::string &signType);
	std::string getPhone() const;
	void setPhone(const std::string &phone);

private:
	std::string clientToken_;
	bool adminUser_;
	std::string accessPoint_;
	int accountType_;
	std::string accountId_;
	std::string roleIds_;
	std::string accountName_;
	std::string nickName_;
	bool authAdminUser_;
	std::string email_;
	int userType_;
	std::string signType_;
	std::string phone_;
};
} // namespace Model
} // namespace Quickbi_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_ADDUSERREQUEST_H_
