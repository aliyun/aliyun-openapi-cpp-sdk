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

#include <alibabacloud/privatelink/model/EnableVpcEndpointConnectionRequest.h>

using AlibabaCloud::Privatelink::Model::EnableVpcEndpointConnectionRequest;

EnableVpcEndpointConnectionRequest::EnableVpcEndpointConnectionRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "EnableVpcEndpointConnection") {
  setMethod(HttpRequest::Method::Post);
}

EnableVpcEndpointConnectionRequest::~EnableVpcEndpointConnectionRequest() {}

std::string EnableVpcEndpointConnectionRequest::getClientToken() const {
  return clientToken_;
}

void EnableVpcEndpointConnectionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string EnableVpcEndpointConnectionRequest::getEndpointId() const {
  return endpointId_;
}

void EnableVpcEndpointConnectionRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string EnableVpcEndpointConnectionRequest::getRegionId() const {
  return regionId_;
}

void EnableVpcEndpointConnectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool EnableVpcEndpointConnectionRequest::getDryRun() const {
  return dryRun_;
}

void EnableVpcEndpointConnectionRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

int EnableVpcEndpointConnectionRequest::getBandwidth() const {
  return bandwidth_;
}

void EnableVpcEndpointConnectionRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string EnableVpcEndpointConnectionRequest::getServiceId() const {
  return serviceId_;
}

void EnableVpcEndpointConnectionRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

