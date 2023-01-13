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

#include <alibabacloud/cbn/model/ListCenInterRegionTrafficQosPoliciesRequest.h>

using AlibabaCloud::Cbn::Model::ListCenInterRegionTrafficQosPoliciesRequest;

ListCenInterRegionTrafficQosPoliciesRequest::ListCenInterRegionTrafficQosPoliciesRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListCenInterRegionTrafficQosPolicies") {
  setMethod(HttpRequest::Method::Post);
}

ListCenInterRegionTrafficQosPoliciesRequest::~ListCenInterRegionTrafficQosPoliciesRequest() {}

long ListCenInterRegionTrafficQosPoliciesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListCenInterRegionTrafficQosPoliciesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListCenInterRegionTrafficQosPoliciesRequest::getNextToken() const {
  return nextToken_;
}

void ListCenInterRegionTrafficQosPoliciesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListCenInterRegionTrafficQosPoliciesRequest::getTrafficQosPolicyName() const {
  return trafficQosPolicyName_;
}

void ListCenInterRegionTrafficQosPoliciesRequest::setTrafficQosPolicyName(const std::string &trafficQosPolicyName) {
  trafficQosPolicyName_ = trafficQosPolicyName;
  setParameter(std::string("TrafficQosPolicyName"), trafficQosPolicyName);
}

std::string ListCenInterRegionTrafficQosPoliciesRequest::getTrafficQosPolicyId() const {
  return trafficQosPolicyId_;
}

void ListCenInterRegionTrafficQosPoliciesRequest::setTrafficQosPolicyId(const std::string &trafficQosPolicyId) {
  trafficQosPolicyId_ = trafficQosPolicyId;
  setParameter(std::string("TrafficQosPolicyId"), trafficQosPolicyId);
}

std::string ListCenInterRegionTrafficQosPoliciesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListCenInterRegionTrafficQosPoliciesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListCenInterRegionTrafficQosPoliciesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListCenInterRegionTrafficQosPoliciesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ListCenInterRegionTrafficQosPoliciesRequest::getTrafficQosPolicyDescription() const {
  return trafficQosPolicyDescription_;
}

void ListCenInterRegionTrafficQosPoliciesRequest::setTrafficQosPolicyDescription(const std::string &trafficQosPolicyDescription) {
  trafficQosPolicyDescription_ = trafficQosPolicyDescription;
  setParameter(std::string("TrafficQosPolicyDescription"), trafficQosPolicyDescription);
}

long ListCenInterRegionTrafficQosPoliciesRequest::getOwnerId() const {
  return ownerId_;
}

void ListCenInterRegionTrafficQosPoliciesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListCenInterRegionTrafficQosPoliciesRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void ListCenInterRegionTrafficQosPoliciesRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string ListCenInterRegionTrafficQosPoliciesRequest::getVersion() const {
  return version_;
}

void ListCenInterRegionTrafficQosPoliciesRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string ListCenInterRegionTrafficQosPoliciesRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void ListCenInterRegionTrafficQosPoliciesRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

int ListCenInterRegionTrafficQosPoliciesRequest::getMaxResults() const {
  return maxResults_;
}

void ListCenInterRegionTrafficQosPoliciesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

