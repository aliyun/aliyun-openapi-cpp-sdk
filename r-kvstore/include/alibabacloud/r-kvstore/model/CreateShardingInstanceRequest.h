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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_CREATESHARDINGINSTANCEREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_CREATESHARDINGINSTANCEREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace R_kvstore {
namespace Model {
class ALIBABACLOUD_R_KVSTORE_EXPORT CreateShardingInstanceRequest
    : public RpcServiceRequest {

public:
  CreateShardingInstanceRequest();
  ~CreateShardingInstanceRequest();

  int getShardStorageQuantity() const;
  void setShardStorageQuantity(int shardStorageQuantity);
  long getResourceOwnerId() const;
  void setResourceOwnerId(long resourceOwnerId);
  std::string getNodeType() const;
  void setNodeType(const std::string &nodeType);
  std::string getCouponNo() const;
  void setCouponNo(const std::string &couponNo);
  std::string getNetworkType() const;
  void setNetworkType(const std::string &networkType);
  std::string getEngineVersion() const;
  void setEngineVersion(const std::string &engineVersion);
  std::string getInstanceClass() const;
  void setInstanceClass(const std::string &instanceClass);
  std::string getAccessKeyId() const;
  void setAccessKeyId(const std::string &accessKeyId);
  long getCapacity() const;
  void setCapacity(long capacity);
  std::string getPassword() const;
  void setPassword(const std::string &password);
  std::string getShardReplicaClass() const;
  void setShardReplicaClass(const std::string &shardReplicaClass);
  std::string getSecurityToken() const;
  void setSecurityToken(const std::string &securityToken);
  std::string getRegionId() const;
  void setRegionId(const std::string &regionId);
  std::string getIncrementalBackupMode() const;
  void setIncrementalBackupMode(const std::string &incrementalBackupMode);
  std::string getInstanceType() const;
  void setInstanceType(const std::string &instanceType);
  std::string getBusinessInfo() const;
  void setBusinessInfo(const std::string &businessInfo);
  std::string getPeriod() const;
  void setPeriod(const std::string &period);
  std::string getResourceOwnerAccount() const;
  void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
  std::string getSrcDBInstanceId() const;
  void setSrcDBInstanceId(const std::string &srcDBInstanceId);
  std::string getOwnerAccount() const;
  void setOwnerAccount(const std::string &ownerAccount);
  std::string getBackupId() const;
  void setBackupId(const std::string &backupId);
  long getOwnerId() const;
  void setOwnerId(long ownerId);
  std::string getToken() const;
  void setToken(const std::string &token);
  int getShardQuantity() const;
  void setShardQuantity(int shardQuantity);
  std::string getVSwitchId() const;
  void setVSwitchId(const std::string &vSwitchId);
  std::string getPrivateIpAddress() const;
  void setPrivateIpAddress(const std::string &privateIpAddress);
  std::string getSecurityIPList() const;
  void setSecurityIPList(const std::string &securityIPList);
  std::string getInstanceName() const;
  void setInstanceName(const std::string &instanceName);
  int getShardReplicaQuantity() const;
  void setShardReplicaQuantity(int shardReplicaQuantity);
  std::string getArchitectureType() const;
  void setArchitectureType(const std::string &architectureType);
  std::string getVpcId() const;
  void setVpcId(const std::string &vpcId);
  std::string getRedisManagerClass() const;
  void setRedisManagerClass(const std::string &redisManagerClass);
  std::string getZoneId() const;
  void setZoneId(const std::string &zoneId);
  std::string getChargeType() const;
  void setChargeType(const std::string &chargeType);
  int getProxyQuantity() const;
  void setProxyQuantity(int proxyQuantity);
  std::string getConfig() const;
  void setConfig(const std::string &config);
  std::string getProxyMode() const;
  void setProxyMode(const std::string &proxyMode);

private:
  int shardStorageQuantity_;
  long resourceOwnerId_;
  std::string nodeType_;
  std::string couponNo_;
  std::string networkType_;
  std::string engineVersion_;
  std::string instanceClass_;
  std::string accessKeyId_;
  long capacity_;
  std::string password_;
  std::string shardReplicaClass_;
  std::string securityToken_;
  std::string regionId_;
  std::string incrementalBackupMode_;
  std::string instanceType_;
  std::string businessInfo_;
  std::string period_;
  std::string resourceOwnerAccount_;
  std::string srcDBInstanceId_;
  std::string ownerAccount_;
  std::string backupId_;
  long ownerId_;
  std::string token_;
  int shardQuantity_;
  std::string vSwitchId_;
  std::string privateIpAddress_;
  std::string securityIPList_;
  std::string instanceName_;
  int shardReplicaQuantity_;
  std::string architectureType_;
  std::string vpcId_;
  std::string redisManagerClass_;
  std::string zoneId_;
  std::string chargeType_;
  int proxyQuantity_;
  std::string config_;
  std::string proxyMode_;
};
} // namespace Model
} // namespace R_kvstore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_CREATESHARDINGINSTANCEREQUEST_H_