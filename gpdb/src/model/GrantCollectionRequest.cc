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

#include <alibabacloud/gpdb/model/GrantCollectionRequest.h>

using AlibabaCloud::Gpdb::Model::GrantCollectionRequest;

GrantCollectionRequest::GrantCollectionRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "GrantCollection") {
  setMethod(HttpRequest::Method::Post);
}

GrantCollectionRequest::~GrantCollectionRequest() {}

std::string GrantCollectionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GrantCollectionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GrantCollectionRequest::getGrantType() const {
  return grantType_;
}

void GrantCollectionRequest::setGrantType(const std::string &grantType) {
  grantType_ = grantType;
  setParameter(std::string("GrantType"), grantType);
}

std::string GrantCollectionRequest::getRegionId() const {
  return regionId_;
}

void GrantCollectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GrantCollectionRequest::getManagerAccount() const {
  return managerAccount_;
}

void GrantCollectionRequest::setManagerAccount(const std::string &managerAccount) {
  managerAccount_ = managerAccount;
  setParameter(std::string("ManagerAccount"), managerAccount);
}

std::string GrantCollectionRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void GrantCollectionRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string GrantCollectionRequest::getManagerAccountPassword() const {
  return managerAccountPassword_;
}

void GrantCollectionRequest::setManagerAccountPassword(const std::string &managerAccountPassword) {
  managerAccountPassword_ = managerAccountPassword;
  setParameter(std::string("ManagerAccountPassword"), managerAccountPassword);
}

std::string GrantCollectionRequest::getCollection() const {
  return collection_;
}

void GrantCollectionRequest::setCollection(const std::string &collection) {
  collection_ = collection;
  setParameter(std::string("Collection"), collection);
}

long GrantCollectionRequest::getOwnerId() const {
  return ownerId_;
}

void GrantCollectionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GrantCollectionRequest::getGrantToNamespace() const {
  return grantToNamespace_;
}

void GrantCollectionRequest::setGrantToNamespace(const std::string &grantToNamespace) {
  grantToNamespace_ = grantToNamespace;
  setParameter(std::string("GrantToNamespace"), grantToNamespace);
}

std::string GrantCollectionRequest::get_Namespace() const {
  return _namespace_;
}

void GrantCollectionRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

