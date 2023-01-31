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

#include <alibabacloud/vpc/model/DescribeVSwitchAttributesRequest.h>

using AlibabaCloud::Vpc::Model::DescribeVSwitchAttributesRequest;

DescribeVSwitchAttributesRequest::DescribeVSwitchAttributesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeVSwitchAttributes") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVSwitchAttributesRequest::~DescribeVSwitchAttributesRequest() {}

long DescribeVSwitchAttributesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeVSwitchAttributesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeVSwitchAttributesRequest::getRegionId() const {
  return regionId_;
}

void DescribeVSwitchAttributesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DescribeVSwitchAttributesRequest::getDryRun() const {
  return dryRun_;
}

void DescribeVSwitchAttributesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DescribeVSwitchAttributesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeVSwitchAttributesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeVSwitchAttributesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeVSwitchAttributesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeVSwitchAttributesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVSwitchAttributesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVSwitchAttributesRequest::getVSwitchId() const {
  return vSwitchId_;
}

void DescribeVSwitchAttributesRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

