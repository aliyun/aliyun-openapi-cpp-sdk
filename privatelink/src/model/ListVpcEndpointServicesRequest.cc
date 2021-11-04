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

#include <alibabacloud/privatelink/model/ListVpcEndpointServicesRequest.h>

using AlibabaCloud::Privatelink::Model::ListVpcEndpointServicesRequest;

ListVpcEndpointServicesRequest::ListVpcEndpointServicesRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "ListVpcEndpointServices") {
  setMethod(HttpRequest::Method::Post);
}

ListVpcEndpointServicesRequest::~ListVpcEndpointServicesRequest() {}

std::string ListVpcEndpointServicesRequest::getServiceBusinessStatus() const {
  return serviceBusinessStatus_;
}

void ListVpcEndpointServicesRequest::setServiceBusinessStatus(const std::string &serviceBusinessStatus) {
  serviceBusinessStatus_ = serviceBusinessStatus;
  setParameter(std::string("ServiceBusinessStatus"), serviceBusinessStatus);
}

bool ListVpcEndpointServicesRequest::getAutoAcceptEnabled() const {
  return autoAcceptEnabled_;
}

void ListVpcEndpointServicesRequest::setAutoAcceptEnabled(bool autoAcceptEnabled) {
  autoAcceptEnabled_ = autoAcceptEnabled;
  setParameter(std::string("AutoAcceptEnabled"), autoAcceptEnabled ? "true" : "false");
}

std::string ListVpcEndpointServicesRequest::getServiceStatus() const {
  return serviceStatus_;
}

void ListVpcEndpointServicesRequest::setServiceStatus(const std::string &serviceStatus) {
  serviceStatus_ = serviceStatus;
  setParameter(std::string("ServiceStatus"), serviceStatus);
}

std::string ListVpcEndpointServicesRequest::getRegionId() const {
  return regionId_;
}

void ListVpcEndpointServicesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListVpcEndpointServicesRequest::getNextToken() const {
  return nextToken_;
}

void ListVpcEndpointServicesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

bool ListVpcEndpointServicesRequest::getZoneAffinityEnabled() const {
  return zoneAffinityEnabled_;
}

void ListVpcEndpointServicesRequest::setZoneAffinityEnabled(bool zoneAffinityEnabled) {
  zoneAffinityEnabled_ = zoneAffinityEnabled;
  setParameter(std::string("ZoneAffinityEnabled"), zoneAffinityEnabled ? "true" : "false");
}

std::string ListVpcEndpointServicesRequest::getServiceName() const {
  return serviceName_;
}

void ListVpcEndpointServicesRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::string ListVpcEndpointServicesRequest::getResourceId() const {
  return resourceId_;
}

void ListVpcEndpointServicesRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string ListVpcEndpointServicesRequest::getServiceResourceType() const {
  return serviceResourceType_;
}

void ListVpcEndpointServicesRequest::setServiceResourceType(const std::string &serviceResourceType) {
  serviceResourceType_ = serviceResourceType;
  setParameter(std::string("ServiceResourceType"), serviceResourceType);
}

int ListVpcEndpointServicesRequest::getMaxResults() const {
  return maxResults_;
}

void ListVpcEndpointServicesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListVpcEndpointServicesRequest::getServiceId() const {
  return serviceId_;
}

void ListVpcEndpointServicesRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

