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

#include <alibabacloud/rds/model/DeleteADSettingRequest.h>

using AlibabaCloud::Rds::Model::DeleteADSettingRequest;

DeleteADSettingRequest::DeleteADSettingRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DeleteADSetting") {
  setMethod(HttpRequest::Method::Post);
}

DeleteADSettingRequest::~DeleteADSettingRequest() {}

long DeleteADSettingRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteADSettingRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteADSettingRequest::getClientToken() const {
  return clientToken_;
}

void DeleteADSettingRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteADSettingRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteADSettingRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteADSettingRequest::getRegionId() const {
  return regionId_;
}

void DeleteADSettingRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteADSettingRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DeleteADSettingRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DeleteADSettingRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteADSettingRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DeleteADSettingRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteADSettingRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

