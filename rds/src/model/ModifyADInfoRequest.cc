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

#include <alibabacloud/rds/model/ModifyADInfoRequest.h>

using AlibabaCloud::Rds::Model::ModifyADInfoRequest;

ModifyADInfoRequest::ModifyADInfoRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyADInfo") {
  setMethod(HttpRequest::Method::Post);
}

ModifyADInfoRequest::~ModifyADInfoRequest() {}

long ModifyADInfoRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyADInfoRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyADInfoRequest::getADAccountName() const {
  return aDAccountName_;
}

void ModifyADInfoRequest::setADAccountName(const std::string &aDAccountName) {
  aDAccountName_ = aDAccountName;
  setParameter(std::string("ADAccountName"), aDAccountName);
}

std::string ModifyADInfoRequest::getClientToken() const {
  return clientToken_;
}

void ModifyADInfoRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyADInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyADInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyADInfoRequest::getRegionId() const {
  return regionId_;
}

void ModifyADInfoRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyADInfoRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyADInfoRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyADInfoRequest::getADDNS() const {
  return aDDNS_;
}

void ModifyADInfoRequest::setADDNS(const std::string &aDDNS) {
  aDDNS_ = aDDNS;
  setParameter(std::string("ADDNS"), aDDNS);
}

std::string ModifyADInfoRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyADInfoRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyADInfoRequest::getADPassword() const {
  return aDPassword_;
}

void ModifyADInfoRequest::setADPassword(const std::string &aDPassword) {
  aDPassword_ = aDPassword;
  setParameter(std::string("ADPassword"), aDPassword);
}

long ModifyADInfoRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyADInfoRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyADInfoRequest::getADServerIpAddress() const {
  return aDServerIpAddress_;
}

void ModifyADInfoRequest::setADServerIpAddress(const std::string &aDServerIpAddress) {
  aDServerIpAddress_ = aDServerIpAddress;
  setParameter(std::string("ADServerIpAddress"), aDServerIpAddress);
}

