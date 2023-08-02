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

#include <alibabacloud/gpdb/model/DeleteCollectionDataRequest.h>

using AlibabaCloud::Gpdb::Model::DeleteCollectionDataRequest;

DeleteCollectionDataRequest::DeleteCollectionDataRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DeleteCollectionData") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCollectionDataRequest::~DeleteCollectionDataRequest() {}

std::string DeleteCollectionDataRequest::getCollectionDataFilter() const {
  return collectionDataFilter_;
}

void DeleteCollectionDataRequest::setCollectionDataFilter(const std::string &collectionDataFilter) {
  collectionDataFilter_ = collectionDataFilter;
  setParameter(std::string("CollectionDataFilter"), collectionDataFilter);
}

std::string DeleteCollectionDataRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteCollectionDataRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteCollectionDataRequest::getRegionId() const {
  return regionId_;
}

void DeleteCollectionDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteCollectionDataRequest::getCollectionData() const {
  return collectionData_;
}

void DeleteCollectionDataRequest::setCollectionData(const std::string &collectionData) {
  collectionData_ = collectionData;
  setParameter(std::string("CollectionData"), collectionData);
}

std::string DeleteCollectionDataRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DeleteCollectionDataRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DeleteCollectionDataRequest::getCollection() const {
  return collection_;
}

void DeleteCollectionDataRequest::setCollection(const std::string &collection) {
  collection_ = collection;
  setParameter(std::string("Collection"), collection);
}

long DeleteCollectionDataRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteCollectionDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteCollectionDataRequest::getNamespacePassword() const {
  return namespacePassword_;
}

void DeleteCollectionDataRequest::setNamespacePassword(const std::string &namespacePassword) {
  namespacePassword_ = namespacePassword;
  setParameter(std::string("NamespacePassword"), namespacePassword);
}

std::string DeleteCollectionDataRequest::get_Namespace() const {
  return _namespace_;
}

void DeleteCollectionDataRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

