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

#include <alibabacloud/privatelink/model/DisableVpcEndpointZoneConnectionRequest.h>

using AlibabaCloud::Privatelink::Model::DisableVpcEndpointZoneConnectionRequest;

DisableVpcEndpointZoneConnectionRequest::DisableVpcEndpointZoneConnectionRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "DisableVpcEndpointZoneConnection") {
  setMethod(HttpRequest::Method::Post);
}

DisableVpcEndpointZoneConnectionRequest::~DisableVpcEndpointZoneConnectionRequest() {}

std::string DisableVpcEndpointZoneConnectionRequest::getClientToken() const {
  return clientToken_;
}

void DisableVpcEndpointZoneConnectionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DisableVpcEndpointZoneConnectionRequest::getEndpointId() const {
  return endpointId_;
}

void DisableVpcEndpointZoneConnectionRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

bool DisableVpcEndpointZoneConnectionRequest::getReplacedResource() const {
  return replacedResource_;
}

void DisableVpcEndpointZoneConnectionRequest::setReplacedResource(bool replacedResource) {
  replacedResource_ = replacedResource;
  setParameter(std::string("ReplacedResource"), replacedResource ? "true" : "false");
}

std::string DisableVpcEndpointZoneConnectionRequest::getRegionId() const {
  return regionId_;
}

void DisableVpcEndpointZoneConnectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DisableVpcEndpointZoneConnectionRequest::getDryRun() const {
  return dryRun_;
}

void DisableVpcEndpointZoneConnectionRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DisableVpcEndpointZoneConnectionRequest::getZoneId() const {
  return zoneId_;
}

void DisableVpcEndpointZoneConnectionRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string DisableVpcEndpointZoneConnectionRequest::getServiceId() const {
  return serviceId_;
}

void DisableVpcEndpointZoneConnectionRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

