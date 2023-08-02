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

#include <alibabacloud/gpdb/model/UpsertCollectionDataRequest.h>

using AlibabaCloud::Gpdb::Model::UpsertCollectionDataRequest;

UpsertCollectionDataRequest::UpsertCollectionDataRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "UpsertCollectionData") {
  setMethod(HttpRequest::Method::Post);
}

UpsertCollectionDataRequest::~UpsertCollectionDataRequest() {}

std::string UpsertCollectionDataRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpsertCollectionDataRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpsertCollectionDataRequest::getRegionId() const {
  return regionId_;
}

void UpsertCollectionDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpsertCollectionDataRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void UpsertCollectionDataRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string UpsertCollectionDataRequest::getCollection() const {
  return collection_;
}

void UpsertCollectionDataRequest::setCollection(const std::string &collection) {
  collection_ = collection;
  setParameter(std::string("Collection"), collection);
}

long UpsertCollectionDataRequest::getOwnerId() const {
  return ownerId_;
}

void UpsertCollectionDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<UpsertCollectionDataRequest::Rows> UpsertCollectionDataRequest::getRows() const {
  return rows_;
}

void UpsertCollectionDataRequest::setRows(const std::vector<UpsertCollectionDataRequest::Rows> &rows) {
  rows_ = rows;
  for(int dep1 = 0; dep1 != rows.size(); dep1++) {
    for(auto const &iter2 : rows[dep1].metadata) {
      setParameter(std::string("Rows") + "." + std::to_string(dep1 + 1) + ".Metadata." + iter2.first, iter2.second);
    }
    for(int dep2 = 0; dep2 != rows[dep1].vector.size(); dep2++) {
      setParameter(std::string("Rows") + "." + std::to_string(dep1 + 1) + ".Vector." + std::to_string(dep2 + 1), std::to_string(rows[dep1].vector[dep2]));
    }
    setParameter(std::string("Rows") + "." + std::to_string(dep1 + 1) + ".Id", rows[dep1].id);
  }
}

std::string UpsertCollectionDataRequest::getNamespacePassword() const {
  return namespacePassword_;
}

void UpsertCollectionDataRequest::setNamespacePassword(const std::string &namespacePassword) {
  namespacePassword_ = namespacePassword;
  setParameter(std::string("NamespacePassword"), namespacePassword);
}

std::string UpsertCollectionDataRequest::get_Namespace() const {
  return _namespace_;
}

void UpsertCollectionDataRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

