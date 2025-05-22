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

#include <alibabacloud/rds/model/ModifyPGHbaConfigRequest.h>

using AlibabaCloud::Rds::Model::ModifyPGHbaConfigRequest;

ModifyPGHbaConfigRequest::ModifyPGHbaConfigRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyPGHbaConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyPGHbaConfigRequest::~ModifyPGHbaConfigRequest() {}

long ModifyPGHbaConfigRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyPGHbaConfigRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyPGHbaConfigRequest::getClientToken() const {
  return clientToken_;
}

void ModifyPGHbaConfigRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyPGHbaConfigRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyPGHbaConfigRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyPGHbaConfigRequest::getOpsType() const {
  return opsType_;
}

void ModifyPGHbaConfigRequest::setOpsType(const std::string &opsType) {
  opsType_ = opsType;
  setParameter(std::string("OpsType"), opsType);
}

std::string ModifyPGHbaConfigRequest::getRegionId() const {
  return regionId_;
}

void ModifyPGHbaConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyPGHbaConfigRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyPGHbaConfigRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyPGHbaConfigRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyPGHbaConfigRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyPGHbaConfigRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyPGHbaConfigRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyPGHbaConfigRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyPGHbaConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<ModifyPGHbaConfigRequest::HbaItem> ModifyPGHbaConfigRequest::getHbaItem() const {
  return hbaItem_;
}

void ModifyPGHbaConfigRequest::setHbaItem(const std::vector<ModifyPGHbaConfigRequest::HbaItem> &hbaItem) {
  hbaItem_ = hbaItem;
  for(int dep1 = 0; dep1 != hbaItem.size(); dep1++) {
  auto hbaItemObj = hbaItem.at(dep1);
  std::string hbaItemObjStr = std::string("HbaItem") + "." + std::to_string(dep1 + 1);
    setParameter(hbaItemObjStr + ".Database", hbaItemObj.database);
    setParameter(hbaItemObjStr + ".Address", hbaItemObj.address);
    setParameter(hbaItemObjStr + ".Method", hbaItemObj.method);
    setParameter(hbaItemObjStr + ".Type", hbaItemObj.type);
    setParameter(hbaItemObjStr + ".User", hbaItemObj.user);
    setParameter(hbaItemObjStr + ".Mask", hbaItemObj.mask);
    setParameter(hbaItemObjStr + ".Option", hbaItemObj.option);
    setParameter(hbaItemObjStr + ".PriorityId", std::to_string(hbaItemObj.priorityId));
  }
}

