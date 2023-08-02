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

#include <alibabacloud/gpdb/model/CreateNamespaceRequest.h>

using AlibabaCloud::Gpdb::Model::CreateNamespaceRequest;

CreateNamespaceRequest::CreateNamespaceRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "CreateNamespace") {
  setMethod(HttpRequest::Method::Post);
}

CreateNamespaceRequest::~CreateNamespaceRequest() {}

std::string CreateNamespaceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateNamespaceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateNamespaceRequest::getRegionId() const {
  return regionId_;
}

void CreateNamespaceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateNamespaceRequest::getManagerAccount() const {
  return managerAccount_;
}

void CreateNamespaceRequest::setManagerAccount(const std::string &managerAccount) {
  managerAccount_ = managerAccount;
  setParameter(std::string("ManagerAccount"), managerAccount);
}

std::string CreateNamespaceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CreateNamespaceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string CreateNamespaceRequest::getManagerAccountPassword() const {
  return managerAccountPassword_;
}

void CreateNamespaceRequest::setManagerAccountPassword(const std::string &managerAccountPassword) {
  managerAccountPassword_ = managerAccountPassword;
  setParameter(std::string("ManagerAccountPassword"), managerAccountPassword);
}

long CreateNamespaceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateNamespaceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateNamespaceRequest::getNamespacePassword() const {
  return namespacePassword_;
}

void CreateNamespaceRequest::setNamespacePassword(const std::string &namespacePassword) {
  namespacePassword_ = namespacePassword;
  setParameter(std::string("NamespacePassword"), namespacePassword);
}

std::string CreateNamespaceRequest::get_Namespace() const {
  return _namespace_;
}

void CreateNamespaceRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

