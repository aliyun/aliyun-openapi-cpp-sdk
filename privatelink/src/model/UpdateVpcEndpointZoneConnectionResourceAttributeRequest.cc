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

#include <alibabacloud/privatelink/model/UpdateVpcEndpointZoneConnectionResourceAttributeRequest.h>

using AlibabaCloud::Privatelink::Model::UpdateVpcEndpointZoneConnectionResourceAttributeRequest;

UpdateVpcEndpointZoneConnectionResourceAttributeRequest::UpdateVpcEndpointZoneConnectionResourceAttributeRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "UpdateVpcEndpointZoneConnectionResourceAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateVpcEndpointZoneConnectionResourceAttributeRequest::~UpdateVpcEndpointZoneConnectionResourceAttributeRequest() {}

std::string UpdateVpcEndpointZoneConnectionResourceAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateVpcEndpointZoneConnectionResourceAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateVpcEndpointZoneConnectionResourceAttributeRequest::getEndpointId() const {
  return endpointId_;
}

void UpdateVpcEndpointZoneConnectionResourceAttributeRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string UpdateVpcEndpointZoneConnectionResourceAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateVpcEndpointZoneConnectionResourceAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateVpcEndpointZoneConnectionResourceAttributeRequest::getResourceId() const {
  return resourceId_;
}

void UpdateVpcEndpointZoneConnectionResourceAttributeRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

bool UpdateVpcEndpointZoneConnectionResourceAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateVpcEndpointZoneConnectionResourceAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateVpcEndpointZoneConnectionResourceAttributeRequest::getResourceAllocateMode() const {
  return resourceAllocateMode_;
}

void UpdateVpcEndpointZoneConnectionResourceAttributeRequest::setResourceAllocateMode(const std::string &resourceAllocateMode) {
  resourceAllocateMode_ = resourceAllocateMode;
  setParameter(std::string("ResourceAllocateMode"), resourceAllocateMode);
}

std::string UpdateVpcEndpointZoneConnectionResourceAttributeRequest::getResourceType() const {
  return resourceType_;
}

void UpdateVpcEndpointZoneConnectionResourceAttributeRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string UpdateVpcEndpointZoneConnectionResourceAttributeRequest::getResourceReplaceMode() const {
  return resourceReplaceMode_;
}

void UpdateVpcEndpointZoneConnectionResourceAttributeRequest::setResourceReplaceMode(const std::string &resourceReplaceMode) {
  resourceReplaceMode_ = resourceReplaceMode;
  setParameter(std::string("ResourceReplaceMode"), resourceReplaceMode);
}

std::string UpdateVpcEndpointZoneConnectionResourceAttributeRequest::getZoneId() const {
  return zoneId_;
}

void UpdateVpcEndpointZoneConnectionResourceAttributeRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string UpdateVpcEndpointZoneConnectionResourceAttributeRequest::getServiceId() const {
  return serviceId_;
}

void UpdateVpcEndpointZoneConnectionResourceAttributeRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

