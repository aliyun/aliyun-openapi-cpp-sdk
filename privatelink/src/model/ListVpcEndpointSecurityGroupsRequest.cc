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

#include <alibabacloud/privatelink/model/ListVpcEndpointSecurityGroupsRequest.h>

using AlibabaCloud::Privatelink::Model::ListVpcEndpointSecurityGroupsRequest;

ListVpcEndpointSecurityGroupsRequest::ListVpcEndpointSecurityGroupsRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "ListVpcEndpointSecurityGroups") {
  setMethod(HttpRequest::Method::Post);
}

ListVpcEndpointSecurityGroupsRequest::~ListVpcEndpointSecurityGroupsRequest() {}

std::string ListVpcEndpointSecurityGroupsRequest::getEndpointId() const {
  return endpointId_;
}

void ListVpcEndpointSecurityGroupsRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string ListVpcEndpointSecurityGroupsRequest::getRegionId() const {
  return regionId_;
}

void ListVpcEndpointSecurityGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListVpcEndpointSecurityGroupsRequest::getNextToken() const {
  return nextToken_;
}

void ListVpcEndpointSecurityGroupsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListVpcEndpointSecurityGroupsRequest::getMaxResults() const {
  return maxResults_;
}

void ListVpcEndpointSecurityGroupsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

