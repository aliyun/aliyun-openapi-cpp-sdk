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

#include <alibabacloud/gpdb/model/ModifyDBInstanceSSLRequest.h>

using AlibabaCloud::Gpdb::Model::ModifyDBInstanceSSLRequest;

ModifyDBInstanceSSLRequest::ModifyDBInstanceSSLRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "ModifyDBInstanceSSL") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceSSLRequest::~ModifyDBInstanceSSLRequest() {}

std::string ModifyDBInstanceSSLRequest::getConnectionString() const {
  return connectionString_;
}

void ModifyDBInstanceSSLRequest::setConnectionString(const std::string &connectionString) {
  connectionString_ = connectionString;
  setParameter(std::string("ConnectionString"), connectionString);
}

std::string ModifyDBInstanceSSLRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceSSLRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstanceSSLRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceSSLRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

int ModifyDBInstanceSSLRequest::getSSLEnabled() const {
  return sSLEnabled_;
}

void ModifyDBInstanceSSLRequest::setSSLEnabled(int sSLEnabled) {
  sSLEnabled_ = sSLEnabled;
  setParameter(std::string("SSLEnabled"), std::to_string(sSLEnabled));
}

