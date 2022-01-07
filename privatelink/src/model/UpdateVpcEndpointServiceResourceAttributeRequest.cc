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

#include <alibabacloud/privatelink/model/UpdateVpcEndpointServiceResourceAttributeRequest.h>

using AlibabaCloud::Privatelink::Model::UpdateVpcEndpointServiceResourceAttributeRequest;

UpdateVpcEndpointServiceResourceAttributeRequest::UpdateVpcEndpointServiceResourceAttributeRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "UpdateVpcEndpointServiceResourceAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateVpcEndpointServiceResourceAttributeRequest::~UpdateVpcEndpointServiceResourceAttributeRequest() {}

std::string UpdateVpcEndpointServiceResourceAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateVpcEndpointServiceResourceAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateVpcEndpointServiceResourceAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateVpcEndpointServiceResourceAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool UpdateVpcEndpointServiceResourceAttributeRequest::getAutoAllocatedEnabled() const {
  return autoAllocatedEnabled_;
}

void UpdateVpcEndpointServiceResourceAttributeRequest::setAutoAllocatedEnabled(bool autoAllocatedEnabled) {
  autoAllocatedEnabled_ = autoAllocatedEnabled;
  setParameter(std::string("AutoAllocatedEnabled"), autoAllocatedEnabled ? "true" : "false");
}

std::string UpdateVpcEndpointServiceResourceAttributeRequest::getResourceId() const {
  return resourceId_;
}

void UpdateVpcEndpointServiceResourceAttributeRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

bool UpdateVpcEndpointServiceResourceAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateVpcEndpointServiceResourceAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateVpcEndpointServiceResourceAttributeRequest::getResourceType() const {
  return resourceType_;
}

void UpdateVpcEndpointServiceResourceAttributeRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string UpdateVpcEndpointServiceResourceAttributeRequest::getZoneId() const {
  return zoneId_;
}

void UpdateVpcEndpointServiceResourceAttributeRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string UpdateVpcEndpointServiceResourceAttributeRequest::getServiceId() const {
  return serviceId_;
}

void UpdateVpcEndpointServiceResourceAttributeRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

