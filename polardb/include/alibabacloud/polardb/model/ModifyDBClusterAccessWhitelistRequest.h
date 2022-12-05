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

#ifndef ALIBABACLOUD_POLARDB_MODEL_MODIFYDBCLUSTERACCESSWHITELISTREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_MODIFYDBCLUSTERACCESSWHITELISTREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT ModifyDBClusterAccessWhitelistRequest : public RpcServiceRequest {
public:
	ModifyDBClusterAccessWhitelistRequest();
	~ModifyDBClusterAccessWhitelistRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getSecurityIps() const;
	void setSecurityIps(const std::string &securityIps);
	std::string getDBClusterIPArrayAttribute() const;
	void setDBClusterIPArrayAttribute(const std::string &dBClusterIPArrayAttribute);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getModifyMode() const;
	void setModifyMode(const std::string &modifyMode);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getWhiteListType() const;
	void setWhiteListType(const std::string &whiteListType);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSecurityGroupIds() const;
	void setSecurityGroupIds(const std::string &securityGroupIds);
	std::string getDBClusterIPArrayName() const;
	void setDBClusterIPArrayName(const std::string &dBClusterIPArrayName);

private:
	long resourceOwnerId_;
	std::string securityIps_;
	std::string dBClusterIPArrayAttribute_;
	std::string accessKeyId_;
	std::string modifyMode_;
	std::string resourceOwnerAccount_;
	std::string dBClusterId_;
	std::string ownerAccount_;
	std::string whiteListType_;
	long ownerId_;
	std::string securityGroupIds_;
	std::string dBClusterIPArrayName_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_MODIFYDBCLUSTERACCESSWHITELISTREQUEST_H_
