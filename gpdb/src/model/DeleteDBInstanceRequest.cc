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

#include <alibabacloud/gpdb/model/DeleteDBInstanceRequest.h>

using AlibabaCloud::Gpdb::Model::DeleteDBInstanceRequest;

DeleteDBInstanceRequest::DeleteDBInstanceRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DeleteDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDBInstanceRequest::~DeleteDBInstanceRequest() {}

std::string DeleteDBInstanceRequest::getClientToken() const {
  return clientToken_;
}

void DeleteDBInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteDBInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteDBInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteDBInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DeleteDBInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DeleteDBInstanceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DeleteDBInstanceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

long DeleteDBInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteDBInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

