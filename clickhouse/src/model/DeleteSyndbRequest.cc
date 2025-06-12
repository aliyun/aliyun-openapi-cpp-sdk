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

#include <alibabacloud/clickhouse/model/DeleteSyndbRequest.h>

using AlibabaCloud::Clickhouse::Model::DeleteSyndbRequest;

DeleteSyndbRequest::DeleteSyndbRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "DeleteSyndb") {
  setMethod(HttpRequest::Method::Post);
}

DeleteSyndbRequest::~DeleteSyndbRequest() {}

long DeleteSyndbRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteSyndbRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteSyndbRequest::getSynDb() const {
  return synDb_;
}

void DeleteSyndbRequest::setSynDb(const std::string &synDb) {
  synDb_ = synDb;
  setParameter(std::string("SynDb"), synDb);
}

std::string DeleteSyndbRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteSyndbRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteSyndbRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteSyndbRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteSyndbRequest::getDbClusterId() const {
  return dbClusterId_;
}

void DeleteSyndbRequest::setDbClusterId(const std::string &dbClusterId) {
  dbClusterId_ = dbClusterId;
  setParameter(std::string("DbClusterId"), dbClusterId);
}

std::string DeleteSyndbRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteSyndbRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteSyndbRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteSyndbRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

