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

#include <alibabacloud/clickhouse/model/DescribeSynDbTablesRequest.h>

using AlibabaCloud::Clickhouse::Model::DescribeSynDbTablesRequest;

DescribeSynDbTablesRequest::DescribeSynDbTablesRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "DescribeSynDbTables") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSynDbTablesRequest::~DescribeSynDbTablesRequest() {}

long DescribeSynDbTablesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSynDbTablesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSynDbTablesRequest::getSynDb() const {
  return synDb_;
}

void DescribeSynDbTablesRequest::setSynDb(const std::string &synDb) {
  synDb_ = synDb;
  setParameter(std::string("SynDb"), synDb);
}

std::string DescribeSynDbTablesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeSynDbTablesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeSynDbTablesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSynDbTablesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSynDbTablesRequest::getDbClusterId() const {
  return dbClusterId_;
}

void DescribeSynDbTablesRequest::setDbClusterId(const std::string &dbClusterId) {
  dbClusterId_ = dbClusterId;
  setParameter(std::string("DbClusterId"), dbClusterId);
}

std::string DescribeSynDbTablesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSynDbTablesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSynDbTablesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSynDbTablesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

