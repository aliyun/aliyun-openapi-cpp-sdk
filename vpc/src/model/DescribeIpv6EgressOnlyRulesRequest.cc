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

#include <alibabacloud/vpc/model/DescribeIpv6EgressOnlyRulesRequest.h>

using AlibabaCloud::Vpc::Model::DescribeIpv6EgressOnlyRulesRequest;

DescribeIpv6EgressOnlyRulesRequest::DescribeIpv6EgressOnlyRulesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeIpv6EgressOnlyRules") {
  setMethod(HttpRequest::Method::Post);
}

DescribeIpv6EgressOnlyRulesRequest::~DescribeIpv6EgressOnlyRulesRequest() {}

long DescribeIpv6EgressOnlyRulesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeIpv6EgressOnlyRulesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeIpv6EgressOnlyRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeIpv6EgressOnlyRulesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeIpv6EgressOnlyRulesRequest::getIpv6EgressOnlyRuleId() const {
  return ipv6EgressOnlyRuleId_;
}

void DescribeIpv6EgressOnlyRulesRequest::setIpv6EgressOnlyRuleId(const std::string &ipv6EgressOnlyRuleId) {
  ipv6EgressOnlyRuleId_ = ipv6EgressOnlyRuleId;
  setParameter(std::string("Ipv6EgressOnlyRuleId"), ipv6EgressOnlyRuleId);
}

std::string DescribeIpv6EgressOnlyRulesRequest::getRegionId() const {
  return regionId_;
}

void DescribeIpv6EgressOnlyRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeIpv6EgressOnlyRulesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeIpv6EgressOnlyRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeIpv6EgressOnlyRulesRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeIpv6EgressOnlyRulesRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeIpv6EgressOnlyRulesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeIpv6EgressOnlyRulesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeIpv6EgressOnlyRulesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeIpv6EgressOnlyRulesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeIpv6EgressOnlyRulesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeIpv6EgressOnlyRulesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeIpv6EgressOnlyRulesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeIpv6EgressOnlyRulesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeIpv6EgressOnlyRulesRequest::getIpv6GatewayId() const {
  return ipv6GatewayId_;
}

void DescribeIpv6EgressOnlyRulesRequest::setIpv6GatewayId(const std::string &ipv6GatewayId) {
  ipv6GatewayId_ = ipv6GatewayId;
  setParameter(std::string("Ipv6GatewayId"), ipv6GatewayId);
}

std::string DescribeIpv6EgressOnlyRulesRequest::getName() const {
  return name_;
}

void DescribeIpv6EgressOnlyRulesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

