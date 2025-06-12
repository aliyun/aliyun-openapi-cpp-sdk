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

#include <alibabacloud/clickhouse/model/KillProcessRequest.h>

using AlibabaCloud::Clickhouse::Model::KillProcessRequest;

KillProcessRequest::KillProcessRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "KillProcess") {
  setMethod(HttpRequest::Method::Post);
}

KillProcessRequest::~KillProcessRequest() {}

long KillProcessRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void KillProcessRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string KillProcessRequest::getInitialQueryId() const {
  return initialQueryId_;
}

void KillProcessRequest::setInitialQueryId(const std::string &initialQueryId) {
  initialQueryId_ = initialQueryId;
  setParameter(std::string("InitialQueryId"), initialQueryId);
}

std::string KillProcessRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void KillProcessRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string KillProcessRequest::getRegionId() const {
  return regionId_;
}

void KillProcessRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string KillProcessRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void KillProcessRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string KillProcessRequest::getDBClusterId() const {
  return dBClusterId_;
}

void KillProcessRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string KillProcessRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void KillProcessRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long KillProcessRequest::getOwnerId() const {
  return ownerId_;
}

void KillProcessRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

