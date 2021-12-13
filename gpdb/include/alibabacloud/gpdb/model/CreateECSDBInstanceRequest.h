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

#ifndef ALIBABACLOUD_GPDB_MODEL_CREATEECSDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_CREATEECSDBINSTANCEREQUEST_H_

#include <alibabacloud/gpdb/GpdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gpdb {
namespace Model {
class ALIBABACLOUD_GPDB_EXPORT CreateECSDBInstanceRequest : public RpcServiceRequest {
public:
	CreateECSDBInstanceRequest();
	~CreateECSDBInstanceRequest();
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	std::string getDBInstanceCategory() const;
	void setDBInstanceCategory(const std::string &dBInstanceCategory);
	std::string getEncryptionType() const;
	void setEncryptionType(const std::string &encryptionType);
	std::string getDBInstanceDescription() const;
	void setDBInstanceDescription(const std::string &dBInstanceDescription);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	std::string getBackupId() const;
	void setBackupId(const std::string &backupId);
	std::string getEncryptionKey() const;
	void setEncryptionKey(const std::string &encryptionKey);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSecurityIPList() const;
	void setSecurityIPList(const std::string &securityIPList);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::string &privateIpAddress);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getInstanceNetworkType() const;
	void setInstanceNetworkType(const std::string &instanceNetworkType);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getInstanceSpec() const;
	void setInstanceSpec(const std::string &instanceSpec);
	int getStorageSize() const;
	void setStorageSize(int storageSize);
	std::string getSegStorageType() const;
	void setSegStorageType(const std::string &segStorageType);
	int getMasterNodeNum() const;
	void setMasterNodeNum(int masterNodeNum);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	int getSegNodeNum() const;
	void setSegNodeNum(int segNodeNum);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEngine() const;
	void setEngine(const std::string &engine);
	std::string getUsedTime() const;
	void setUsedTime(const std::string &usedTime);
	std::string getVPCId() const;
	void setVPCId(const std::string &vPCId);
	std::string getPayType() const;
	void setPayType(const std::string &payType);
	std::string getSrcDbInstanceName() const;
	void setSrcDbInstanceName(const std::string &srcDbInstanceName);

private:
	std::string engineVersion_;
	std::string dBInstanceCategory_;
	std::string encryptionType_;
	std::string dBInstanceDescription_;
	std::string period_;
	std::string backupId_;
	std::string encryptionKey_;
	long ownerId_;
	std::string securityIPList_;
	std::string vSwitchId_;
	std::string privateIpAddress_;
	std::string zoneId_;
	std::string instanceNetworkType_;
	std::string clientToken_;
	std::string instanceSpec_;
	int storageSize_;
	std::string segStorageType_;
	int masterNodeNum_;
	std::string accessKeyId_;
	int segNodeNum_;
	std::string regionId_;
	std::string engine_;
	std::string usedTime_;
	std::string vPCId_;
	std::string payType_;
	std::string srcDbInstanceName_;
};
} // namespace Model
} // namespace Gpdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GPDB_MODEL_CREATEECSDBINSTANCEREQUEST_H_
