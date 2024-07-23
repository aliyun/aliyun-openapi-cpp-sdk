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

#include <alibabacloud/rds/model/ModifyDBInstancePayTypeRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBInstancePayTypeRequest;

ModifyDBInstancePayTypeRequest::ModifyDBInstancePayTypeRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyDBInstancePayType") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstancePayTypeRequest::~ModifyDBInstancePayTypeRequest() {}

long ModifyDBInstancePayTypeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBInstancePayTypeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBInstancePayTypeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDBInstancePayTypeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDBInstancePayTypeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstancePayTypeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstancePayTypeRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBInstancePayTypeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBInstancePayTypeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstancePayTypeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstancePayTypeRequest::getBusinessInfo() const {
  return businessInfo_;
}

void ModifyDBInstancePayTypeRequest::setBusinessInfo(const std::string &businessInfo) {
  businessInfo_ = businessInfo;
  setParameter(std::string("BusinessInfo"), businessInfo);
}

std::string ModifyDBInstancePayTypeRequest::getPeriod() const {
  return period_;
}

void ModifyDBInstancePayTypeRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string ModifyDBInstancePayTypeRequest::getAgentId() const {
  return agentId_;
}

void ModifyDBInstancePayTypeRequest::setAgentId(const std::string &agentId) {
  agentId_ = agentId;
  setParameter(std::string("AgentId"), agentId);
}

bool ModifyDBInstancePayTypeRequest::getAutoPay() const {
  return autoPay_;
}

void ModifyDBInstancePayTypeRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string ModifyDBInstancePayTypeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBInstancePayTypeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBInstancePayTypeRequest::getResource() const {
  return resource_;
}

void ModifyDBInstancePayTypeRequest::setResource(const std::string &resource) {
  resource_ = resource;
  setParameter(std::string("Resource"), resource);
}

std::string ModifyDBInstancePayTypeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBInstancePayTypeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBInstancePayTypeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBInstancePayTypeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ModifyDBInstancePayTypeRequest::getUsedTime() const {
  return usedTime_;
}

void ModifyDBInstancePayTypeRequest::setUsedTime(int usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), std::to_string(usedTime));
}

std::string ModifyDBInstancePayTypeRequest::getPayType() const {
  return payType_;
}

void ModifyDBInstancePayTypeRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

