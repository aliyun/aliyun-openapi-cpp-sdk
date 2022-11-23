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

#include <alibabacloud/dms-enterprise/model/DeleteInstanceRequest.h>

using AlibabaCloud::Dms_enterprise::Model::DeleteInstanceRequest;

DeleteInstanceRequest::DeleteInstanceRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "DeleteInstance") {
  setMethod(HttpRequest::Method::Post);
}

DeleteInstanceRequest::~DeleteInstanceRequest() {}

long DeleteInstanceRequest::getTid() const {
  return tid_;
}

void DeleteInstanceRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string DeleteInstanceRequest::getSid() const {
  return sid_;
}

void DeleteInstanceRequest::setSid(const std::string &sid) {
  sid_ = sid;
  setParameter(std::string("Sid"), sid);
}

std::string DeleteInstanceRequest::getHost() const {
  return host_;
}

void DeleteInstanceRequest::setHost(const std::string &host) {
  host_ = host;
  setParameter(std::string("Host"), host);
}

int DeleteInstanceRequest::getPort() const {
  return port_;
}

void DeleteInstanceRequest::setPort(int port) {
  port_ = port;
  setParameter(std::string("Port"), std::to_string(port));
}

