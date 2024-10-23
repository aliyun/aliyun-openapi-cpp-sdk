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

#ifndef ALIBABACLOUD_IMS_MODEL_CREATEUSERREQUEST_H_
#define ALIBABACLOUD_IMS_MODEL_CREATEUSERREQUEST_H_

#include <alibabacloud/ims/ImsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ims {
namespace Model {
class ALIBABACLOUD_IMS_EXPORT CreateUserRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateUserRequest();
	~CreateUserRequest();
	std::string getAkProxySuffix() const;
	void setAkProxySuffix(const std::string &akProxySuffix);
	std::string getExternalId() const;
	void setExternalId(const std::string &externalId);
	std::string getMobilePhone() const;
	void setMobilePhone(const std::string &mobilePhone);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getEmail() const;
	void setEmail(const std::string &email);
	std::string getComments() const;
	void setComments(const std::string &comments);
	std::string getUserPrincipalName() const;
	void setUserPrincipalName(const std::string &userPrincipalName);
	std::string getDisplayName() const;
	void setDisplayName(const std::string &displayName);

private:
	std::string akProxySuffix_;
	std::string externalId_;
	std::string mobilePhone_;
	std::vector<Tag> tag_;
	std::string email_;
	std::string comments_;
	std::string userPrincipalName_;
	std::string displayName_;
};
} // namespace Model
} // namespace Ims
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMS_MODEL_CREATEUSERREQUEST_H_
