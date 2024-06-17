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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_CREATEDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_POLARDBX_MODEL_CREATEDBINSTANCEREQUEST_H_

#include <alibabacloud/polardbx/PolardbxExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardbx {
namespace Model {
class ALIBABACLOUD_POLARDBX_EXPORT CreateDBInstanceRequest : public RpcServiceRequest {
public:
	CreateDBInstanceRequest();
	~CreateDBInstanceRequest();
	std::string getNetworkType() const;
	void setNetworkType(const std::string &networkType);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	std::string getTertiaryZone() const;
	void setTertiaryZone(const std::string &tertiaryZone);
	std::string getCnClass() const;
	void setCnClass(const std::string &cnClass);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getDBNodeClass() const;
	void setDBNodeClass(const std::string &dBNodeClass);
	std::string getSecondaryZone() const;
	void setSecondaryZone(const std::string &secondaryZone);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	bool getIsReadDBInstance() const;
	void setIsReadDBInstance(bool isReadDBInstance);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getCNNodeCount() const;
	void setCNNodeCount(const std::string &cNNodeCount);
	std::string getPrimaryDBInstanceName() const;
	void setPrimaryDBInstanceName(const std::string &primaryDBInstanceName);
	std::string getTopologyType() const;
	void setTopologyType(const std::string &topologyType);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getIsColumnarReadDBInstance() const;
	void setIsColumnarReadDBInstance(bool isColumnarReadDBInstance);
	std::string getDNNodeCount() const;
	void setDNNodeCount(const std::string &dNNodeCount);
	int getDBNodeCount() const;
	void setDBNodeCount(int dBNodeCount);
	std::string getDnClass() const;
	void setDnClass(const std::string &dnClass);
	int getUsedTime() const;
	void setUsedTime(int usedTime);
	std::string getDnStorageSpace() const;
	void setDnStorageSpace(const std::string &dnStorageSpace);
	std::string getPrimaryZone() const;
	void setPrimaryZone(const std::string &primaryZone);
	std::string getSeries() const;
	void setSeries(const std::string &series);
	std::string getVPCId() const;
	void setVPCId(const std::string &vPCId);
	std::string getPayType() const;
	void setPayType(const std::string &payType);

private:
	std::string networkType_;
	std::string engineVersion_;
	std::string tertiaryZone_;
	std::string cnClass_;
	std::string resourceGroupId_;
	std::string dBNodeClass_;
	std::string secondaryZone_;
	std::string period_;
	bool isReadDBInstance_;
	std::string vSwitchId_;
	bool autoRenew_;
	std::string zoneId_;
	std::string cNNodeCount_;
	std::string primaryDBInstanceName_;
	std::string topologyType_;
	std::string clientToken_;
	std::string regionId_;
	bool isColumnarReadDBInstance_;
	std::string dNNodeCount_;
	int dBNodeCount_;
	std::string dnClass_;
	int usedTime_;
	std::string dnStorageSpace_;
	std::string primaryZone_;
	std::string series_;
	std::string vPCId_;
	std::string payType_;
};
} // namespace Model
} // namespace Polardbx
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDBX_MODEL_CREATEDBINSTANCEREQUEST_H_
