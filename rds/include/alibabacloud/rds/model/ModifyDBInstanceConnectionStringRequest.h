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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCECONNECTIONSTRINGREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCECONNECTIONSTRINGREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT ModifyDBInstanceConnectionStringRequest : public RpcServiceRequest {
public:
	ModifyDBInstanceConnectionStringRequest();
	~ModifyDBInstanceConnectionStringRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getConnectionStringPrefix() const;
	void setConnectionStringPrefix(const std::string &connectionStringPrefix);
	std::string getPGBouncerPort() const;
	void setPGBouncerPort(const std::string &pGBouncerPort);
	std::string getGeneralGroupName() const;
	void setGeneralGroupName(const std::string &generalGroupName);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	bool getRetainVip() const;
	void setRetainVip(bool retainVip);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getBabelfishPort() const;
	void setBabelfishPort(const std::string &babelfishPort);
	std::string getCurrentConnectionString() const;
	void setCurrentConnectionString(const std::string &currentConnectionString);
	std::string getPort() const;
	void setPort(const std::string &port);
	std::string getTargetDBInstanceId() const;
	void setTargetDBInstanceId(const std::string &targetDBInstanceId);

private:
	long resourceOwnerId_;
	std::string connectionStringPrefix_;
	std::string pGBouncerPort_;
	std::string generalGroupName_;
	std::string accessKeyId_;
	std::string regionId_;
	std::string dBInstanceId_;
	bool retainVip_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string babelfishPort_;
	std::string currentConnectionString_;
	std::string port_;
	std::string targetDBInstanceId_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYDBINSTANCECONNECTIONSTRINGREQUEST_H_
