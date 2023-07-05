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

#include <alibabacloud/privatelink/model/ListVpcEndpointServiceUsersRequest.h>

using AlibabaCloud::Privatelink::Model::ListVpcEndpointServiceUsersRequest;

ListVpcEndpointServiceUsersRequest::ListVpcEndpointServiceUsersRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "ListVpcEndpointServiceUsers") {
  setMethod(HttpRequest::Method::Post);
}

ListVpcEndpointServiceUsersRequest::~ListVpcEndpointServiceUsersRequest() {}

std::string ListVpcEndpointServiceUsersRequest::getUserListType() const {
  return userListType_;
}

void ListVpcEndpointServiceUsersRequest::setUserListType(const std::string &userListType) {
  userListType_ = userListType;
  setParameter(std::string("UserListType"), userListType);
}

long ListVpcEndpointServiceUsersRequest::getUserId() const {
  return userId_;
}

void ListVpcEndpointServiceUsersRequest::setUserId(long userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), std::to_string(userId));
}

std::string ListVpcEndpointServiceUsersRequest::getRegionId() const {
  return regionId_;
}

void ListVpcEndpointServiceUsersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListVpcEndpointServiceUsersRequest::getNextToken() const {
  return nextToken_;
}

void ListVpcEndpointServiceUsersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListVpcEndpointServiceUsersRequest::getMaxResults() const {
  return maxResults_;
}

void ListVpcEndpointServiceUsersRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListVpcEndpointServiceUsersRequest::getServiceId() const {
  return serviceId_;
}

void ListVpcEndpointServiceUsersRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

