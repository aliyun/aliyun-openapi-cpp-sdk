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

#include <alibabacloud/gpdb/model/DeleteVectorIndexRequest.h>

using AlibabaCloud::Gpdb::Model::DeleteVectorIndexRequest;

DeleteVectorIndexRequest::DeleteVectorIndexRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DeleteVectorIndex") {
  setMethod(HttpRequest::Method::Post);
}

DeleteVectorIndexRequest::~DeleteVectorIndexRequest() {}

std::string DeleteVectorIndexRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteVectorIndexRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteVectorIndexRequest::getRegionId() const {
  return regionId_;
}

void DeleteVectorIndexRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteVectorIndexRequest::getManagerAccount() const {
  return managerAccount_;
}

void DeleteVectorIndexRequest::setManagerAccount(const std::string &managerAccount) {
  managerAccount_ = managerAccount;
  setParameter(std::string("ManagerAccount"), managerAccount);
}

std::string DeleteVectorIndexRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DeleteVectorIndexRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DeleteVectorIndexRequest::getManagerAccountPassword() const {
  return managerAccountPassword_;
}

void DeleteVectorIndexRequest::setManagerAccountPassword(const std::string &managerAccountPassword) {
  managerAccountPassword_ = managerAccountPassword;
  setParameter(std::string("ManagerAccountPassword"), managerAccountPassword);
}

std::string DeleteVectorIndexRequest::getCollection() const {
  return collection_;
}

void DeleteVectorIndexRequest::setCollection(const std::string &collection) {
  collection_ = collection;
  setParameter(std::string("Collection"), collection);
}

long DeleteVectorIndexRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteVectorIndexRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteVectorIndexRequest::get_Namespace() const {
  return _namespace_;
}

void DeleteVectorIndexRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

