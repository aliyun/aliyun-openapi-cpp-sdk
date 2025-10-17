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

#include <alibabacloud/polardb/model/DisableDBClusterOrcaRequest.h>

using AlibabaCloud::Polardb::Model::DisableDBClusterOrcaRequest;

DisableDBClusterOrcaRequest::DisableDBClusterOrcaRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DisableDBClusterOrca") {
  setMethod(HttpRequest::Method::Post);
}

DisableDBClusterOrcaRequest::~DisableDBClusterOrcaRequest() {}

long DisableDBClusterOrcaRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DisableDBClusterOrcaRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DisableDBClusterOrcaRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DisableDBClusterOrcaRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DisableDBClusterOrcaRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DisableDBClusterOrcaRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DisableDBClusterOrcaRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DisableDBClusterOrcaRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DisableDBClusterOrcaRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DisableDBClusterOrcaRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DisableDBClusterOrcaRequest::getOwnerId() const {
  return ownerId_;
}

void DisableDBClusterOrcaRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DisableDBClusterOrcaRequest::getCleanData() const {
  return cleanData_;
}

void DisableDBClusterOrcaRequest::setCleanData(const std::string &cleanData) {
  cleanData_ = cleanData;
  setParameter(std::string("CleanData"), cleanData);
}

