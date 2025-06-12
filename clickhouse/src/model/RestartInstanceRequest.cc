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

#include <alibabacloud/clickhouse/model/RestartInstanceRequest.h>

using AlibabaCloud::Clickhouse::Model::RestartInstanceRequest;

RestartInstanceRequest::RestartInstanceRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "RestartInstance") {
  setMethod(HttpRequest::Method::Post);
}

RestartInstanceRequest::~RestartInstanceRequest() {}

long RestartInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RestartInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int RestartInstanceRequest::getPageNumber() const {
  return pageNumber_;
}

void RestartInstanceRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string RestartInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RestartInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RestartInstanceRequest::getRegionId() const {
  return regionId_;
}

void RestartInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int RestartInstanceRequest::getPageSize() const {
  return pageSize_;
}

void RestartInstanceRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string RestartInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RestartInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RestartInstanceRequest::getDBClusterId() const {
  return dBClusterId_;
}

void RestartInstanceRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string RestartInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RestartInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string RestartInstanceRequest::getRestartTime() const {
  return restartTime_;
}

void RestartInstanceRequest::setRestartTime(const std::string &restartTime) {
  restartTime_ = restartTime;
  setParameter(std::string("RestartTime"), restartTime);
}

long RestartInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void RestartInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

