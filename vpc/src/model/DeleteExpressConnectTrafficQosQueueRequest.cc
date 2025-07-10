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

#include <alibabacloud/vpc/model/DeleteExpressConnectTrafficQosQueueRequest.h>

using AlibabaCloud::Vpc::Model::DeleteExpressConnectTrafficQosQueueRequest;

DeleteExpressConnectTrafficQosQueueRequest::DeleteExpressConnectTrafficQosQueueRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteExpressConnectTrafficQosQueue") {
  setMethod(HttpRequest::Method::Post);
}

DeleteExpressConnectTrafficQosQueueRequest::~DeleteExpressConnectTrafficQosQueueRequest() {}

std::string DeleteExpressConnectTrafficQosQueueRequest::getClientToken() const {
  return clientToken_;
}

void DeleteExpressConnectTrafficQosQueueRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteExpressConnectTrafficQosQueueRequest::getRegionId() const {
  return regionId_;
}

void DeleteExpressConnectTrafficQosQueueRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteExpressConnectTrafficQosQueueRequest::getQosId() const {
  return qosId_;
}

void DeleteExpressConnectTrafficQosQueueRequest::setQosId(const std::string &qosId) {
  qosId_ = qosId;
  setParameter(std::string("QosId"), qosId);
}

std::string DeleteExpressConnectTrafficQosQueueRequest::getQueueId() const {
  return queueId_;
}

void DeleteExpressConnectTrafficQosQueueRequest::setQueueId(const std::string &queueId) {
  queueId_ = queueId;
  setParameter(std::string("QueueId"), queueId);
}

std::string DeleteExpressConnectTrafficQosQueueRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteExpressConnectTrafficQosQueueRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteExpressConnectTrafficQosQueueRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteExpressConnectTrafficQosQueueRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteExpressConnectTrafficQosQueueRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteExpressConnectTrafficQosQueueRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

