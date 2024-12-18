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

#ifndef ALIBABACLOUD_SELECTDB_MODEL_CHECKCREATEDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_SELECTDB_MODEL_CHECKCREATEDBINSTANCEREQUEST_H_

#include <alibabacloud/selectdb/SelectdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Selectdb {
namespace Model {
class ALIBABACLOUD_SELECTDB_EXPORT CheckCreateDBInstanceRequest : public RpcServiceRequest {
public:
	CheckCreateDBInstanceRequest();
	~CheckCreateDBInstanceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getConnectionString() const;
	void setConnectionString(const std::string &connectionString);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	int getCacheSize() const;
	void setCacheSize(int cacheSize);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getEngine() const;
	void setEngine(const std::string &engine);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceDescription() const;
	void setDBInstanceDescription(const std::string &dBInstanceDescription);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	int getUsedTime() const;
	void setUsedTime(int usedTime);
	std::string getDBInstanceClass() const;
	void setDBInstanceClass(const std::string &dBInstanceClass);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getSecurityIPList() const;
	void setSecurityIPList(const std::string &securityIPList);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string connectionString_;
	std::string engineVersion_;
	int cacheSize_;
	std::string resourceGroupId_;
	std::string engine_;
	std::string regionId_;
	std::string dBInstanceDescription_;
	std::string period_;
	int usedTime_;
	std::string dBInstanceClass_;
	std::string vSwitchId_;
	std::string securityIPList_;
	std::string vpcId_;
	std::string zoneId_;
	std::string chargeType_;
};
} // namespace Model
} // namespace Selectdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SELECTDB_MODEL_CHECKCREATEDBINSTANCEREQUEST_H_
