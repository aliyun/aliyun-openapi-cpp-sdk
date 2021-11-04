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

#include <alibabacloud/privatelink/model/ListVpcEndpointServiceResourcesRequest.h>

using AlibabaCloud::Privatelink::Model::ListVpcEndpointServiceResourcesRequest;

ListVpcEndpointServiceResourcesRequest::ListVpcEndpointServiceResourcesRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "ListVpcEndpointServiceResources") {
  setMethod(HttpRequest::Method::Post);
}

ListVpcEndpointServiceResourcesRequest::~ListVpcEndpointServiceResourcesRequest() {}

std::string ListVpcEndpointServiceResourcesRequest::getRegionId() const {
  return regionId_;
}

void ListVpcEndpointServiceResourcesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListVpcEndpointServiceResourcesRequest::getNextToken() const {
  return nextToken_;
}

void ListVpcEndpointServiceResourcesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListVpcEndpointServiceResourcesRequest::getMaxResults() const {
  return maxResults_;
}

void ListVpcEndpointServiceResourcesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListVpcEndpointServiceResourcesRequest::getZoneId() const {
  return zoneId_;
}

void ListVpcEndpointServiceResourcesRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string ListVpcEndpointServiceResourcesRequest::getServiceId() const {
  return serviceId_;
}

void ListVpcEndpointServiceResourcesRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

