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

#include <alibabacloud/vpc/model/CreateExpressConnectTrafficQosRuleRequest.h>

using AlibabaCloud::Vpc::Model::CreateExpressConnectTrafficQosRuleRequest;

CreateExpressConnectTrafficQosRuleRequest::CreateExpressConnectTrafficQosRuleRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateExpressConnectTrafficQosRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateExpressConnectTrafficQosRuleRequest::~CreateExpressConnectTrafficQosRuleRequest() {}

std::string CreateExpressConnectTrafficQosRuleRequest::getDstCidr() const {
  return dstCidr_;
}

void CreateExpressConnectTrafficQosRuleRequest::setDstCidr(const std::string &dstCidr) {
  dstCidr_ = dstCidr;
  setParameter(std::string("DstCidr"), dstCidr);
}

std::string CreateExpressConnectTrafficQosRuleRequest::getClientToken() const {
  return clientToken_;
}

void CreateExpressConnectTrafficQosRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateExpressConnectTrafficQosRuleRequest::getRuleName() const {
  return ruleName_;
}

void CreateExpressConnectTrafficQosRuleRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string CreateExpressConnectTrafficQosRuleRequest::getSrcCidr() const {
  return srcCidr_;
}

void CreateExpressConnectTrafficQosRuleRequest::setSrcCidr(const std::string &srcCidr) {
  srcCidr_ = srcCidr;
  setParameter(std::string("SrcCidr"), srcCidr);
}

std::string CreateExpressConnectTrafficQosRuleRequest::getDstIPv6Cidr() const {
  return dstIPv6Cidr_;
}

void CreateExpressConnectTrafficQosRuleRequest::setDstIPv6Cidr(const std::string &dstIPv6Cidr) {
  dstIPv6Cidr_ = dstIPv6Cidr;
  setParameter(std::string("DstIPv6Cidr"), dstIPv6Cidr);
}

std::string CreateExpressConnectTrafficQosRuleRequest::getDstPortRange() const {
  return dstPortRange_;
}

void CreateExpressConnectTrafficQosRuleRequest::setDstPortRange(const std::string &dstPortRange) {
  dstPortRange_ = dstPortRange;
  setParameter(std::string("DstPortRange"), dstPortRange);
}

std::string CreateExpressConnectTrafficQosRuleRequest::getProtocol() const {
  return protocol_;
}

void CreateExpressConnectTrafficQosRuleRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string CreateExpressConnectTrafficQosRuleRequest::getRegionId() const {
  return regionId_;
}

void CreateExpressConnectTrafficQosRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateExpressConnectTrafficQosRuleRequest::getQosId() const {
  return qosId_;
}

void CreateExpressConnectTrafficQosRuleRequest::setQosId(const std::string &qosId) {
  qosId_ = qosId;
  setParameter(std::string("QosId"), qosId);
}

std::string CreateExpressConnectTrafficQosRuleRequest::getQueueId() const {
  return queueId_;
}

void CreateExpressConnectTrafficQosRuleRequest::setQueueId(const std::string &queueId) {
  queueId_ = queueId;
  setParameter(std::string("QueueId"), queueId);
}

int CreateExpressConnectTrafficQosRuleRequest::getMatchDscp() const {
  return matchDscp_;
}

void CreateExpressConnectTrafficQosRuleRequest::setMatchDscp(int matchDscp) {
  matchDscp_ = matchDscp;
  setParameter(std::string("MatchDscp"), std::to_string(matchDscp));
}

std::string CreateExpressConnectTrafficQosRuleRequest::getRuleDescription() const {
  return ruleDescription_;
}

void CreateExpressConnectTrafficQosRuleRequest::setRuleDescription(const std::string &ruleDescription) {
  ruleDescription_ = ruleDescription;
  setParameter(std::string("RuleDescription"), ruleDescription);
}

std::string CreateExpressConnectTrafficQosRuleRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateExpressConnectTrafficQosRuleRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int CreateExpressConnectTrafficQosRuleRequest::getRemarkingDscp() const {
  return remarkingDscp_;
}

void CreateExpressConnectTrafficQosRuleRequest::setRemarkingDscp(int remarkingDscp) {
  remarkingDscp_ = remarkingDscp;
  setParameter(std::string("RemarkingDscp"), std::to_string(remarkingDscp));
}

std::string CreateExpressConnectTrafficQosRuleRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateExpressConnectTrafficQosRuleRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int CreateExpressConnectTrafficQosRuleRequest::getPriority() const {
  return priority_;
}

void CreateExpressConnectTrafficQosRuleRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

long CreateExpressConnectTrafficQosRuleRequest::getOwnerId() const {
  return ownerId_;
}

void CreateExpressConnectTrafficQosRuleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateExpressConnectTrafficQosRuleRequest::getSrcPortRange() const {
  return srcPortRange_;
}

void CreateExpressConnectTrafficQosRuleRequest::setSrcPortRange(const std::string &srcPortRange) {
  srcPortRange_ = srcPortRange;
  setParameter(std::string("SrcPortRange"), srcPortRange);
}

std::string CreateExpressConnectTrafficQosRuleRequest::getSrcIPv6Cidr() const {
  return srcIPv6Cidr_;
}

void CreateExpressConnectTrafficQosRuleRequest::setSrcIPv6Cidr(const std::string &srcIPv6Cidr) {
  srcIPv6Cidr_ = srcIPv6Cidr;
  setParameter(std::string("SrcIPv6Cidr"), srcIPv6Cidr);
}

