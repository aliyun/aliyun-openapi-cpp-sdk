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

#ifndef ALIBABACLOUD_EDS_USER_MODEL_MODIFYGROUPREQUEST_H_
#define ALIBABACLOUD_EDS_USER_MODEL_MODIFYGROUPREQUEST_H_

#include <alibabacloud/eds-user/Eds_userExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eds_user {
namespace Model {
class ALIBABACLOUD_EDS_USER_EXPORT ModifyGroupRequest : public RpcServiceRequest {
public:
	ModifyGroupRequest();
	~ModifyGroupRequest();
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getNewGroupName() const;
	void setNewGroupName(const std::string &newGroupName);

private:
	std::string groupId_;
	std::string newGroupName_;
};
} // namespace Model
} // namespace Eds_user
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EDS_USER_MODEL_MODIFYGROUPREQUEST_H_
