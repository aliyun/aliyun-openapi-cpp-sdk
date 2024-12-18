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

#ifndef ALIBABACLOUD_SELECTDB_MODEL_CREATEDBCLUSTERREQUEST_H_
#define ALIBABACLOUD_SELECTDB_MODEL_CREATEDBCLUSTERREQUEST_H_

#include <alibabacloud/selectdb/SelectdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Selectdb {
namespace Model {
class ALIBABACLOUD_SELECTDB_EXPORT CreateDBClusterRequest : public RpcServiceRequest {
public:
	CreateDBClusterRequest();
	~CreateDBClusterRequest();
	std::string getDBClusterDescription() const;
	void setDBClusterDescription(const std::string &dBClusterDescription);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	std::string getCacheSize() const;
	void setCacheSize(const std::string &cacheSize);
	std::string getEngine() const;
	void setEngine(const std::string &engine);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	std::string getDBClusterClass() const;
	void setDBClusterClass(const std::string &dBClusterClass);
	std::string getUsedTime() const;
	void setUsedTime(const std::string &usedTime);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);

private:
	std::string dBClusterDescription_;
	long resourceOwnerId_;
	std::string engineVersion_;
	std::string cacheSize_;
	std::string engine_;
	std::string regionId_;
	std::string dBInstanceId_;
	std::string period_;
	std::string dBClusterClass_;
	std::string usedTime_;
	std::string vSwitchId_;
	std::string vpcId_;
	std::string zoneId_;
	std::string chargeType_;
};
} // namespace Model
} // namespace Selectdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SELECTDB_MODEL_CREATEDBCLUSTERREQUEST_H_
