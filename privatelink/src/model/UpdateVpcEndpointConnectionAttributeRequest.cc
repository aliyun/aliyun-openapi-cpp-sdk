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

#include <alibabacloud/privatelink/model/UpdateVpcEndpointConnectionAttributeRequest.h>

using AlibabaCloud::Privatelink::Model::UpdateVpcEndpointConnectionAttributeRequest;

UpdateVpcEndpointConnectionAttributeRequest::UpdateVpcEndpointConnectionAttributeRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "UpdateVpcEndpointConnectionAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateVpcEndpointConnectionAttributeRequest::~UpdateVpcEndpointConnectionAttributeRequest() {}

std::string UpdateVpcEndpointConnectionAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateVpcEndpointConnectionAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateVpcEndpointConnectionAttributeRequest::getEndpointId() const {
  return endpointId_;
}

void UpdateVpcEndpointConnectionAttributeRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string UpdateVpcEndpointConnectionAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateVpcEndpointConnectionAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool UpdateVpcEndpointConnectionAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateVpcEndpointConnectionAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

int UpdateVpcEndpointConnectionAttributeRequest::getBandwidth() const {
  return bandwidth_;
}

void UpdateVpcEndpointConnectionAttributeRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string UpdateVpcEndpointConnectionAttributeRequest::getServiceId() const {
  return serviceId_;
}

void UpdateVpcEndpointConnectionAttributeRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

