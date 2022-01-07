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

#include <alibabacloud/privatelink/model/DetachResourceFromVpcEndpointServiceRequest.h>

using AlibabaCloud::Privatelink::Model::DetachResourceFromVpcEndpointServiceRequest;

DetachResourceFromVpcEndpointServiceRequest::DetachResourceFromVpcEndpointServiceRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "DetachResourceFromVpcEndpointService") {
  setMethod(HttpRequest::Method::Post);
}

DetachResourceFromVpcEndpointServiceRequest::~DetachResourceFromVpcEndpointServiceRequest() {}

std::string DetachResourceFromVpcEndpointServiceRequest::getClientToken() const {
  return clientToken_;
}

void DetachResourceFromVpcEndpointServiceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DetachResourceFromVpcEndpointServiceRequest::getRegionId() const {
  return regionId_;
}

void DetachResourceFromVpcEndpointServiceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DetachResourceFromVpcEndpointServiceRequest::getResourceId() const {
  return resourceId_;
}

void DetachResourceFromVpcEndpointServiceRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

bool DetachResourceFromVpcEndpointServiceRequest::getDryRun() const {
  return dryRun_;
}

void DetachResourceFromVpcEndpointServiceRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DetachResourceFromVpcEndpointServiceRequest::getResourceType() const {
  return resourceType_;
}

void DetachResourceFromVpcEndpointServiceRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string DetachResourceFromVpcEndpointServiceRequest::getZoneId() const {
  return zoneId_;
}

void DetachResourceFromVpcEndpointServiceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string DetachResourceFromVpcEndpointServiceRequest::getServiceId() const {
  return serviceId_;
}

void DetachResourceFromVpcEndpointServiceRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

