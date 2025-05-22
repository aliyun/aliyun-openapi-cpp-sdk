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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYDBPROXYENDPOINTREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYDBPROXYENDPOINTREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT ModifyDBProxyEndpointRequest : public RpcServiceRequest {
public:
	ModifyDBProxyEndpointRequest();
	~ModifyDBProxyEndpointRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getConfigDBProxyFeatures() const;
	void setConfigDBProxyFeatures(const std::string &configDBProxyFeatures);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEffectiveTime() const;
	void setEffectiveTime(const std::string &effectiveTime);
	std::string getEffectiveSpecificTime() const;
	void setEffectiveSpecificTime(const std::string &effectiveSpecificTime);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getReadOnlyInstanceWeight() const;
	void setReadOnlyInstanceWeight(const std::string &readOnlyInstanceWeight);
	std::string getReadOnlyInstanceMaxDelayTime() const;
	void setReadOnlyInstanceMaxDelayTime(const std::string &readOnlyInstanceMaxDelayTime);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDbEndpointMinSlaveCount() const;
	void setDbEndpointMinSlaveCount(const std::string &dbEndpointMinSlaveCount);
	std::string getDbEndpointAliases() const;
	void setDbEndpointAliases(const std::string &dbEndpointAliases);
	std::string getDBProxyEngineType() const;
	void setDBProxyEngineType(const std::string &dBProxyEngineType);
	std::string getCausalConsistReadTimeout() const;
	void setCausalConsistReadTimeout(const std::string &causalConsistReadTimeout);
	std::string getDbEndpointOperator() const;
	void setDbEndpointOperator(const std::string &dbEndpointOperator);
	std::string getDbEndpointType() const;
	void setDbEndpointType(const std::string &dbEndpointType);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDbEndpointReadWriteMode() const;
	void setDbEndpointReadWriteMode(const std::string &dbEndpointReadWriteMode);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getDBProxyEndpointId() const;
	void setDBProxyEndpointId(const std::string &dBProxyEndpointId);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getReadOnlyInstanceDistributionType() const;
	void setReadOnlyInstanceDistributionType(const std::string &readOnlyInstanceDistributionType);

private:
	long resourceOwnerId_;
	std::string configDBProxyFeatures_;
	std::string accessKeyId_;
	std::string regionId_;
	std::string effectiveTime_;
	std::string effectiveSpecificTime_;
	std::string dBInstanceId_;
	std::string readOnlyInstanceWeight_;
	std::string readOnlyInstanceMaxDelayTime_;
	std::string resourceOwnerAccount_;
	std::string dbEndpointMinSlaveCount_;
	std::string dbEndpointAliases_;
	std::string dBProxyEngineType_;
	std::string causalConsistReadTimeout_;
	std::string dbEndpointOperator_;
	std::string dbEndpointType_;
	long ownerId_;
	std::string dbEndpointReadWriteMode_;
	std::string vSwitchId_;
	std::string dBProxyEndpointId_;
	std::string vpcId_;
	std::string readOnlyInstanceDistributionType_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYDBPROXYENDPOINTREQUEST_H_
