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

#ifndef ALIBABACLOUD_EHPC_MODEL_MODIFYUSERGROUPSREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_MODIFYUSERGROUPSREQUEST_H_

#include <alibabacloud/ehpc/EHPCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT ModifyUserGroupsRequest : public RpcServiceRequest {
public:
	struct User {
		std::string name;
		std::string group;
	};
	ModifyUserGroupsRequest();
	~ModifyUserGroupsRequest();
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	bool getAsync() const;
	void setAsync(bool async);
	std::vector<User> getUser() const;
	void setUser(const std::vector<User> &user);

private:
	std::string clusterId_;
	std::string accessKeyId_;
	bool async_;
	std::vector<User> user_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_MODIFYUSERGROUPSREQUEST_H_
