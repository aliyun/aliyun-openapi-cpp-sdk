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

#include <alibabacloud/ens/model/RunInstancesRequest.h>

using AlibabaCloud::Ens::Model::RunInstancesRequest;

RunInstancesRequest::RunInstancesRequest()
    : RpcServiceRequest("ens", "2017-11-10", "RunInstances") {
  setMethod(HttpRequest::Method::Post);
}

RunInstancesRequest::~RunInstancesRequest() {}

std::string RunInstancesRequest::getScheduleAreaLevel() const {
  return scheduleAreaLevel_;
}

void RunInstancesRequest::setScheduleAreaLevel(const std::string &scheduleAreaLevel) {
  scheduleAreaLevel_ = scheduleAreaLevel;
  setParameter(std::string("ScheduleAreaLevel"), scheduleAreaLevel);
}

bool RunInstancesRequest::getUniqueSuffix() const {
  return uniqueSuffix_;
}

void RunInstancesRequest::setUniqueSuffix(bool uniqueSuffix) {
  uniqueSuffix_ = uniqueSuffix;
  setParameter(std::string("UniqueSuffix"), uniqueSuffix ? "true" : "false");
}

std::string RunInstancesRequest::getInstanceChargeStrategy() const {
  return instanceChargeStrategy_;
}

void RunInstancesRequest::setInstanceChargeStrategy(const std::string &instanceChargeStrategy) {
  instanceChargeStrategy_ = instanceChargeStrategy;
  setParameter(std::string("InstanceChargeStrategy"), instanceChargeStrategy);
}

std::string RunInstancesRequest::getSecurityId() const {
  return securityId_;
}

void RunInstancesRequest::setSecurityId(const std::string &securityId) {
  securityId_ = securityId;
  setParameter(std::string("SecurityId"), securityId);
}

std::string RunInstancesRequest::getKeyPairName() const {
  return keyPairName_;
}

void RunInstancesRequest::setKeyPairName(const std::string &keyPairName) {
  keyPairName_ = keyPairName;
  setParameter(std::string("KeyPairName"), keyPairName);
}

std::string RunInstancesRequest::getPassword() const {
  return password_;
}

void RunInstancesRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string RunInstancesRequest::getHostName() const {
  return hostName_;
}

void RunInstancesRequest::setHostName(const std::string &hostName) {
  hostName_ = hostName;
  setParameter(std::string("HostName"), hostName);
}

RunInstancesRequest::SystemDisk RunInstancesRequest::getSystemDisk() const {
  return systemDisk_;
}

void RunInstancesRequest::setSystemDisk(const RunInstancesRequest::SystemDisk &systemDisk) {
  systemDisk_ = systemDisk;
  setParameter(std::string("SystemDisk") + ".Size", std::to_string(systemDisk.size));
  setParameter(std::string("SystemDisk") + ".Category", systemDisk.category);
}

std::string RunInstancesRequest::getNetDistrictCode() const {
  return netDistrictCode_;
}

void RunInstancesRequest::setNetDistrictCode(const std::string &netDistrictCode) {
  netDistrictCode_ = netDistrictCode;
  setParameter(std::string("NetDistrictCode"), netDistrictCode);
}

std::string RunInstancesRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void RunInstancesRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::vector<RunInstancesRequest::Tag> RunInstancesRequest::getTag() const {
  return tag_;
}

void RunInstancesRequest::setTag(const std::vector<RunInstancesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

long RunInstancesRequest::getPeriod() const {
  return period_;
}

void RunInstancesRequest::setPeriod(long period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

bool RunInstancesRequest::getPublicIpIdentification() const {
  return publicIpIdentification_;
}

void RunInstancesRequest::setPublicIpIdentification(bool publicIpIdentification) {
  publicIpIdentification_ = publicIpIdentification;
  setParameter(std::string("PublicIpIdentification"), publicIpIdentification ? "true" : "false");
}

std::string RunInstancesRequest::getBillingCycle() const {
  return billingCycle_;
}

void RunInstancesRequest::setBillingCycle(const std::string &billingCycle) {
  billingCycle_ = billingCycle;
  setParameter(std::string("BillingCycle"), billingCycle);
}

std::string RunInstancesRequest::getVSwitchId() const {
  return vSwitchId_;
}

void RunInstancesRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string RunInstancesRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void RunInstancesRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

std::string RunInstancesRequest::getSpotStrategy() const {
  return spotStrategy_;
}

void RunInstancesRequest::setSpotStrategy(const std::string &spotStrategy) {
  spotStrategy_ = spotStrategy;
  setParameter(std::string("SpotStrategy"), spotStrategy);
}

std::string RunInstancesRequest::getPeriodUnit() const {
  return periodUnit_;
}

void RunInstancesRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string RunInstancesRequest::getInstanceName() const {
  return instanceName_;
}

void RunInstancesRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

bool RunInstancesRequest::getAutoRenew() const {
  return autoRenew_;
}

void RunInstancesRequest::setAutoRenew(bool autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew ? "true" : "false");
}

std::string RunInstancesRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void RunInstancesRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

std::string RunInstancesRequest::getNetWorkId() const {
  return netWorkId_;
}

void RunInstancesRequest::setNetWorkId(const std::string &netWorkId) {
  netWorkId_ = netWorkId;
  setParameter(std::string("NetWorkId"), netWorkId);
}

std::string RunInstancesRequest::getSchedulingPriceStrategy() const {
  return schedulingPriceStrategy_;
}

void RunInstancesRequest::setSchedulingPriceStrategy(const std::string &schedulingPriceStrategy) {
  schedulingPriceStrategy_ = schedulingPriceStrategy;
  setParameter(std::string("SchedulingPriceStrategy"), schedulingPriceStrategy);
}

std::string RunInstancesRequest::getImageId() const {
  return imageId_;
}

void RunInstancesRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

long RunInstancesRequest::getInternetMaxBandwidthOut() const {
  return internetMaxBandwidthOut_;
}

void RunInstancesRequest::setInternetMaxBandwidthOut(long internetMaxBandwidthOut) {
  internetMaxBandwidthOut_ = internetMaxBandwidthOut;
  setParameter(std::string("InternetMaxBandwidthOut"), std::to_string(internetMaxBandwidthOut));
}

std::string RunInstancesRequest::getAutoUseCoupon() const {
  return autoUseCoupon_;
}

void RunInstancesRequest::setAutoUseCoupon(const std::string &autoUseCoupon) {
  autoUseCoupon_ = autoUseCoupon;
  setParameter(std::string("AutoUseCoupon"), autoUseCoupon);
}

std::string RunInstancesRequest::getUserData() const {
  return userData_;
}

void RunInstancesRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

bool RunInstancesRequest::getPasswordInherit() const {
  return passwordInherit_;
}

void RunInstancesRequest::setPasswordInherit(bool passwordInherit) {
  passwordInherit_ = passwordInherit;
  setParameter(std::string("PasswordInherit"), passwordInherit ? "true" : "false");
}

std::string RunInstancesRequest::getInstanceType() const {
  return instanceType_;
}

void RunInstancesRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string RunInstancesRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void RunInstancesRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

long RunInstancesRequest::getAmount() const {
  return amount_;
}

void RunInstancesRequest::setAmount(long amount) {
  amount_ = amount;
  setParameter(std::string("Amount"), std::to_string(amount));
}

std::string RunInstancesRequest::getAutoReleaseTime() const {
  return autoReleaseTime_;
}

void RunInstancesRequest::setAutoReleaseTime(const std::string &autoReleaseTime) {
  autoReleaseTime_ = autoReleaseTime;
  setParameter(std::string("AutoReleaseTime"), autoReleaseTime);
}

std::string RunInstancesRequest::getIpType() const {
  return ipType_;
}

void RunInstancesRequest::setIpType(const std::string &ipType) {
  ipType_ = ipType;
  setParameter(std::string("IpType"), ipType);
}

int RunInstancesRequest::getSpotDuration() const {
  return spotDuration_;
}

void RunInstancesRequest::setSpotDuration(int spotDuration) {
  spotDuration_ = spotDuration;
  setParameter(std::string("SpotDuration"), std::to_string(spotDuration));
}

std::vector<RunInstancesRequest::DataDisk> RunInstancesRequest::getDataDisk() const {
  return dataDisk_;
}

void RunInstancesRequest::setDataDisk(const std::vector<RunInstancesRequest::DataDisk> &dataDisk) {
  dataDisk_ = dataDisk;
  for(int dep1 = 0; dep1 != dataDisk.size(); dep1++) {
    setParameter(std::string("DataDisk") + "." + std::to_string(dep1 + 1) + ".Size", std::to_string(dataDisk[dep1].size));
    setParameter(std::string("DataDisk") + "." + std::to_string(dep1 + 1) + ".Encrypted", dataDisk[dep1].encrypted ? "true" : "false");
    setParameter(std::string("DataDisk") + "." + std::to_string(dep1 + 1) + ".Category", dataDisk[dep1].category);
    setParameter(std::string("DataDisk") + "." + std::to_string(dep1 + 1) + ".KMSKeyId", dataDisk[dep1].kMSKeyId);
  }
}

std::string RunInstancesRequest::getSchedulingStrategy() const {
  return schedulingStrategy_;
}

void RunInstancesRequest::setSchedulingStrategy(const std::string &schedulingStrategy) {
  schedulingStrategy_ = schedulingStrategy;
  setParameter(std::string("SchedulingStrategy"), schedulingStrategy);
}

std::string RunInstancesRequest::getCarrier() const {
  return carrier_;
}

void RunInstancesRequest::setCarrier(const std::string &carrier) {
  carrier_ = carrier;
  setParameter(std::string("Carrier"), carrier);
}

