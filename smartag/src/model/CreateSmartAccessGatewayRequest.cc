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

#include <alibabacloud/smartag/model/CreateSmartAccessGatewayRequest.h>

using AlibabaCloud::Smartag::Model::CreateSmartAccessGatewayRequest;

CreateSmartAccessGatewayRequest::CreateSmartAccessGatewayRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "CreateSmartAccessGateway") {
  setMethod(HttpRequest::Method::Post);
}

CreateSmartAccessGatewayRequest::~CreateSmartAccessGatewayRequest() {}

long CreateSmartAccessGatewayRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateSmartAccessGatewayRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateSmartAccessGatewayRequest::getReceiverTown() const {
  return receiverTown_;
}

void CreateSmartAccessGatewayRequest::setReceiverTown(const std::string &receiverTown) {
  receiverTown_ = receiverTown;
  setParameter(std::string("ReceiverTown"), receiverTown);
}

std::string CreateSmartAccessGatewayRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateSmartAccessGatewayRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateSmartAccessGatewayRequest::getReceiverDistrict() const {
  return receiverDistrict_;
}

void CreateSmartAccessGatewayRequest::setReceiverDistrict(const std::string &receiverDistrict) {
  receiverDistrict_ = receiverDistrict;
  setParameter(std::string("ReceiverDistrict"), receiverDistrict);
}

std::string CreateSmartAccessGatewayRequest::getBuyerMessage() const {
  return buyerMessage_;
}

void CreateSmartAccessGatewayRequest::setBuyerMessage(const std::string &buyerMessage) {
  buyerMessage_ = buyerMessage;
  setParameter(std::string("BuyerMessage"), buyerMessage);
}

std::string CreateSmartAccessGatewayRequest::getReceiverState() const {
  return receiverState_;
}

void CreateSmartAccessGatewayRequest::setReceiverState(const std::string &receiverState) {
  receiverState_ = receiverState;
  setParameter(std::string("ReceiverState"), receiverState);
}

int CreateSmartAccessGatewayRequest::getPeriod() const {
  return period_;
}

void CreateSmartAccessGatewayRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

long CreateSmartAccessGatewayRequest::getOwnerId() const {
  return ownerId_;
}

void CreateSmartAccessGatewayRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateSmartAccessGatewayRequest::getReceiverPhone() const {
  return receiverPhone_;
}

void CreateSmartAccessGatewayRequest::setReceiverPhone(const std::string &receiverPhone) {
  receiverPhone_ = receiverPhone;
  setParameter(std::string("ReceiverPhone"), receiverPhone);
}

std::string CreateSmartAccessGatewayRequest::getHaType() const {
  return haType_;
}

void CreateSmartAccessGatewayRequest::setHaType(const std::string &haType) {
  haType_ = haType;
  setParameter(std::string("HaType"), haType);
}

std::string CreateSmartAccessGatewayRequest::getName() const {
  return name_;
}

void CreateSmartAccessGatewayRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateSmartAccessGatewayRequest::getReceiverCountry() const {
  return receiverCountry_;
}

void CreateSmartAccessGatewayRequest::setReceiverCountry(const std::string &receiverCountry) {
  receiverCountry_ = receiverCountry;
  setParameter(std::string("ReceiverCountry"), receiverCountry);
}

int CreateSmartAccessGatewayRequest::getMaxBandWidth() const {
  return maxBandWidth_;
}

void CreateSmartAccessGatewayRequest::setMaxBandWidth(int maxBandWidth) {
  maxBandWidth_ = maxBandWidth;
  setParameter(std::string("MaxBandWidth"), std::to_string(maxBandWidth));
}

std::string CreateSmartAccessGatewayRequest::getDescription() const {
  return description_;
}

void CreateSmartAccessGatewayRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateSmartAccessGatewayRequest::getRegionId() const {
  return regionId_;
}

void CreateSmartAccessGatewayRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int CreateSmartAccessGatewayRequest::getUserCount() const {
  return userCount_;
}

void CreateSmartAccessGatewayRequest::setUserCount(int userCount) {
  userCount_ = userCount;
  setParameter(std::string("UserCount"), std::to_string(userCount));
}

std::string CreateSmartAccessGatewayRequest::getReceiverAddress() const {
  return receiverAddress_;
}

void CreateSmartAccessGatewayRequest::setReceiverAddress(const std::string &receiverAddress) {
  receiverAddress_ = receiverAddress;
  setParameter(std::string("ReceiverAddress"), receiverAddress);
}

std::string CreateSmartAccessGatewayRequest::getInstanceType() const {
  return instanceType_;
}

void CreateSmartAccessGatewayRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string CreateSmartAccessGatewayRequest::getHardWareSpec() const {
  return hardWareSpec_;
}

void CreateSmartAccessGatewayRequest::setHardWareSpec(const std::string &hardWareSpec) {
  hardWareSpec_ = hardWareSpec;
  setParameter(std::string("HardWareSpec"), hardWareSpec);
}

std::string CreateSmartAccessGatewayRequest::getReceiverEmail() const {
  return receiverEmail_;
}

void CreateSmartAccessGatewayRequest::setReceiverEmail(const std::string &receiverEmail) {
  receiverEmail_ = receiverEmail;
  setParameter(std::string("ReceiverEmail"), receiverEmail);
}

std::string CreateSmartAccessGatewayRequest::getReceiverCity() const {
  return receiverCity_;
}

void CreateSmartAccessGatewayRequest::setReceiverCity(const std::string &receiverCity) {
  receiverCity_ = receiverCity;
  setParameter(std::string("ReceiverCity"), receiverCity);
}

bool CreateSmartAccessGatewayRequest::getAutoPay() const {
  return autoPay_;
}

void CreateSmartAccessGatewayRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string CreateSmartAccessGatewayRequest::getCPEVersion() const {
  return cPEVersion_;
}

void CreateSmartAccessGatewayRequest::setCPEVersion(const std::string &cPEVersion) {
  cPEVersion_ = cPEVersion;
  setParameter(std::string("CPEVersion"), cPEVersion);
}

std::string CreateSmartAccessGatewayRequest::getReceiverMobile() const {
  return receiverMobile_;
}

void CreateSmartAccessGatewayRequest::setReceiverMobile(const std::string &receiverMobile) {
  receiverMobile_ = receiverMobile;
  setParameter(std::string("ReceiverMobile"), receiverMobile);
}

std::string CreateSmartAccessGatewayRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateSmartAccessGatewayRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateSmartAccessGatewayRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateSmartAccessGatewayRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateSmartAccessGatewayRequest::getReceiverName() const {
  return receiverName_;
}

void CreateSmartAccessGatewayRequest::setReceiverName(const std::string &receiverName) {
  receiverName_ = receiverName;
  setParameter(std::string("ReceiverName"), receiverName);
}

bool CreateSmartAccessGatewayRequest::getAlreadyHaveSag() const {
  return alreadyHaveSag_;
}

void CreateSmartAccessGatewayRequest::setAlreadyHaveSag(bool alreadyHaveSag) {
  alreadyHaveSag_ = alreadyHaveSag;
  setParameter(std::string("AlreadyHaveSag"), alreadyHaveSag ? "true" : "false");
}

std::string CreateSmartAccessGatewayRequest::getChargeType() const {
  return chargeType_;
}

void CreateSmartAccessGatewayRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

long CreateSmartAccessGatewayRequest::getDataPlan() const {
  return dataPlan_;
}

void CreateSmartAccessGatewayRequest::setDataPlan(long dataPlan) {
  dataPlan_ = dataPlan;
  setParameter(std::string("DataPlan"), std::to_string(dataPlan));
}

std::string CreateSmartAccessGatewayRequest::getReceiverZip() const {
  return receiverZip_;
}

void CreateSmartAccessGatewayRequest::setReceiverZip(const std::string &receiverZip) {
  receiverZip_ = receiverZip;
  setParameter(std::string("ReceiverZip"), receiverZip);
}

