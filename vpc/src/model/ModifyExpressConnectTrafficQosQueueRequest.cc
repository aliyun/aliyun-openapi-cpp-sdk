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

#include <alibabacloud/vpc/model/ModifyExpressConnectTrafficQosQueueRequest.h>

using AlibabaCloud::Vpc::Model::ModifyExpressConnectTrafficQosQueueRequest;

ModifyExpressConnectTrafficQosQueueRequest::ModifyExpressConnectTrafficQosQueueRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyExpressConnectTrafficQosQueue") {
  setMethod(HttpRequest::Method::Post);
}

ModifyExpressConnectTrafficQosQueueRequest::~ModifyExpressConnectTrafficQosQueueRequest() {}

std::string ModifyExpressConnectTrafficQosQueueRequest::getQueueName() const {
  return queueName_;
}

void ModifyExpressConnectTrafficQosQueueRequest::setQueueName(const std::string &queueName) {
  queueName_ = queueName;
  setParameter(std::string("QueueName"), queueName);
}

std::string ModifyExpressConnectTrafficQosQueueRequest::getClientToken() const {
  return clientToken_;
}

void ModifyExpressConnectTrafficQosQueueRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyExpressConnectTrafficQosQueueRequest::getQueueDescription() const {
  return queueDescription_;
}

void ModifyExpressConnectTrafficQosQueueRequest::setQueueDescription(const std::string &queueDescription) {
  queueDescription_ = queueDescription;
  setParameter(std::string("QueueDescription"), queueDescription);
}

std::string ModifyExpressConnectTrafficQosQueueRequest::getRegionId() const {
  return regionId_;
}

void ModifyExpressConnectTrafficQosQueueRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyExpressConnectTrafficQosQueueRequest::getQosId() const {
  return qosId_;
}

void ModifyExpressConnectTrafficQosQueueRequest::setQosId(const std::string &qosId) {
  qosId_ = qosId;
  setParameter(std::string("QosId"), qosId);
}

std::string ModifyExpressConnectTrafficQosQueueRequest::getQueueId() const {
  return queueId_;
}

void ModifyExpressConnectTrafficQosQueueRequest::setQueueId(const std::string &queueId) {
  queueId_ = queueId;
  setParameter(std::string("QueueId"), queueId);
}

std::string ModifyExpressConnectTrafficQosQueueRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyExpressConnectTrafficQosQueueRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyExpressConnectTrafficQosQueueRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyExpressConnectTrafficQosQueueRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyExpressConnectTrafficQosQueueRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyExpressConnectTrafficQosQueueRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyExpressConnectTrafficQosQueueRequest::getBandwidthPercent() const {
  return bandwidthPercent_;
}

void ModifyExpressConnectTrafficQosQueueRequest::setBandwidthPercent(const std::string &bandwidthPercent) {
  bandwidthPercent_ = bandwidthPercent;
  setParameter(std::string("BandwidthPercent"), bandwidthPercent);
}

