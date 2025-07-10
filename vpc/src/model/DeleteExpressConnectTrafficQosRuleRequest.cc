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

#include <alibabacloud/vpc/model/DeleteExpressConnectTrafficQosRuleRequest.h>

using AlibabaCloud::Vpc::Model::DeleteExpressConnectTrafficQosRuleRequest;

DeleteExpressConnectTrafficQosRuleRequest::DeleteExpressConnectTrafficQosRuleRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteExpressConnectTrafficQosRule") {
  setMethod(HttpRequest::Method::Post);
}

DeleteExpressConnectTrafficQosRuleRequest::~DeleteExpressConnectTrafficQosRuleRequest() {}

std::string DeleteExpressConnectTrafficQosRuleRequest::getClientToken() const {
  return clientToken_;
}

void DeleteExpressConnectTrafficQosRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteExpressConnectTrafficQosRuleRequest::getRegionId() const {
  return regionId_;
}

void DeleteExpressConnectTrafficQosRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteExpressConnectTrafficQosRuleRequest::getQosId() const {
  return qosId_;
}

void DeleteExpressConnectTrafficQosRuleRequest::setQosId(const std::string &qosId) {
  qosId_ = qosId;
  setParameter(std::string("QosId"), qosId);
}

std::string DeleteExpressConnectTrafficQosRuleRequest::getQueueId() const {
  return queueId_;
}

void DeleteExpressConnectTrafficQosRuleRequest::setQueueId(const std::string &queueId) {
  queueId_ = queueId;
  setParameter(std::string("QueueId"), queueId);
}

std::string DeleteExpressConnectTrafficQosRuleRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteExpressConnectTrafficQosRuleRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteExpressConnectTrafficQosRuleRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteExpressConnectTrafficQosRuleRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteExpressConnectTrafficQosRuleRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteExpressConnectTrafficQosRuleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteExpressConnectTrafficQosRuleRequest::getRuleId() const {
  return ruleId_;
}

void DeleteExpressConnectTrafficQosRuleRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}

