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

#include <alibabacloud/ddoscoo/model/CreatePortRequest.h>

using AlibabaCloud::Ddoscoo::Model::CreatePortRequest;

CreatePortRequest::CreatePortRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "CreatePort") {
  setMethod(HttpRequest::Method::Post);
}

CreatePortRequest::~CreatePortRequest() {}

std::string CreatePortRequest::getSourceIp() const {
  return sourceIp_;
}

void CreatePortRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreatePortRequest::getBackendPort() const {
  return backendPort_;
}

void CreatePortRequest::setBackendPort(const std::string &backendPort) {
  backendPort_ = backendPort;
  setParameter(std::string("BackendPort"), backendPort);
}

std::string CreatePortRequest::getFrontendProtocol() const {
  return frontendProtocol_;
}

void CreatePortRequest::setFrontendProtocol(const std::string &frontendProtocol) {
  frontendProtocol_ = frontendProtocol;
  setParameter(std::string("FrontendProtocol"), frontendProtocol);
}

std::string CreatePortRequest::getInstanceId() const {
  return instanceId_;
}

void CreatePortRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::vector<std::string> CreatePortRequest::getRealServers() const {
  return realServers_;
}

void CreatePortRequest::setRealServers(const std::vector<std::string> &realServers) {
  realServers_ = realServers;
}

std::string CreatePortRequest::getFrontendPort() const {
  return frontendPort_;
}

void CreatePortRequest::setFrontendPort(const std::string &frontendPort) {
  frontendPort_ = frontendPort;
  setParameter(std::string("FrontendPort"), frontendPort);
}

