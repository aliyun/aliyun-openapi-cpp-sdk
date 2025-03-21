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

#ifndef ALIBABACLOUD_EIAM_MODEL_LISTUSERSREQUEST_H_
#define ALIBABACLOUD_EIAM_MODEL_LISTUSERSREQUEST_H_

#include <alibabacloud/eiam/EiamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eiam {
namespace Model {
class ALIBABACLOUD_EIAM_EXPORT ListUsersRequest : public RpcServiceRequest {
public:
	ListUsersRequest();
	~ListUsersRequest();
	std::string getPhoneNumber() const;
	void setPhoneNumber(const std::string &phoneNumber);
	std::string getPhoneRegion() const;
	void setPhoneRegion(const std::string &phoneRegion);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getUsernameStartsWith() const;
	void setUsernameStartsWith(const std::string &usernameStartsWith);
	std::string getUserSourceType() const;
	void setUserSourceType(const std::string &userSourceType);
	long getPageSize() const;
	void setPageSize(long pageSize);
	bool getLocked() const;
	void setLocked(bool locked);
	std::string getEmail() const;
	void setEmail(const std::string &email);
	std::string getUserExternalId() const;
	void setUserExternalId(const std::string &userExternalId);
	std::string getDisplayNameStartsWith() const;
	void setDisplayNameStartsWith(const std::string &displayNameStartsWith);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::vector<std::string> getUserIds() const;
	void setUserIds(const std::vector<std::string> &userIds);
	std::string getDisplayName() const;
	void setDisplayName(const std::string &displayName);
	std::string getUserSourceId() const;
	void setUserSourceId(const std::string &userSourceId);
	std::string getOrganizationalUnitId() const;
	void setOrganizationalUnitId(const std::string &organizationalUnitId);
	std::string getUsername() const;
	void setUsername(const std::string &username);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string phoneNumber_;
	std::string phoneRegion_;
	long pageNumber_;
	std::string usernameStartsWith_;
	std::string userSourceType_;
	long pageSize_;
	bool locked_;
	std::string email_;
	std::string userExternalId_;
	std::string displayNameStartsWith_;
	std::string instanceId_;
	std::vector<std::string> userIds_;
	std::string displayName_;
	std::string userSourceId_;
	std::string organizationalUnitId_;
	std::string username_;
	std::string status_;
};
} // namespace Model
} // namespace Eiam
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EIAM_MODEL_LISTUSERSREQUEST_H_
