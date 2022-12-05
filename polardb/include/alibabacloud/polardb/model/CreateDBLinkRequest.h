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

#ifndef ALIBABACLOUD_POLARDB_MODEL_CREATEDBLINKREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_CREATEDBLINKREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT CreateDBLinkRequest : public RpcServiceRequest {
public:
	CreateDBLinkRequest();
	~CreateDBLinkRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getSourceDBName() const;
	void setSourceDBName(const std::string &sourceDBName);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getTargetDBName() const;
	void setTargetDBName(const std::string &targetDBName);
	std::string getTargetIp() const;
	void setTargetIp(const std::string &targetIp);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBLinkName() const;
	void setDBLinkName(const std::string &dBLinkName);
	std::string getTargetPort() const;
	void setTargetPort(const std::string &targetPort);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getTargetDBInstanceName() const;
	void setTargetDBInstanceName(const std::string &targetDBInstanceName);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getTargetDBPasswd() const;
	void setTargetDBPasswd(const std::string &targetDBPasswd);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTargetDBAccount() const;
	void setTargetDBAccount(const std::string &targetDBAccount);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);

private:
	long resourceOwnerId_;
	std::string sourceDBName_;
	std::string clientToken_;
	std::string accessKeyId_;
	std::string targetDBName_;
	std::string targetIp_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string dBLinkName_;
	std::string targetPort_;
	std::string resourceOwnerAccount_;
	std::string targetDBInstanceName_;
	std::string dBClusterId_;
	std::string ownerAccount_;
	std::string targetDBPasswd_;
	long ownerId_;
	std::string targetDBAccount_;
	std::string vpcId_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_CREATEDBLINKREQUEST_H_
