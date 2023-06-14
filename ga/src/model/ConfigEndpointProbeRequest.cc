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

#include <alibabacloud/ga/model/ConfigEndpointProbeRequest.h>

using AlibabaCloud::Ga::Model::ConfigEndpointProbeRequest;

ConfigEndpointProbeRequest::ConfigEndpointProbeRequest()
    : RpcServiceRequest("ga", "2019-11-20", "ConfigEndpointProbe") {
  setMethod(HttpRequest::Method::Post);
}

ConfigEndpointProbeRequest::~ConfigEndpointProbeRequest() {}

std::string ConfigEndpointProbeRequest::getClientToken() const {
  return clientToken_;
}

void ConfigEndpointProbeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ConfigEndpointProbeRequest::getEndpoint() const {
  return endpoint_;
}

void ConfigEndpointProbeRequest::setEndpoint(const std::string &endpoint) {
  endpoint_ = endpoint;
  setParameter(std::string("Endpoint"), endpoint);
}

std::string ConfigEndpointProbeRequest::getRegionId() const {
  return regionId_;
}

void ConfigEndpointProbeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ConfigEndpointProbeRequest::getEndpointType() const {
  return endpointType_;
}

void ConfigEndpointProbeRequest::setEndpointType(const std::string &endpointType) {
  endpointType_ = endpointType;
  setParameter(std::string("EndpointType"), endpointType);
}

std::string ConfigEndpointProbeRequest::getEnable() const {
  return enable_;
}

void ConfigEndpointProbeRequest::setEnable(const std::string &enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), enable);
}

std::string ConfigEndpointProbeRequest::getProbeProtocol() const {
  return probeProtocol_;
}

void ConfigEndpointProbeRequest::setProbeProtocol(const std::string &probeProtocol) {
  probeProtocol_ = probeProtocol;
  setParameter(std::string("ProbeProtocol"), probeProtocol);
}

std::string ConfigEndpointProbeRequest::getProbePort() const {
  return probePort_;
}

void ConfigEndpointProbeRequest::setProbePort(const std::string &probePort) {
  probePort_ = probePort;
  setParameter(std::string("ProbePort"), probePort);
}

std::string ConfigEndpointProbeRequest::getEndpointGroupId() const {
  return endpointGroupId_;
}

void ConfigEndpointProbeRequest::setEndpointGroupId(const std::string &endpointGroupId) {
  endpointGroupId_ = endpointGroupId;
  setParameter(std::string("EndpointGroupId"), endpointGroupId);
}

