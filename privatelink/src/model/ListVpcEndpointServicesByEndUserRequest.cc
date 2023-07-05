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

#include <alibabacloud/privatelink/model/ListVpcEndpointServicesByEndUserRequest.h>

using AlibabaCloud::Privatelink::Model::ListVpcEndpointServicesByEndUserRequest;

ListVpcEndpointServicesByEndUserRequest::ListVpcEndpointServicesByEndUserRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "ListVpcEndpointServicesByEndUser") {
  setMethod(HttpRequest::Method::Post);
}

ListVpcEndpointServicesByEndUserRequest::~ListVpcEndpointServicesByEndUserRequest() {}

std::string ListVpcEndpointServicesByEndUserRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListVpcEndpointServicesByEndUserRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListVpcEndpointServicesByEndUserRequest::getRegionId() const {
  return regionId_;
}

void ListVpcEndpointServicesByEndUserRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListVpcEndpointServicesByEndUserRequest::getNextToken() const {
  return nextToken_;
}

void ListVpcEndpointServicesByEndUserRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListVpcEndpointServicesByEndUserRequest::getServiceName() const {
  return serviceName_;
}

void ListVpcEndpointServicesByEndUserRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::vector<ListVpcEndpointServicesByEndUserRequest::Tag> ListVpcEndpointServicesByEndUserRequest::getTag() const {
  return tag_;
}

void ListVpcEndpointServicesByEndUserRequest::setTag(const std::vector<ListVpcEndpointServicesByEndUserRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
  }
}

std::string ListVpcEndpointServicesByEndUserRequest::getServiceType() const {
  return serviceType_;
}

void ListVpcEndpointServicesByEndUserRequest::setServiceType(const std::string &serviceType) {
  serviceType_ = serviceType;
  setParameter(std::string("ServiceType"), serviceType);
}

int ListVpcEndpointServicesByEndUserRequest::getMaxResults() const {
  return maxResults_;
}

void ListVpcEndpointServicesByEndUserRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListVpcEndpointServicesByEndUserRequest::getServiceId() const {
  return serviceId_;
}

void ListVpcEndpointServicesByEndUserRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

