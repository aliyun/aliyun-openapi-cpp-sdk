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

#include <alibabacloud/gpdb/model/DeleteCollectionRequest.h>

using AlibabaCloud::Gpdb::Model::DeleteCollectionRequest;

DeleteCollectionRequest::DeleteCollectionRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DeleteCollection") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCollectionRequest::~DeleteCollectionRequest() {}

std::string DeleteCollectionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteCollectionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteCollectionRequest::getRegionId() const {
  return regionId_;
}

void DeleteCollectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteCollectionRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DeleteCollectionRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DeleteCollectionRequest::getCollection() const {
  return collection_;
}

void DeleteCollectionRequest::setCollection(const std::string &collection) {
  collection_ = collection;
  setParameter(std::string("Collection"), collection);
}

long DeleteCollectionRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteCollectionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteCollectionRequest::getNamespacePassword() const {
  return namespacePassword_;
}

void DeleteCollectionRequest::setNamespacePassword(const std::string &namespacePassword) {
  namespacePassword_ = namespacePassword;
  setParameter(std::string("NamespacePassword"), namespacePassword);
}

std::string DeleteCollectionRequest::get_Namespace() const {
  return _namespace_;
}

void DeleteCollectionRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

