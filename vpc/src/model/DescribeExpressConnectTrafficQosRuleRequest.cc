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

#include <alibabacloud/vpc/model/DescribeExpressConnectTrafficQosRuleRequest.h>

using AlibabaCloud::Vpc::Model::DescribeExpressConnectTrafficQosRuleRequest;

DescribeExpressConnectTrafficQosRuleRequest::DescribeExpressConnectTrafficQosRuleRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeExpressConnectTrafficQosRule") {
  setMethod(HttpRequest::Method::Post);
}

DescribeExpressConnectTrafficQosRuleRequest::~DescribeExpressConnectTrafficQosRuleRequest() {}

std::string DescribeExpressConnectTrafficQosRuleRequest::getClientToken() const {
  return clientToken_;
}

void DescribeExpressConnectTrafficQosRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<std::string> DescribeExpressConnectTrafficQosRuleRequest::getRuleIdList() const {
  return ruleIdList_;
}

void DescribeExpressConnectTrafficQosRuleRequest::setRuleIdList(const std::vector<std::string> &ruleIdList) {
  ruleIdList_ = ruleIdList;
}

std::string DescribeExpressConnectTrafficQosRuleRequest::getRegionId() const {
  return regionId_;
}

void DescribeExpressConnectTrafficQosRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeExpressConnectTrafficQosRuleRequest::getQosId() const {
  return qosId_;
}

void DescribeExpressConnectTrafficQosRuleRequest::setQosId(const std::string &qosId) {
  qosId_ = qosId;
  setParameter(std::string("QosId"), qosId);
}

std::string DescribeExpressConnectTrafficQosRuleRequest::getQueueId() const {
  return queueId_;
}

void DescribeExpressConnectTrafficQosRuleRequest::setQueueId(const std::string &queueId) {
  queueId_ = queueId;
  setParameter(std::string("QueueId"), queueId);
}

std::string DescribeExpressConnectTrafficQosRuleRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeExpressConnectTrafficQosRuleRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeExpressConnectTrafficQosRuleRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeExpressConnectTrafficQosRuleRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeExpressConnectTrafficQosRuleRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeExpressConnectTrafficQosRuleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> DescribeExpressConnectTrafficQosRuleRequest::getRuleNameList() const {
  return ruleNameList_;
}

void DescribeExpressConnectTrafficQosRuleRequest::setRuleNameList(const std::vector<std::string> &ruleNameList) {
  ruleNameList_ = ruleNameList;
}

