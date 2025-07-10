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

#include <alibabacloud/vpc/model/ModifyExpressConnectTrafficQosRuleRequest.h>

using AlibabaCloud::Vpc::Model::ModifyExpressConnectTrafficQosRuleRequest;

ModifyExpressConnectTrafficQosRuleRequest::ModifyExpressConnectTrafficQosRuleRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyExpressConnectTrafficQosRule") {
  setMethod(HttpRequest::Method::Post);
}

ModifyExpressConnectTrafficQosRuleRequest::~ModifyExpressConnectTrafficQosRuleRequest() {}

std::string ModifyExpressConnectTrafficQosRuleRequest::getDstCidr() const {
  return dstCidr_;
}

void ModifyExpressConnectTrafficQosRuleRequest::setDstCidr(const std::string &dstCidr) {
  dstCidr_ = dstCidr;
  setParameter(std::string("DstCidr"), dstCidr);
}

std::string ModifyExpressConnectTrafficQosRuleRequest::getClientToken() const {
  return clientToken_;
}

void ModifyExpressConnectTrafficQosRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyExpressConnectTrafficQosRuleRequest::getRuleName() const {
  return ruleName_;
}

void ModifyExpressConnectTrafficQosRuleRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string ModifyExpressConnectTrafficQosRuleRequest::getSrcCidr() const {
  return srcCidr_;
}

void ModifyExpressConnectTrafficQosRuleRequest::setSrcCidr(const std::string &srcCidr) {
  srcCidr_ = srcCidr;
  setParameter(std::string("SrcCidr"), srcCidr);
}

std::string ModifyExpressConnectTrafficQosRuleRequest::getDstIPv6Cidr() const {
  return dstIPv6Cidr_;
}

void ModifyExpressConnectTrafficQosRuleRequest::setDstIPv6Cidr(const std::string &dstIPv6Cidr) {
  dstIPv6Cidr_ = dstIPv6Cidr;
  setParameter(std::string("DstIPv6Cidr"), dstIPv6Cidr);
}

std::string ModifyExpressConnectTrafficQosRuleRequest::getDstPortRange() const {
  return dstPortRange_;
}

void ModifyExpressConnectTrafficQosRuleRequest::setDstPortRange(const std::string &dstPortRange) {
  dstPortRange_ = dstPortRange;
  setParameter(std::string("DstPortRange"), dstPortRange);
}

std::string ModifyExpressConnectTrafficQosRuleRequest::getProtocol() const {
  return protocol_;
}

void ModifyExpressConnectTrafficQosRuleRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string ModifyExpressConnectTrafficQosRuleRequest::getRegionId() const {
  return regionId_;
}

void ModifyExpressConnectTrafficQosRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyExpressConnectTrafficQosRuleRequest::getQosId() const {
  return qosId_;
}

void ModifyExpressConnectTrafficQosRuleRequest::setQosId(const std::string &qosId) {
  qosId_ = qosId;
  setParameter(std::string("QosId"), qosId);
}

std::string ModifyExpressConnectTrafficQosRuleRequest::getQueueId() const {
  return queueId_;
}

void ModifyExpressConnectTrafficQosRuleRequest::setQueueId(const std::string &queueId) {
  queueId_ = queueId;
  setParameter(std::string("QueueId"), queueId);
}

int ModifyExpressConnectTrafficQosRuleRequest::getMatchDscp() const {
  return matchDscp_;
}

void ModifyExpressConnectTrafficQosRuleRequest::setMatchDscp(int matchDscp) {
  matchDscp_ = matchDscp;
  setParameter(std::string("MatchDscp"), std::to_string(matchDscp));
}

std::string ModifyExpressConnectTrafficQosRuleRequest::getRuleDescription() const {
  return ruleDescription_;
}

void ModifyExpressConnectTrafficQosRuleRequest::setRuleDescription(const std::string &ruleDescription) {
  ruleDescription_ = ruleDescription;
  setParameter(std::string("RuleDescription"), ruleDescription);
}

std::string ModifyExpressConnectTrafficQosRuleRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyExpressConnectTrafficQosRuleRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int ModifyExpressConnectTrafficQosRuleRequest::getRemarkingDscp() const {
  return remarkingDscp_;
}

void ModifyExpressConnectTrafficQosRuleRequest::setRemarkingDscp(int remarkingDscp) {
  remarkingDscp_ = remarkingDscp;
  setParameter(std::string("RemarkingDscp"), std::to_string(remarkingDscp));
}

std::string ModifyExpressConnectTrafficQosRuleRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyExpressConnectTrafficQosRuleRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int ModifyExpressConnectTrafficQosRuleRequest::getPriority() const {
  return priority_;
}

void ModifyExpressConnectTrafficQosRuleRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

long ModifyExpressConnectTrafficQosRuleRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyExpressConnectTrafficQosRuleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyExpressConnectTrafficQosRuleRequest::getSrcPortRange() const {
  return srcPortRange_;
}

void ModifyExpressConnectTrafficQosRuleRequest::setSrcPortRange(const std::string &srcPortRange) {
  srcPortRange_ = srcPortRange;
  setParameter(std::string("SrcPortRange"), srcPortRange);
}

std::string ModifyExpressConnectTrafficQosRuleRequest::getRuleId() const {
  return ruleId_;
}

void ModifyExpressConnectTrafficQosRuleRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}

std::string ModifyExpressConnectTrafficQosRuleRequest::getSrcIPv6Cidr() const {
  return srcIPv6Cidr_;
}

void ModifyExpressConnectTrafficQosRuleRequest::setSrcIPv6Cidr(const std::string &srcIPv6Cidr) {
  srcIPv6Cidr_ = srcIPv6Cidr;
  setParameter(std::string("SrcIPv6Cidr"), srcIPv6Cidr);
}

