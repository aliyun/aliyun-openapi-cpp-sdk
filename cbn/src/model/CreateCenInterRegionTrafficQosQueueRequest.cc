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

#include <alibabacloud/cbn/model/CreateCenInterRegionTrafficQosQueueRequest.h>

using AlibabaCloud::Cbn::Model::CreateCenInterRegionTrafficQosQueueRequest;

CreateCenInterRegionTrafficQosQueueRequest::CreateCenInterRegionTrafficQosQueueRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "CreateCenInterRegionTrafficQosQueue") {
  setMethod(HttpRequest::Method::Post);
}

CreateCenInterRegionTrafficQosQueueRequest::~CreateCenInterRegionTrafficQosQueueRequest() {}

std::vector<int> CreateCenInterRegionTrafficQosQueueRequest::getDscps() const {
  return dscps_;
}

void CreateCenInterRegionTrafficQosQueueRequest::setDscps(const std::vector<int> &dscps) {
  dscps_ = dscps;
}

long CreateCenInterRegionTrafficQosQueueRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateCenInterRegionTrafficQosQueueRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateCenInterRegionTrafficQosQueueRequest::getClientToken() const {
  return clientToken_;
}

void CreateCenInterRegionTrafficQosQueueRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateCenInterRegionTrafficQosQueueRequest::getQosQueueName() const {
  return qosQueueName_;
}

void CreateCenInterRegionTrafficQosQueueRequest::setQosQueueName(const std::string &qosQueueName) {
  qosQueueName_ = qosQueueName;
  setParameter(std::string("QosQueueName"), qosQueueName);
}

std::string CreateCenInterRegionTrafficQosQueueRequest::getRemainBandwidthPercent() const {
  return remainBandwidthPercent_;
}

void CreateCenInterRegionTrafficQosQueueRequest::setRemainBandwidthPercent(const std::string &remainBandwidthPercent) {
  remainBandwidthPercent_ = remainBandwidthPercent;
  setParameter(std::string("RemainBandwidthPercent"), remainBandwidthPercent);
}

bool CreateCenInterRegionTrafficQosQueueRequest::getDryRun() const {
  return dryRun_;
}

void CreateCenInterRegionTrafficQosQueueRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateCenInterRegionTrafficQosQueueRequest::getTrafficQosPolicyId() const {
  return trafficQosPolicyId_;
}

void CreateCenInterRegionTrafficQosQueueRequest::setTrafficQosPolicyId(const std::string &trafficQosPolicyId) {
  trafficQosPolicyId_ = trafficQosPolicyId;
  setParameter(std::string("TrafficQosPolicyId"), trafficQosPolicyId);
}

std::string CreateCenInterRegionTrafficQosQueueRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateCenInterRegionTrafficQosQueueRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateCenInterRegionTrafficQosQueueRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateCenInterRegionTrafficQosQueueRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateCenInterRegionTrafficQosQueueRequest::getOwnerId() const {
  return ownerId_;
}

void CreateCenInterRegionTrafficQosQueueRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateCenInterRegionTrafficQosQueueRequest::getVersion() const {
  return version_;
}

void CreateCenInterRegionTrafficQosQueueRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string CreateCenInterRegionTrafficQosQueueRequest::getQosQueueDescription() const {
  return qosQueueDescription_;
}

void CreateCenInterRegionTrafficQosQueueRequest::setQosQueueDescription(const std::string &qosQueueDescription) {
  qosQueueDescription_ = qosQueueDescription;
  setParameter(std::string("QosQueueDescription"), qosQueueDescription);
}

