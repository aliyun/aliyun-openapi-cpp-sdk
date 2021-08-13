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

#include <alibabacloud/smartag/model/DescribeQosPoliciesRequest.h>

using AlibabaCloud::Smartag::Model::DescribeQosPoliciesRequest;

DescribeQosPoliciesRequest::DescribeQosPoliciesRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DescribeQosPolicies") {
  setMethod(HttpRequest::Method::Post);
}

DescribeQosPoliciesRequest::~DescribeQosPoliciesRequest() {}

long DescribeQosPoliciesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeQosPoliciesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeQosPoliciesRequest::getQosPolicyId() const {
  return qosPolicyId_;
}

void DescribeQosPoliciesRequest::setQosPolicyId(const std::string &qosPolicyId) {
  qosPolicyId_ = qosPolicyId;
  setParameter(std::string("QosPolicyId"), qosPolicyId);
}

std::string DescribeQosPoliciesRequest::getDescription() const {
  return description_;
}

void DescribeQosPoliciesRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int DescribeQosPoliciesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeQosPoliciesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeQosPoliciesRequest::getRegionId() const {
  return regionId_;
}

void DescribeQosPoliciesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeQosPoliciesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeQosPoliciesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeQosPoliciesRequest::getQosId() const {
  return qosId_;
}

void DescribeQosPoliciesRequest::setQosId(const std::string &qosId) {
  qosId_ = qosId;
  setParameter(std::string("QosId"), qosId);
}

std::string DescribeQosPoliciesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeQosPoliciesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeQosPoliciesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeQosPoliciesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeQosPoliciesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeQosPoliciesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int DescribeQosPoliciesRequest::getPriority() const {
  return priority_;
}

void DescribeQosPoliciesRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

