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

#ifndef ALIBABACLOUD_EIAM_MODEL_CREATEUSERREQUEST_H_
#define ALIBABACLOUD_EIAM_MODEL_CREATEUSERREQUEST_H_

#include <alibabacloud/eiam/EiamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eiam {
namespace Model {
class ALIBABACLOUD_EIAM_EXPORT CreateUserRequest : public RpcServiceRequest {
public:
	struct CustomFields {
		std::string fieldName;
		std::string fieldValue;
	};
	struct PasswordInitializationConfig {
		std::string string;
		std::vector<std::string> userNotificationChannels;
		std::string passwordInitializationPolicyPriority;
		std::string passwordForcedUpdateStatus;
		std::string passwordInitializationType;
	};
	CreateUserRequest();
	~CreateUserRequest();
	std::string getPhoneNumber() const;
	void setPhoneNumber(const std::string &phoneNumber);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getPhoneRegion() const;
	void setPhoneRegion(const std::string &phoneRegion);
	std::vector<CustomFields> getCustomFields() const;
	void setCustomFields(const std::vector<CustomFields> &customFields);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	PasswordInitializationConfig getPasswordInitializationConfig() const;
	void setPasswordInitializationConfig(const PasswordInitializationConfig &passwordInitializationConfig);
	bool getPhoneNumberVerified() const;
	void setPhoneNumberVerified(bool phoneNumberVerified);
	std::string getEmail() const;
	void setEmail(const std::string &email);
	std::string getPrimaryOrganizationalUnitId() const;
	void setPrimaryOrganizationalUnitId(const std::string &primaryOrganizationalUnitId);
	std::vector<std::string> getOrganizationalUnitIds() const;
	void setOrganizationalUnitIds(const std::vector<std::string> &organizationalUnitIds);
	std::string getUserExternalId() const;
	void setUserExternalId(const std::string &userExternalId);
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
	std::string description_;
	std::string phoneRegion_;
	std::vector<CustomFields> customFields_;
	std::string password_;
	PasswordInitializationConfig passwordInitializationConfig_;
	bool phoneNumberVerified_;
	std::string email_;
	std::string primaryOrganizationalUnitId_;
	std::vector<std::string> organizationalUnitIds_;
	std::string userExternalId_;
	std::string instanceId_;
	std::string displayName_;
	std::string username_;
	bool emailVerified_;
};
} // namespace Model
} // namespace Eiam
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EIAM_MODEL_CREATEUSERREQUEST_H_
