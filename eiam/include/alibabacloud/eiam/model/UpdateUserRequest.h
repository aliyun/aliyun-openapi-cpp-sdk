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

#ifndef ALIBABACLOUD_EIAM_MODEL_UPDATEUSERREQUEST_H_
#define ALIBABACLOUD_EIAM_MODEL_UPDATEUSERREQUEST_H_

#include <alibabacloud/eiam/EiamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eiam {
namespace Model {
class ALIBABACLOUD_EIAM_EXPORT UpdateUserRequest : public RpcServiceRequest {
public:
	struct CustomFields {
		std::string fieldName;
		std::string fieldValue;
		std::string operation;
	};
	UpdateUserRequest();
	~UpdateUserRequest();
	std::string getPhoneNumber() const;
	void setPhoneNumber(const std::string &phoneNumber);
	std::string getUserId() const;
	void setUserId(const std::string &userId);
	std::string getPhoneRegion() const;
	void setPhoneRegion(const std::string &phoneRegion);
	std::vector<CustomFields> getCustomFields() const;
	void setCustomFields(const std::vector<CustomFields> &customFields);
	bool getPhoneNumberVerified() const;
	void setPhoneNumberVerified(bool phoneNumberVerified);
	std::string getEmail() const;
	void setEmail(const std::string &email);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getDisplayName() const;
	void setDisplayName(const std::string &displayName);
	std::string getUsername() const;
	void setUsername(const std::string &username);
	bool getEmailVerified() const;
	void setEmailVerified(bool emailVerified);

private:
	std::string phoneNumber_;
	std::string userId_;
	std::string phoneRegion_;
	std::vector<CustomFields> customFields_;
	bool phoneNumberVerified_;
	std::string email_;
	std::string instanceId_;
	std::string displayName_;
	std::string username_;
	bool emailVerified_;
};
} // namespace Model
} // namespace Eiam
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EIAM_MODEL_UPDATEUSERREQUEST_H_
