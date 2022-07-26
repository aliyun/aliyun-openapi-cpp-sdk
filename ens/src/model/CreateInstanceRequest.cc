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

#include <alibabacloud/ens/model/CreateInstanceRequest.h>

using AlibabaCloud::Ens::Model::CreateInstanceRequest;

CreateInstanceRequest::CreateInstanceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateInstanceRequest::~CreateInstanceRequest() {}

bool CreateInstanceRequest::getUniqueSuffix() const {
  return uniqueSuffix_;
}

void CreateInstanceRequest::setUniqueSuffix(bool uniqueSuffix) {
  uniqueSuffix_ = uniqueSuffix;
  setParameter(std::string("UniqueSuffix"), uniqueSuffix ? "true" : "false");
}

std::string CreateInstanceRequest::getKeyPairName() const {
  return keyPairName_;
}

void CreateInstanceRequest::setKeyPairName(const std::string &keyPairName) {
  keyPairName_ = keyPairName;
  setParameter(std::string("KeyPairName"), keyPairName);
}

std::string CreateInstanceRequest::getPassword() const {
  return password_;
}

void CreateInstanceRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string CreateInstanceRequest::getHostName() const {
  return hostName_;
}

void CreateInstanceRequest::setHostName(const std::string &hostName) {
  hostName_ = hostName;
  setParameter(std::string("HostName"), hostName);
}

std::string CreateInstanceRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void CreateInstanceRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string CreateInstanceRequest::getAutoRenewPeriod() const {
  return autoRenewPeriod_;
}

void CreateInstanceRequest::setAutoRenewPeriod(const std::string &autoRenewPeriod) {
  autoRenewPeriod_ = autoRenewPeriod;
  setParameter(std::string("AutoRenewPeriod"), autoRenewPeriod);
}

std::string CreateInstanceRequest::getPeriod() const {
  return period_;
}

void CreateInstanceRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

bool CreateInstanceRequest::getPublicIpIdentification() const {
  return publicIpIdentification_;
}

void CreateInstanceRequest::setPublicIpIdentification(bool publicIpIdentification) {
  publicIpIdentification_ = publicIpIdentification;
  setParameter(std::string("PublicIpIdentification"), publicIpIdentification ? "true" : "false");
}

long CreateInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateInstanceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateInstanceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateInstanceRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void CreateInstanceRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

std::string CreateInstanceRequest::getInstanceName() const {
  return instanceName_;
}

void CreateInstanceRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string CreateInstanceRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateInstanceRequest::setAutoRenew(const std::string &autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew);
}

std::string CreateInstanceRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void CreateInstanceRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

std::string CreateInstanceRequest::getImageId() const {
  return imageId_;
}

void CreateInstanceRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string CreateInstanceRequest::getUserData() const {
  return userData_;
}

void CreateInstanceRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

bool CreateInstanceRequest::getPasswordInherit() const {
  return passwordInherit_;
}

void CreateInstanceRequest::setPasswordInherit(bool passwordInherit) {
  passwordInherit_ = passwordInherit;
  setParameter(std::string("PasswordInherit"), passwordInherit ? "true" : "false");
}

std::string CreateInstanceRequest::getInstanceType() const {
  return instanceType_;
}

void CreateInstanceRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string CreateInstanceRequest::getDataDisk1Size() const {
  return dataDisk1Size_;
}

void CreateInstanceRequest::setDataDisk1Size(const std::string &dataDisk1Size) {
  dataDisk1Size_ = dataDisk1Size;
  setParameter(std::string("DataDisk.1.Size"), dataDisk1Size);
}

std::string CreateInstanceRequest::getQuantity() const {
  return quantity_;
}

void CreateInstanceRequest::setQuantity(const std::string &quantity) {
  quantity_ = quantity;
  setParameter(std::string("Quantity"), quantity);
}

std::string CreateInstanceRequest::getIpType() const {
  return ipType_;
}

void CreateInstanceRequest::setIpType(const std::string &ipType) {
  ipType_ = ipType;
  setParameter(std::string("IpType"), ipType);
}

std::string CreateInstanceRequest::getSystemDiskSize() const {
  return systemDiskSize_;
}

void CreateInstanceRequest::setSystemDiskSize(const std::string &systemDiskSize) {
  systemDiskSize_ = systemDiskSize;
  setParameter(std::string("SystemDisk.Size"), systemDiskSize);
}

std::string CreateInstanceRequest::getPaymentType() const {
  return paymentType_;
}

void CreateInstanceRequest::setPaymentType(const std::string &paymentType) {
  paymentType_ = paymentType;
  setParameter(std::string("PaymentType"), paymentType);
}

