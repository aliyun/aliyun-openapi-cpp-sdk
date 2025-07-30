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

#include <alibabacloud/r-kvstore/model/CreateTCInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::CreateTCInstanceRequest;

CreateTCInstanceRequest::CreateTCInstanceRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "CreateTCInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateTCInstanceRequest::~CreateTCInstanceRequest() {}

long CreateTCInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateTCInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateTCInstanceRequest::getCouponNo() const {
  return couponNo_;
}

void CreateTCInstanceRequest::setCouponNo(const std::string &couponNo) {
  couponNo_ = couponNo;
  setParameter(std::string("CouponNo"), couponNo);
}

std::string CreateTCInstanceRequest::getNetworkType() const {
  return networkType_;
}

void CreateTCInstanceRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

bool CreateTCInstanceRequest::getNeedEni() const {
  return needEni_;
}

void CreateTCInstanceRequest::setNeedEni(bool needEni) {
  needEni_ = needEni;
  setParameter(std::string("NeedEni"), needEni ? "true" : "false");
}

std::string CreateTCInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateTCInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateTCInstanceRequest::getPassword() const {
  return password_;
}

void CreateTCInstanceRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string CreateTCInstanceRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateTCInstanceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::vector<CreateTCInstanceRequest::Tag> CreateTCInstanceRequest::getTag() const {
  return tag_;
}

void CreateTCInstanceRequest::setTag(const std::vector<CreateTCInstanceRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateTCInstanceRequest::getBusinessInfo() const {
  return businessInfo_;
}

void CreateTCInstanceRequest::setBusinessInfo(const std::string &businessInfo) {
  businessInfo_ = businessInfo;
  setParameter(std::string("BusinessInfo"), businessInfo);
}

std::string CreateTCInstanceRequest::getAutoRenewPeriod() const {
  return autoRenewPeriod_;
}

void CreateTCInstanceRequest::setAutoRenewPeriod(const std::string &autoRenewPeriod) {
  autoRenewPeriod_ = autoRenewPeriod;
  setParameter(std::string("AutoRenewPeriod"), autoRenewPeriod);
}

std::string CreateTCInstanceRequest::getPeriod() const {
  return period_;
}

void CreateTCInstanceRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

bool CreateTCInstanceRequest::getDryRun() const {
  return dryRun_;
}

void CreateTCInstanceRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

long CreateTCInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateTCInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateTCInstanceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateTCInstanceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateTCInstanceRequest::getInstanceName() const {
  return instanceName_;
}

void CreateTCInstanceRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string CreateTCInstanceRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateTCInstanceRequest::setAutoRenew(const std::string &autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew);
}

std::string CreateTCInstanceRequest::getZoneId() const {
  return zoneId_;
}

void CreateTCInstanceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateTCInstanceRequest::getImageId() const {
  return imageId_;
}

void CreateTCInstanceRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string CreateTCInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CreateTCInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateTCInstanceRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void CreateTCInstanceRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string CreateTCInstanceRequest::getAutoUseCoupon() const {
  return autoUseCoupon_;
}

void CreateTCInstanceRequest::setAutoUseCoupon(const std::string &autoUseCoupon) {
  autoUseCoupon_ = autoUseCoupon;
  setParameter(std::string("AutoUseCoupon"), autoUseCoupon);
}

std::string CreateTCInstanceRequest::getInstanceClass() const {
  return instanceClass_;
}

void CreateTCInstanceRequest::setInstanceClass(const std::string &instanceClass) {
  instanceClass_ = instanceClass;
  setParameter(std::string("InstanceClass"), instanceClass);
}

std::string CreateTCInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateTCInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateTCInstanceRequest::getRegionId() const {
  return regionId_;
}

void CreateTCInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateTCInstanceRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void CreateTCInstanceRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::string CreateTCInstanceRequest::getDeploymentSetId() const {
  return deploymentSetId_;
}

void CreateTCInstanceRequest::setDeploymentSetId(const std::string &deploymentSetId) {
  deploymentSetId_ = deploymentSetId;
  setParameter(std::string("DeploymentSetId"), deploymentSetId);
}

std::string CreateTCInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateTCInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateTCInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateTCInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::vector<CreateTCInstanceRequest::DataDisk> CreateTCInstanceRequest::getDataDisk() const {
  return dataDisk_;
}

void CreateTCInstanceRequest::setDataDisk(const std::vector<CreateTCInstanceRequest::DataDisk> &dataDisk) {
  dataDisk_ = dataDisk;
  for(int dep1 = 0; dep1 != dataDisk.size(); dep1++) {
  auto dataDiskObj = dataDisk.at(dep1);
  std::string dataDiskObjStr = std::string("DataDisk") + "." + std::to_string(dep1 + 1);
    setParameter(dataDiskObjStr + ".Size", std::to_string(dataDiskObj.size));
    setParameter(dataDiskObjStr + ".PerformanceLevel", dataDiskObj.performanceLevel);
    setParameter(dataDiskObjStr + ".Category", dataDiskObj.category);
  }
}

std::string CreateTCInstanceRequest::getVpcId() const {
  return vpcId_;
}

void CreateTCInstanceRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

