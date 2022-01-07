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

#include <alibabacloud/privatelink/model/EnableVpcEndpointZoneConnectionRequest.h>

using AlibabaCloud::Privatelink::Model::EnableVpcEndpointZoneConnectionRequest;

EnableVpcEndpointZoneConnectionRequest::EnableVpcEndpointZoneConnectionRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "EnableVpcEndpointZoneConnection") {
  setMethod(HttpRequest::Method::Post);
}

EnableVpcEndpointZoneConnectionRequest::~EnableVpcEndpointZoneConnectionRequest() {}

std::string EnableVpcEndpointZoneConnectionRequest::getClientToken() const {
  return clientToken_;
}

void EnableVpcEndpointZoneConnectionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string EnableVpcEndpointZoneConnectionRequest::getEndpointId() const {
  return endpointId_;
}

void EnableVpcEndpointZoneConnectionRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string EnableVpcEndpointZoneConnectionRequest::getRegionId() const {
  return regionId_;
}

void EnableVpcEndpointZoneConnectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool EnableVpcEndpointZoneConnectionRequest::getDryRun() const {
  return dryRun_;
}

void EnableVpcEndpointZoneConnectionRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string EnableVpcEndpointZoneConnectionRequest::getZoneId() const {
  return zoneId_;
}

void EnableVpcEndpointZoneConnectionRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string EnableVpcEndpointZoneConnectionRequest::getServiceId() const {
  return serviceId_;
}

void EnableVpcEndpointZoneConnectionRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

