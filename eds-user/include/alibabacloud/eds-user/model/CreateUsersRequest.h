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

#ifndef ALIBABACLOUD_EDS_USER_MODEL_CREATEUSERSREQUEST_H_
#define ALIBABACLOUD_EDS_USER_MODEL_CREATEUSERSREQUEST_H_

#include <alibabacloud/eds-user/Eds_userExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eds_user {
namespace Model {
class ALIBABACLOUD_EDS_USER_EXPORT CreateUsersRequest : public RpcServiceRequest {
public:
	struct Users {
		std::string password;
		std::string realNickName;
		std::string phone;
		std::string ownerType;
		std::string endUserId;
		std::string remark;
		std::string email;
		std::string orgId;
	};
	CreateUsersRequest();
	~CreateUsersRequest();
	std::string getAutoLockTime() const;
	void setAutoLockTime(const std::string &autoLockTime);
	bool getIsLocalAdmin() const;
	void setIsLocalAdmin(bool isLocalAdmin);
	std::vector<Users> getUsers() const;
	void setUsers(const std::vector<Users> &users);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getPasswordExpireDays() const;
	void setPasswordExpireDays(const std::string &passwordExpireDays);

private:
	std::string autoLockTime_;
	bool isLocalAdmin_;
	std::vector<Users> users_;
	std::string password_;
	std::string passwordExpireDays_;
};
} // namespace Model
} // namespace Eds_user
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EDS_USER_MODEL_CREATEUSERSREQUEST_H_
