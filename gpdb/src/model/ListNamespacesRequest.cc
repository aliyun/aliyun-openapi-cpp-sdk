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

#include <alibabacloud/gpdb/model/ListNamespacesRequest.h>

using AlibabaCloud::Gpdb::Model::ListNamespacesRequest;

ListNamespacesRequest::ListNamespacesRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "ListNamespaces") {
  setMethod(HttpRequest::Method::Post);
}

ListNamespacesRequest::~ListNamespacesRequest() {}

std::string ListNamespacesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListNamespacesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListNamespacesRequest::getRegionId() const {
  return regionId_;
}

void ListNamespacesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListNamespacesRequest::getManagerAccount() const {
  return managerAccount_;
}

void ListNamespacesRequest::setManagerAccount(const std::string &managerAccount) {
  managerAccount_ = managerAccount;
  setParameter(std::string("ManagerAccount"), managerAccount);
}

std::string ListNamespacesRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ListNamespacesRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ListNamespacesRequest::getManagerAccountPassword() const {
  return managerAccountPassword_;
}

void ListNamespacesRequest::setManagerAccountPassword(const std::string &managerAccountPassword) {
  managerAccountPassword_ = managerAccountPassword;
  setParameter(std::string("ManagerAccountPassword"), managerAccountPassword);
}

long ListNamespacesRequest::getOwnerId() const {
  return ownerId_;
}

void ListNamespacesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

