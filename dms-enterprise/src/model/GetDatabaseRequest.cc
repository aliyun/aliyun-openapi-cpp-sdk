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

#include <alibabacloud/dms-enterprise/model/GetDatabaseRequest.h>

using AlibabaCloud::Dms_enterprise::Model::GetDatabaseRequest;

GetDatabaseRequest::GetDatabaseRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "GetDatabase") {
  setMethod(HttpRequest::Method::Post);
}

GetDatabaseRequest::~GetDatabaseRequest() {}

long GetDatabaseRequest::getTid() const {
  return tid_;
}

void GetDatabaseRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string GetDatabaseRequest::getSid() const {
  return sid_;
}

void GetDatabaseRequest::setSid(const std::string &sid) {
  sid_ = sid;
  setParameter(std::string("Sid"), sid);
}

std::string GetDatabaseRequest::getHost() const {
  return host_;
}

void GetDatabaseRequest::setHost(const std::string &host) {
  host_ = host;
  setParameter(std::string("Host"), host);
}

std::string GetDatabaseRequest::getSchemaName() const {
  return schemaName_;
}

void GetDatabaseRequest::setSchemaName(const std::string &schemaName) {
  schemaName_ = schemaName;
  setParameter(std::string("SchemaName"), schemaName);
}

int GetDatabaseRequest::getPort() const {
  return port_;
}

void GetDatabaseRequest::setPort(int port) {
  port_ = port;
  setParameter(std::string("Port"), std::to_string(port));
}

