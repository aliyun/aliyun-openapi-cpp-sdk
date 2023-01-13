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

#include <alibabacloud/cbn/model/CreateCenInterRegionTrafficQosPolicyRequest.h>

using AlibabaCloud::Cbn::Model::CreateCenInterRegionTrafficQosPolicyRequest;

CreateCenInterRegionTrafficQosPolicyRequest::CreateCenInterRegionTrafficQosPolicyRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "CreateCenInterRegionTrafficQosPolicy") {
  setMethod(HttpRequest::Method::Post);
}

CreateCenInterRegionTrafficQosPolicyRequest::~CreateCenInterRegionTrafficQosPolicyRequest() {}

long CreateCenInterRegionTrafficQosPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateCenInterRegionTrafficQosPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateCenInterRegionTrafficQosPolicyRequest::getClientToken() const {
  return clientToken_;
}

void CreateCenInterRegionTrafficQosPolicyRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<CreateCenInterRegionTrafficQosPolicyRequest::TrafficQosQueues> CreateCenInterRegionTrafficQosPolicyRequest::getTrafficQosQueues() const {
  return trafficQosQueues_;
}

void CreateCenInterRegionTrafficQosPolicyRequest::setTrafficQosQueues(const std::vector<CreateCenInterRegionTrafficQosPolicyRequest::TrafficQosQueues> &trafficQosQueues) {
  trafficQosQueues_ = trafficQosQueues;
  for(int dep1 = 0; dep1 != trafficQosQueues.size(); dep1++) {
  auto trafficQosQueuesObj = trafficQosQueues.at(dep1);
  std::string trafficQosQueuesObjStr = std::string("TrafficQosQueues") + "." + std::to_string(dep1 + 1);
    setParameter(trafficQosQueuesObjStr + ".QosQueueName", trafficQosQueuesObj.qosQueueName);
    setParameter(trafficQosQueuesObjStr + ".RemainBandwidthPercent", trafficQosQueuesObj.remainBandwidthPercent);
    setParameter(trafficQosQueuesObjStr + ".QosQueueDescription", trafficQosQueuesObj.qosQueueDescription);
  }
}

std::string CreateCenInterRegionTrafficQosPolicyRequest::getTrafficQosPolicyName() const {
  return trafficQosPolicyName_;
}

void CreateCenInterRegionTrafficQosPolicyRequest::setTrafficQosPolicyName(const std::string &trafficQosPolicyName) {
  trafficQosPolicyName_ = trafficQosPolicyName;
  setParameter(std::string("TrafficQosPolicyName"), trafficQosPolicyName);
}

bool CreateCenInterRegionTrafficQosPolicyRequest::getDryRun() const {
  return dryRun_;
}

void CreateCenInterRegionTrafficQosPolicyRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateCenInterRegionTrafficQosPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateCenInterRegionTrafficQosPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateCenInterRegionTrafficQosPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateCenInterRegionTrafficQosPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateCenInterRegionTrafficQosPolicyRequest::getTrafficQosPolicyDescription() const {
  return trafficQosPolicyDescription_;
}

void CreateCenInterRegionTrafficQosPolicyRequest::setTrafficQosPolicyDescription(const std::string &trafficQosPolicyDescription) {
  trafficQosPolicyDescription_ = trafficQosPolicyDescription;
  setParameter(std::string("TrafficQosPolicyDescription"), trafficQosPolicyDescription);
}

long CreateCenInterRegionTrafficQosPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void CreateCenInterRegionTrafficQosPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateCenInterRegionTrafficQosPolicyRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void CreateCenInterRegionTrafficQosPolicyRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string CreateCenInterRegionTrafficQosPolicyRequest::getVersion() const {
  return version_;
}

void CreateCenInterRegionTrafficQosPolicyRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string CreateCenInterRegionTrafficQosPolicyRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void CreateCenInterRegionTrafficQosPolicyRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

