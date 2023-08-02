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

#include <alibabacloud/gpdb/model/RebalanceDBInstanceRequest.h>

using AlibabaCloud::Gpdb::Model::RebalanceDBInstanceRequest;

RebalanceDBInstanceRequest::RebalanceDBInstanceRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "RebalanceDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

RebalanceDBInstanceRequest::~RebalanceDBInstanceRequest() {}

std::string RebalanceDBInstanceRequest::getClientToken() const {
  return clientToken_;
}

void RebalanceDBInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RebalanceDBInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RebalanceDBInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RebalanceDBInstanceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void RebalanceDBInstanceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

