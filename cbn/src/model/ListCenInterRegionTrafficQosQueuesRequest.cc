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

#include <alibabacloud/cbn/model/ListCenInterRegionTrafficQosQueuesRequest.h>

using AlibabaCloud::Cbn::Model::ListCenInterRegionTrafficQosQueuesRequest;

ListCenInterRegionTrafficQosQueuesRequest::ListCenInterRegionTrafficQosQueuesRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListCenInterRegionTrafficQosQueues") {
  setMethod(HttpRequest::Method::Post);
}

ListCenInterRegionTrafficQosQueuesRequest::~ListCenInterRegionTrafficQosQueuesRequest() {}

std::string ListCenInterRegionTrafficQosQueuesRequest::getTrafficQosQueueName() const {
  return trafficQosQueueName_;
}

void ListCenInterRegionTrafficQosQueuesRequest::setTrafficQosQueueName(const std::string &trafficQosQueueName) {
  trafficQosQueueName_ = trafficQosQueueName;
  setParameter(std::string("TrafficQosQueueName"), trafficQosQueueName);
}

long ListCenInterRegionTrafficQosQueuesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListCenInterRegionTrafficQosQueuesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListCenInterRegionTrafficQosQueuesRequest::getTrafficQosQueueId() const {
  return trafficQosQueueId_;
}

void ListCenInterRegionTrafficQosQueuesRequest::setTrafficQosQueueId(const std::string &trafficQosQueueId) {
  trafficQosQueueId_ = trafficQosQueueId;
  setParameter(std::string("TrafficQosQueueId"), trafficQosQueueId);
}

std::string ListCenInterRegionTrafficQosQueuesRequest::getTrafficQosQueueDescription() const {
  return trafficQosQueueDescription_;
}

void ListCenInterRegionTrafficQosQueuesRequest::setTrafficQosQueueDescription(const std::string &trafficQosQueueDescription) {
  trafficQosQueueDescription_ = trafficQosQueueDescription;
  setParameter(std::string("TrafficQosQueueDescription"), trafficQosQueueDescription);
}

std::string ListCenInterRegionTrafficQosQueuesRequest::getNextToken() const {
  return nextToken_;
}

void ListCenInterRegionTrafficQosQueuesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListCenInterRegionTrafficQosQueuesRequest::getTrafficQosPolicyId() const {
  return trafficQosPolicyId_;
}

void ListCenInterRegionTrafficQosQueuesRequest::setTrafficQosPolicyId(const std::string &trafficQosPolicyId) {
  trafficQosPolicyId_ = trafficQosPolicyId;
  setParameter(std::string("TrafficQosPolicyId"), trafficQosPolicyId);
}

std::string ListCenInterRegionTrafficQosQueuesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListCenInterRegionTrafficQosQueuesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListCenInterRegionTrafficQosQueuesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListCenInterRegionTrafficQosQueuesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListCenInterRegionTrafficQosQueuesRequest::getOwnerId() const {
  return ownerId_;
}

void ListCenInterRegionTrafficQosQueuesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListCenInterRegionTrafficQosQueuesRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void ListCenInterRegionTrafficQosQueuesRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string ListCenInterRegionTrafficQosQueuesRequest::getVersion() const {
  return version_;
}

void ListCenInterRegionTrafficQosQueuesRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string ListCenInterRegionTrafficQosQueuesRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void ListCenInterRegionTrafficQosQueuesRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

int ListCenInterRegionTrafficQosQueuesRequest::getMaxResults() const {
  return maxResults_;
}

void ListCenInterRegionTrafficQosQueuesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

