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

#include <alibabacloud/vpc/model/ListVpcEndpointServicesByEndUserRequest.h>

using AlibabaCloud::Vpc::Model::ListVpcEndpointServicesByEndUserRequest;

ListVpcEndpointServicesByEndUserRequest::ListVpcEndpointServicesByEndUserRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ListVpcEndpointServicesByEndUser") {
  setMethod(HttpRequest::Method::Post);
}

ListVpcEndpointServicesByEndUserRequest::~ListVpcEndpointServicesByEndUserRequest() {}

long ListVpcEndpointServicesByEndUserRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListVpcEndpointServicesByEndUserRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListVpcEndpointServicesByEndUserRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListVpcEndpointServicesByEndUserRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListVpcEndpointServicesByEndUserRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListVpcEndpointServicesByEndUserRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListVpcEndpointServicesByEndUserRequest::getOwnerId() const {
  return ownerId_;
}

void ListVpcEndpointServicesByEndUserRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListVpcEndpointServicesByEndUserRequest::getNextToken() const {
  return nextToken_;
}

void ListVpcEndpointServicesByEndUserRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListVpcEndpointServicesByEndUserRequest::getRegionId() const {
  return regionId_;
}

void ListVpcEndpointServicesByEndUserRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long ListVpcEndpointServicesByEndUserRequest::getMaxResults() const {
  return maxResults_;
}

void ListVpcEndpointServicesByEndUserRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListVpcEndpointServicesByEndUserRequest::getServiceName() const {
  return serviceName_;
}

void ListVpcEndpointServicesByEndUserRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

