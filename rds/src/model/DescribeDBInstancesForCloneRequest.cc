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

#include <alibabacloud/rds/model/DescribeDBInstancesForCloneRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstancesForCloneRequest;

DescribeDBInstancesForCloneRequest::DescribeDBInstancesForCloneRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstancesForClone") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstancesForCloneRequest::~DescribeDBInstancesForCloneRequest() {}

std::string DescribeDBInstancesForCloneRequest::getConnectionMode() const {
  return connectionMode_;
}

void DescribeDBInstancesForCloneRequest::setConnectionMode(const std::string &connectionMode) {
  connectionMode_ = connectionMode;
  setParameter(std::string("ConnectionMode"), connectionMode);
}

long DescribeDBInstancesForCloneRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBInstancesForCloneRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBInstancesForCloneRequest::getNodeType() const {
  return nodeType_;
}

void DescribeDBInstancesForCloneRequest::setNodeType(const std::string &nodeType) {
  nodeType_ = nodeType;
  setParameter(std::string("NodeType"), nodeType);
}

std::string DescribeDBInstancesForCloneRequest::getClientToken() const {
  return clientToken_;
}

void DescribeDBInstancesForCloneRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeDBInstancesForCloneRequest::getSearchKey() const {
  return searchKey_;
}

void DescribeDBInstancesForCloneRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

std::string DescribeDBInstancesForCloneRequest::getEngineVersion() const {
  return engineVersion_;
}

void DescribeDBInstancesForCloneRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

int DescribeDBInstancesForCloneRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDBInstancesForCloneRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDBInstancesForCloneRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstancesForCloneRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstancesForCloneRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDBInstancesForCloneRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDBInstancesForCloneRequest::getExpired() const {
  return expired_;
}

void DescribeDBInstancesForCloneRequest::setExpired(const std::string &expired) {
  expired_ = expired;
  setParameter(std::string("Expired"), expired);
}

std::string DescribeDBInstancesForCloneRequest::getEngine() const {
  return engine_;
}

void DescribeDBInstancesForCloneRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string DescribeDBInstancesForCloneRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBInstancesForCloneRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBInstancesForCloneRequest::getCurrentInstanceId() const {
  return currentInstanceId_;
}

void DescribeDBInstancesForCloneRequest::setCurrentInstanceId(const std::string &currentInstanceId) {
  currentInstanceId_ = currentInstanceId;
  setParameter(std::string("CurrentInstanceId"), currentInstanceId);
}

int DescribeDBInstancesForCloneRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDBInstancesForCloneRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDBInstancesForCloneRequest::getDBInstanceStatus() const {
  return dBInstanceStatus_;
}

void DescribeDBInstancesForCloneRequest::setDBInstanceStatus(const std::string &dBInstanceStatus) {
  dBInstanceStatus_ = dBInstanceStatus;
  setParameter(std::string("DBInstanceStatus"), dBInstanceStatus);
}

std::string DescribeDBInstancesForCloneRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBInstancesForCloneRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDBInstancesForCloneRequest::getProxyId() const {
  return proxyId_;
}

void DescribeDBInstancesForCloneRequest::setProxyId(const std::string &proxyId) {
  proxyId_ = proxyId;
  setParameter(std::string("proxyId"), proxyId);
}

std::string DescribeDBInstancesForCloneRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBInstancesForCloneRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBInstancesForCloneRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBInstancesForCloneRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBInstancesForCloneRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInstancesForCloneRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDBInstancesForCloneRequest::getDBInstanceType() const {
  return dBInstanceType_;
}

void DescribeDBInstancesForCloneRequest::setDBInstanceType(const std::string &dBInstanceType) {
  dBInstanceType_ = dBInstanceType;
  setParameter(std::string("DBInstanceType"), dBInstanceType);
}

std::string DescribeDBInstancesForCloneRequest::getDBInstanceClass() const {
  return dBInstanceClass_;
}

void DescribeDBInstancesForCloneRequest::setDBInstanceClass(const std::string &dBInstanceClass) {
  dBInstanceClass_ = dBInstanceClass;
  setParameter(std::string("DBInstanceClass"), dBInstanceClass);
}

std::string DescribeDBInstancesForCloneRequest::getVSwitchId() const {
  return vSwitchId_;
}

void DescribeDBInstancesForCloneRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string DescribeDBInstancesForCloneRequest::getVpcId() const {
  return vpcId_;
}

void DescribeDBInstancesForCloneRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string DescribeDBInstancesForCloneRequest::getZoneId() const {
  return zoneId_;
}

void DescribeDBInstancesForCloneRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string DescribeDBInstancesForCloneRequest::getPayType() const {
  return payType_;
}

void DescribeDBInstancesForCloneRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

std::string DescribeDBInstancesForCloneRequest::getInstanceNetworkType() const {
  return instanceNetworkType_;
}

void DescribeDBInstancesForCloneRequest::setInstanceNetworkType(const std::string &instanceNetworkType) {
  instanceNetworkType_ = instanceNetworkType;
  setParameter(std::string("InstanceNetworkType"), instanceNetworkType);
}

