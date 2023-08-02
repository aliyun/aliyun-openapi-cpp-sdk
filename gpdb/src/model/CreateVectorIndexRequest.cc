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

#include <alibabacloud/gpdb/model/CreateVectorIndexRequest.h>

using AlibabaCloud::Gpdb::Model::CreateVectorIndexRequest;

CreateVectorIndexRequest::CreateVectorIndexRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "CreateVectorIndex") {
  setMethod(HttpRequest::Method::Post);
}

CreateVectorIndexRequest::~CreateVectorIndexRequest() {}

std::string CreateVectorIndexRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateVectorIndexRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateVectorIndexRequest::getRegionId() const {
  return regionId_;
}

void CreateVectorIndexRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateVectorIndexRequest::getManagerAccount() const {
  return managerAccount_;
}

void CreateVectorIndexRequest::setManagerAccount(const std::string &managerAccount) {
  managerAccount_ = managerAccount;
  setParameter(std::string("ManagerAccount"), managerAccount);
}

std::string CreateVectorIndexRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CreateVectorIndexRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

int CreateVectorIndexRequest::getDimension() const {
  return dimension_;
}

void CreateVectorIndexRequest::setDimension(int dimension) {
  dimension_ = dimension;
  setParameter(std::string("Dimension"), std::to_string(dimension));
}

std::string CreateVectorIndexRequest::getManagerAccountPassword() const {
  return managerAccountPassword_;
}

void CreateVectorIndexRequest::setManagerAccountPassword(const std::string &managerAccountPassword) {
  managerAccountPassword_ = managerAccountPassword;
  setParameter(std::string("ManagerAccountPassword"), managerAccountPassword);
}

std::string CreateVectorIndexRequest::getCollection() const {
  return collection_;
}

void CreateVectorIndexRequest::setCollection(const std::string &collection) {
  collection_ = collection;
  setParameter(std::string("Collection"), collection);
}

long CreateVectorIndexRequest::getOwnerId() const {
  return ownerId_;
}

void CreateVectorIndexRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateVectorIndexRequest::get_Namespace() const {
  return _namespace_;
}

void CreateVectorIndexRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string CreateVectorIndexRequest::getMetrics() const {
  return metrics_;
}

void CreateVectorIndexRequest::setMetrics(const std::string &metrics) {
  metrics_ = metrics;
  setParameter(std::string("Metrics"), metrics);
}

