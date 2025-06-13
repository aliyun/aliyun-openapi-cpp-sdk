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

#ifndef ALIBABACLOUD_RAM_MODEL_UPDATEUSERREQUEST_H_
#define ALIBABACLOUD_RAM_MODEL_UPDATEUSERREQUEST_H_

#include <alibabacloud/ram/RamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ram {
namespace Model {
class ALIBABACLOUD_RAM_EXPORT UpdateUserRequest : public RpcServiceRequest {
public:
	UpdateUserRequest();
	~UpdateUserRequest();
	std::string getNewUserName() const;
	void setNewUserName(const std::string &newUserName);
	std::string getNewMobilePhone() const;
	void setNewMobilePhone(const std::string &newMobilePhone);
	std::string getNewEmail() const;
	void setNewEmail(const std::string &newEmail);
	std::string getNewDisplayName() const;
	void setNewDisplayName(const std::string &newDisplayName);
	std::string getNewComments() const;
	void setNewComments(const std::string &newComments);
	std::string getUserName() const;
	void setUserName(const std::string &userName);

private:
	std::string newUserName_;
	std::string newMobilePhone_;
	std::string newEmail_;
	std::string newDisplayName_;
	std::string newComments_;
	std::string userName_;
};
} // namespace Model
} // namespace Ram
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RAM_MODEL_UPDATEUSERREQUEST_H_
