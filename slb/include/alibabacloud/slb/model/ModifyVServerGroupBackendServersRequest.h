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

#ifndef ALIBABACLOUD_SLB_MODEL_MODIFYVSERVERGROUPBACKENDSERVERSREQUEST_H_
#define ALIBABACLOUD_SLB_MODEL_MODIFYVSERVERGROUPBACKENDSERVERSREQUEST_H_

#include <alibabacloud/slb/SlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Slb {
namespace Model {
class ALIBABACLOUD_SLB_EXPORT ModifyVServerGroupBackendServersRequest : public RpcServiceRequest {
public:
	ModifyVServerGroupBackendServersRequest();
	~ModifyVServerGroupBackendServersRequest();
	std::string getAccess_key_id() const;
	void setAccess_key_id(const std::string &access_key_id);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getVServerGroupId() const;
	void setVServerGroupId(const std::string &vServerGroupId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getNewBackendServers() const;
	void setNewBackendServers(const std::string &newBackendServers);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTags() const;
	void setTags(const std::string &tags);
	std::string getOldBackendServers() const;
	void setOldBackendServers(const std::string &oldBackendServers);

private:
	std::string access_key_id_;
	long resourceOwnerId_;
	std::string regionId_;
	std::string vServerGroupId_;
	std::string resourceOwnerAccount_;
	std::string newBackendServers_;
	std::string ownerAccount_;
	long ownerId_;
	std::string tags_;
	std::string oldBackendServers_;
};
} // namespace Model
} // namespace Slb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SLB_MODEL_MODIFYVSERVERGROUPBACKENDSERVERSREQUEST_H_
