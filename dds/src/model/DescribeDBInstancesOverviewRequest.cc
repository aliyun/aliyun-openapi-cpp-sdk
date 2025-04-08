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

#include <alibabacloud/dds/model/DescribeDBInstancesOverviewRequest.h>

using AlibabaCloud::Dds::Model::DescribeDBInstancesOverviewRequest;

DescribeDBInstancesOverviewRequest::DescribeDBInstancesOverviewRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeDBInstancesOverview") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstancesOverviewRequest::~DescribeDBInstancesOverviewRequest() {}

long DescribeDBInstancesOverviewRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBInstancesOverviewRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool DescribeDBInstancesOverviewRequest::getShowTags() const {
  return showTags_;
}

void DescribeDBInstancesOverviewRequest::setShowTags(bool showTags) {
  showTags_ = showTags;
  setParameter(std::string("ShowTags"), showTags ? "true" : "false");
}

std::string DescribeDBInstancesOverviewRequest::getNetworkType() const {
  return networkType_;
}

void DescribeDBInstancesOverviewRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

std::string DescribeDBInstancesOverviewRequest::getEngineVersion() const {
  return engineVersion_;
}

void DescribeDBInstancesOverviewRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string DescribeDBInstancesOverviewRequest::getInstanceClass() const {
  return instanceClass_;
}

void DescribeDBInstancesOverviewRequest::setInstanceClass(const std::string &instanceClass) {
  instanceClass_ = instanceClass;
  setParameter(std::string("InstanceClass"), instanceClass);
}

std::string DescribeDBInstancesOverviewRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstancesOverviewRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstancesOverviewRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDBInstancesOverviewRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDBInstancesOverviewRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBInstancesOverviewRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBInstancesOverviewRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeDBInstancesOverviewRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeDBInstancesOverviewRequest::getInstanceStatus() const {
  return instanceStatus_;
}

void DescribeDBInstancesOverviewRequest::setInstanceStatus(const std::string &instanceStatus) {
  instanceStatus_ = instanceStatus;
  setParameter(std::string("InstanceStatus"), instanceStatus);
}

std::string DescribeDBInstancesOverviewRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBInstancesOverviewRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBInstancesOverviewRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBInstancesOverviewRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBInstancesOverviewRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInstancesOverviewRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDBInstancesOverviewRequest::getVSwitchId() const {
  return vSwitchId_;
}

void DescribeDBInstancesOverviewRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string DescribeDBInstancesOverviewRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeDBInstancesOverviewRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

std::string DescribeDBInstancesOverviewRequest::getVpcId() const {
  return vpcId_;
}

void DescribeDBInstancesOverviewRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string DescribeDBInstancesOverviewRequest::getZoneId() const {
  return zoneId_;
}

void DescribeDBInstancesOverviewRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string DescribeDBInstancesOverviewRequest::getChargeType() const {
  return chargeType_;
}

void DescribeDBInstancesOverviewRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

