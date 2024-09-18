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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_UPDATEUSERREQUEST_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_UPDATEUSERREQUEST_H_

#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Quickbi_public {
namespace Model {
class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT UpdateUserRequest : public RpcServiceRequest {
public:
	UpdateUserRequest();
	~UpdateUserRequest();
	bool getAdminUser() const;
	void setAdminUser(bool adminUser);
	int getAccountType() const;
	void setAccountType(int accountType);
	std::string getAccessPoint() const;
	void setAccessPoint(const std::string &accessPoint);
	std::string getUserId() const;
	void setUserId(const std::string &userId);
	bool getIsDeleted() const;
	void setIsDeleted(bool isDeleted);
	std::string getRoleIds() const;
	void setRoleIds(const std::string &roleIds);
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
	bool adminUser_;
	int accountType_;
	std::string accessPoint_;
	std::string userId_;
	bool isDeleted_;
	std::string roleIds_;
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
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_UPDATEUSERREQUEST_H_
