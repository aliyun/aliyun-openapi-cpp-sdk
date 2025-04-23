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

#ifndef ALIBABACLOUD_EDS_USER_MODEL_MODIFYUSERREQUEST_H_
#define ALIBABACLOUD_EDS_USER_MODEL_MODIFYUSERREQUEST_H_

#include <alibabacloud/eds-user/Eds_userExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eds_user {
namespace Model {
class ALIBABACLOUD_EDS_USER_EXPORT ModifyUserRequest : public RpcServiceRequest {
public:
	ModifyUserRequest();
	~ModifyUserRequest();
	std::string getPhone() const;
	void setPhone(const std::string &phone);
	std::string getEndUserId() const;
	void setEndUserId(const std::string &endUserId);
	std::string getEmail() const;
	void setEmail(const std::string &email);

private:
	std::string phone_;
	std::string endUserId_;
	std::string email_;
};
} // namespace Model
} // namespace Eds_user
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EDS_USER_MODEL_MODIFYUSERREQUEST_H_
