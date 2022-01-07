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

#include <alibabacloud/privatelink/model/AttachResourceToVpcEndpointServiceRequest.h>

using AlibabaCloud::Privatelink::Model::AttachResourceToVpcEndpointServiceRequest;

AttachResourceToVpcEndpointServiceRequest::AttachResourceToVpcEndpointServiceRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "AttachResourceToVpcEndpointService") {
  setMethod(HttpRequest::Method::Post);
}

AttachResourceToVpcEndpointServiceRequest::~AttachResourceToVpcEndpointServiceRequest() {}

std::string AttachResourceToVpcEndpointServiceRequest::getClientToken() const {
  return clientToken_;
}

void AttachResourceToVpcEndpointServiceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AttachResourceToVpcEndpointServiceRequest::getRegionId() const {
  return regionId_;
}

void AttachResourceToVpcEndpointServiceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AttachResourceToVpcEndpointServiceRequest::getResourceId() const {
  return resourceId_;
}

void AttachResourceToVpcEndpointServiceRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

bool AttachResourceToVpcEndpointServiceRequest::getDryRun() const {
  return dryRun_;
}

void AttachResourceToVpcEndpointServiceRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string AttachResourceToVpcEndpointServiceRequest::getResourceType() const {
  return resourceType_;
}

void AttachResourceToVpcEndpointServiceRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string AttachResourceToVpcEndpointServiceRequest::getZoneId() const {
  return zoneId_;
}

void AttachResourceToVpcEndpointServiceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string AttachResourceToVpcEndpointServiceRequest::getServiceId() const {
  return serviceId_;
}

void AttachResourceToVpcEndpointServiceRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

