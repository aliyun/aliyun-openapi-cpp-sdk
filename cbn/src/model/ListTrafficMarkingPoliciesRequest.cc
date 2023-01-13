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

#include <alibabacloud/cbn/model/ListTrafficMarkingPoliciesRequest.h>

using AlibabaCloud::Cbn::Model::ListTrafficMarkingPoliciesRequest;

ListTrafficMarkingPoliciesRequest::ListTrafficMarkingPoliciesRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListTrafficMarkingPolicies") {
  setMethod(HttpRequest::Method::Post);
}

ListTrafficMarkingPoliciesRequest::~ListTrafficMarkingPoliciesRequest() {}

long ListTrafficMarkingPoliciesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTrafficMarkingPoliciesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListTrafficMarkingPoliciesRequest::getTrafficMarkingPolicyDescription() const {
  return trafficMarkingPolicyDescription_;
}

void ListTrafficMarkingPoliciesRequest::setTrafficMarkingPolicyDescription(const std::string &trafficMarkingPolicyDescription) {
  trafficMarkingPolicyDescription_ = trafficMarkingPolicyDescription;
  setParameter(std::string("TrafficMarkingPolicyDescription"), trafficMarkingPolicyDescription);
}

std::string ListTrafficMarkingPoliciesRequest::getTrafficMarkingPolicyId() const {
  return trafficMarkingPolicyId_;
}

void ListTrafficMarkingPoliciesRequest::setTrafficMarkingPolicyId(const std::string &trafficMarkingPolicyId) {
  trafficMarkingPolicyId_ = trafficMarkingPolicyId;
  setParameter(std::string("TrafficMarkingPolicyId"), trafficMarkingPolicyId);
}

std::string ListTrafficMarkingPoliciesRequest::getNextToken() const {
  return nextToken_;
}

void ListTrafficMarkingPoliciesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListTrafficMarkingPoliciesRequest::getTrafficMarkingPolicyName() const {
  return trafficMarkingPolicyName_;
}

void ListTrafficMarkingPoliciesRequest::setTrafficMarkingPolicyName(const std::string &trafficMarkingPolicyName) {
  trafficMarkingPolicyName_ = trafficMarkingPolicyName;
  setParameter(std::string("TrafficMarkingPolicyName"), trafficMarkingPolicyName);
}

std::string ListTrafficMarkingPoliciesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTrafficMarkingPoliciesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTrafficMarkingPoliciesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTrafficMarkingPoliciesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListTrafficMarkingPoliciesRequest::getOwnerId() const {
  return ownerId_;
}

void ListTrafficMarkingPoliciesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTrafficMarkingPoliciesRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void ListTrafficMarkingPoliciesRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string ListTrafficMarkingPoliciesRequest::getVersion() const {
  return version_;
}

void ListTrafficMarkingPoliciesRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

int ListTrafficMarkingPoliciesRequest::getMaxResults() const {
  return maxResults_;
}

void ListTrafficMarkingPoliciesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

