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

#include <alibabacloud/gpdb/model/CreateCollectionRequest.h>

using AlibabaCloud::Gpdb::Model::CreateCollectionRequest;

CreateCollectionRequest::CreateCollectionRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "CreateCollection") {
  setMethod(HttpRequest::Method::Post);
}

CreateCollectionRequest::~CreateCollectionRequest() {}

std::string CreateCollectionRequest::getMetadata() const {
  return metadata_;
}

void CreateCollectionRequest::setMetadata(const std::string &metadata) {
  metadata_ = metadata;
  setParameter(std::string("Metadata"), metadata);
}

std::string CreateCollectionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateCollectionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateCollectionRequest::getFullTextRetrievalFields() const {
  return fullTextRetrievalFields_;
}

void CreateCollectionRequest::setFullTextRetrievalFields(const std::string &fullTextRetrievalFields) {
  fullTextRetrievalFields_ = fullTextRetrievalFields;
  setParameter(std::string("FullTextRetrievalFields"), fullTextRetrievalFields);
}

std::string CreateCollectionRequest::getRegionId() const {
  return regionId_;
}

void CreateCollectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateCollectionRequest::getManagerAccount() const {
  return managerAccount_;
}

void CreateCollectionRequest::setManagerAccount(const std::string &managerAccount) {
  managerAccount_ = managerAccount;
  setParameter(std::string("ManagerAccount"), managerAccount);
}

std::string CreateCollectionRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CreateCollectionRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

long CreateCollectionRequest::getDimension() const {
  return dimension_;
}

void CreateCollectionRequest::setDimension(long dimension) {
  dimension_ = dimension;
  setParameter(std::string("Dimension"), std::to_string(dimension));
}

std::string CreateCollectionRequest::getManagerAccountPassword() const {
  return managerAccountPassword_;
}

void CreateCollectionRequest::setManagerAccountPassword(const std::string &managerAccountPassword) {
  managerAccountPassword_ = managerAccountPassword;
  setParameter(std::string("ManagerAccountPassword"), managerAccountPassword);
}

std::string CreateCollectionRequest::getCollection() const {
  return collection_;
}

void CreateCollectionRequest::setCollection(const std::string &collection) {
  collection_ = collection;
  setParameter(std::string("Collection"), collection);
}

long CreateCollectionRequest::getOwnerId() const {
  return ownerId_;
}

void CreateCollectionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateCollectionRequest::getParser() const {
  return parser_;
}

void CreateCollectionRequest::setParser(const std::string &parser) {
  parser_ = parser;
  setParameter(std::string("Parser"), parser);
}

std::string CreateCollectionRequest::get_Namespace() const {
  return _namespace_;
}

void CreateCollectionRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

