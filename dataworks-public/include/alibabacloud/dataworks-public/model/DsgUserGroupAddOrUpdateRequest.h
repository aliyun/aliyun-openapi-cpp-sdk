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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_DSGUSERGROUPADDORUPDATEREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_DSGUSERGROUPADDORUPDATEREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT DsgUserGroupAddOrUpdateRequest : public RpcServiceRequest {
public:
	struct UserGroups {
		std::string owner;
		std::string projectName;
		int userGroupType;
		std::string name;
		long id;
		std::string string;
		std::vector<std::string> accounts;
	};
	DsgUserGroupAddOrUpdateRequest();
	~DsgUserGroupAddOrUpdateRequest();
	std::vector<UserGroups> getUserGroups() const;
	void setUserGroups(const std::vector<UserGroups> &userGroups);

private:
	std::vector<UserGroups> userGroups_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_DSGUSERGROUPADDORUPDATEREQUEST_H_
