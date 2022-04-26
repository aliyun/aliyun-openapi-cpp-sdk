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

#ifndef ALIBABACLOUD_CCC_MODEL_CREATEUSERREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_CREATEUSERREQUEST_H_

#include <alibabacloud/ccc/CCCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CCC {
namespace Model {
class ALIBABACLOUD_CCC_EXPORT CreateUserRequest : public RpcServiceRequest {
public:
	CreateUserRequest();
	~CreateUserRequest();
	std::string getLoginName() const;
	void setLoginName(const std::string &loginName);
	std::string getRoleId() const;
	void setRoleId(const std::string &roleId);
	std::string getMobile() const;
	void setMobile(const std::string &mobile);
	std::string getWorkMode() const;
	void setWorkMode(const std::string &workMode);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getDisplayName() const;
	void setDisplayName(const std::string &displayName);
	bool getResetPassword() const;
	void setResetPassword(bool resetPassword);
	std::string getDisplayId() const;
	void setDisplayId(const std::string &displayId);
	std::string getSkillLevelList() const;
	void setSkillLevelList(const std::string &skillLevelList);
	std::string getEmail() const;
	void setEmail(const std::string &email);

private:
	std::string loginName_;
	std::string roleId_;
	std::string mobile_;
	std::string workMode_;
	std::string instanceId_;
	std::string displayName_;
	bool resetPassword_;
	std::string displayId_;
	std::string skillLevelList_;
	std::string email_;
};
} // namespace Model
} // namespace CCC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CCC_MODEL_CREATEUSERREQUEST_H_
