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

#include <alibabacloud/dds/model/DescribeDBInstancesRequest.h>

using AlibabaCloud::Dds::Model::DescribeDBInstancesRequest;

DescribeDBInstancesRequest::DescribeDBInstancesRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeDBInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstancesRequest::~DescribeDBInstancesRequest() {}

long DescribeDBInstancesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBInstancesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBInstancesRequest::getEngineVersion() const {
  return engineVersion_;
}

void DescribeDBInstancesRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string DescribeDBInstancesRequest::getNetworkType() const {
  return networkType_;
}

void DescribeDBInstancesRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

int DescribeDBInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDBInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDBInstancesRequest::getReplicationFactor() const {
  return replicationFactor_;
}

void DescribeDBInstancesRequest::setReplicationFactor(const std::string &replicationFactor) {
  replicationFactor_ = replicationFactor;
  setParameter(std::string("ReplicationFactor"), replicationFactor);
}

std::string DescribeDBInstancesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstancesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstancesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDBInstancesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDBInstancesRequest::getExpired() const {
  return expired_;
}

void DescribeDBInstancesRequest::setExpired(const std::string &expired) {
  expired_ = expired;
  setParameter(std::string("Expired"), expired);
}

std::string DescribeDBInstancesRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBInstancesRequest::getEngine() const {
  return engine_;
}

void DescribeDBInstancesRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

int DescribeDBInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDBInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDBInstancesRequest::getDBNodeType() const {
  return dBNodeType_;
}

void DescribeDBInstancesRequest::setDBNodeType(const std::string &dBNodeType) {
  dBNodeType_ = dBNodeType;
  setParameter(std::string("DBNodeType"), dBNodeType);
}

std::string DescribeDBInstancesRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBInstancesRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDBInstancesRequest::getDBInstanceDescription() const {
  return dBInstanceDescription_;
}

void DescribeDBInstancesRequest::setDBInstanceDescription(const std::string &dBInstanceDescription) {
  dBInstanceDescription_ = dBInstanceDescription;
  setParameter(std::string("DBInstanceDescription"), dBInstanceDescription);
}

std::string DescribeDBInstancesRequest::getDBInstanceStatus() const {
  return dBInstanceStatus_;
}

void DescribeDBInstancesRequest::setDBInstanceStatus(const std::string &dBInstanceStatus) {
  dBInstanceStatus_ = dBInstanceStatus;
  setParameter(std::string("DBInstanceStatus"), dBInstanceStatus);
}

std::vector<DescribeDBInstancesRequest::Tag> DescribeDBInstancesRequest::getTag() const {
  return tag_;
}

void DescribeDBInstancesRequest::setTag(const std::vector<DescribeDBInstancesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeDBInstancesRequest::getExpireTime() const {
  return expireTime_;
}

void DescribeDBInstancesRequest::setExpireTime(const std::string &expireTime) {
  expireTime_ = expireTime;
  setParameter(std::string("ExpireTime"), expireTime);
}

std::string DescribeDBInstancesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBInstancesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBInstancesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBInstancesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeDBInstancesRequest::getConnectionDomain() const {
  return connectionDomain_;
}

void DescribeDBInstancesRequest::setConnectionDomain(const std::string &connectionDomain) {
  connectionDomain_ = connectionDomain;
  setParameter(std::string("ConnectionDomain"), connectionDomain);
}

long DescribeDBInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDBInstancesRequest::getDBInstanceType() const {
  return dBInstanceType_;
}

void DescribeDBInstancesRequest::setDBInstanceType(const std::string &dBInstanceType) {
  dBInstanceType_ = dBInstanceType;
  setParameter(std::string("DBInstanceType"), dBInstanceType);
}

std::string DescribeDBInstancesRequest::getDBInstanceClass() const {
  return dBInstanceClass_;
}

void DescribeDBInstancesRequest::setDBInstanceClass(const std::string &dBInstanceClass) {
  dBInstanceClass_ = dBInstanceClass;
  setParameter(std::string("DBInstanceClass"), dBInstanceClass);
}

std::string DescribeDBInstancesRequest::getVSwitchId() const {
  return vSwitchId_;
}

void DescribeDBInstancesRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string DescribeDBInstancesRequest::getVpcId() const {
  return vpcId_;
}

void DescribeDBInstancesRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string DescribeDBInstancesRequest::getZoneId() const {
  return zoneId_;
}

void DescribeDBInstancesRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string DescribeDBInstancesRequest::getChargeType() const {
  return chargeType_;
}

void DescribeDBInstancesRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

