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

#ifndef ALIBABACLOUD_HITSDB_MODEL_UPDATEINSTANCEIPWHITELISTREQUEST_H_
#define ALIBABACLOUD_HITSDB_MODEL_UPDATEINSTANCEIPWHITELISTREQUEST_H_

#include <alibabacloud/hitsdb/HitsdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Hitsdb {
namespace Model {
class ALIBABACLOUD_HITSDB_EXPORT UpdateInstanceIpWhiteListRequest : public RpcServiceRequest {
public:
	UpdateInstanceIpWhiteListRequest();
	~UpdateInstanceIpWhiteListRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	bool get_Delete() const;
	void set_Delete(bool _delete);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getGroupName() const;
	void setGroupName(const std::string &groupName);
	std::string getSecurityIpList() const;
	void setSecurityIpList(const std::string &securityIpList);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);

private:
	long resourceOwnerId_;
	bool _delete_;
	std::string accessKeyId_;
	std::string securityToken_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string groupName_;
	std::string securityIpList_;
	std::string instanceId_;
};
} // namespace Model
} // namespace Hitsdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_HITSDB_MODEL_UPDATEINSTANCEIPWHITELISTREQUEST_H_
