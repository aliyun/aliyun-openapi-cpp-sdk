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

#include <alibabacloud/ddoscoo/model/DeletePortRequest.h>

using AlibabaCloud::Ddoscoo::Model::DeletePortRequest;

DeletePortRequest::DeletePortRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DeletePort") {
  setMethod(HttpRequest::Method::Post);
}

DeletePortRequest::~DeletePortRequest() {}

std::string DeletePortRequest::getSourceIp() const {
  return sourceIp_;
}

void DeletePortRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DeletePortRequest::getBackendPort() const {
  return backendPort_;
}

void DeletePortRequest::setBackendPort(const std::string &backendPort) {
  backendPort_ = backendPort;
  setParameter(std::string("BackendPort"), backendPort);
}

std::string DeletePortRequest::getFrontendProtocol() const {
  return frontendProtocol_;
}

void DeletePortRequest::setFrontendProtocol(const std::string &frontendProtocol) {
  frontendProtocol_ = frontendProtocol;
  setParameter(std::string("FrontendProtocol"), frontendProtocol);
}

std::string DeletePortRequest::getInstanceId() const {
  return instanceId_;
}

void DeletePortRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::vector<std::string> DeletePortRequest::getRealServers() const {
  return realServers_;
}

void DeletePortRequest::setRealServers(const std::vector<std::string> &realServers) {
  realServers_ = realServers;
}

std::string DeletePortRequest::getFrontendPort() const {
  return frontendPort_;
}

void DeletePortRequest::setFrontendPort(const std::string &frontendPort) {
  frontendPort_ = frontendPort;
  setParameter(std::string("FrontendPort"), frontendPort);
}

