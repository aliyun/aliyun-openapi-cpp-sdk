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

#include <alibabacloud/vpc/model/DescribeVpnAttachmentsRequest.h>

using AlibabaCloud::Vpc::Model::DescribeVpnAttachmentsRequest;

DescribeVpnAttachmentsRequest::DescribeVpnAttachmentsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeVpnAttachments") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVpnAttachmentsRequest::~DescribeVpnAttachmentsRequest() {}

long DescribeVpnAttachmentsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeVpnAttachmentsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeVpnAttachmentsRequest::getAttachType() const {
  return attachType_;
}

void DescribeVpnAttachmentsRequest::setAttachType(const std::string &attachType) {
  attachType_ = attachType;
  setParameter(std::string("AttachType"), attachType);
}

int DescribeVpnAttachmentsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeVpnAttachmentsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeVpnAttachmentsRequest::getRegionId() const {
  return regionId_;
}

void DescribeVpnAttachmentsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeVpnAttachmentsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVpnAttachmentsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeVpnAttachmentsRequest::Tag> DescribeVpnAttachmentsRequest::getTag() const {
  return tag_;
}

void DescribeVpnAttachmentsRequest::setTag(const std::vector<DescribeVpnAttachmentsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeVpnAttachmentsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeVpnAttachmentsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeVpnAttachmentsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeVpnAttachmentsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeVpnAttachmentsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVpnAttachmentsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVpnAttachmentsRequest::getVpnConnectionId() const {
  return vpnConnectionId_;
}

void DescribeVpnAttachmentsRequest::setVpnConnectionId(const std::string &vpnConnectionId) {
  vpnConnectionId_ = vpnConnectionId;
  setParameter(std::string("VpnConnectionId"), vpnConnectionId);
}

