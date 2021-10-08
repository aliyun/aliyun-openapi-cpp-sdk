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

#include <alibabacloud/ecs/model/DescribeInstanceAttachmentAttributesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInstanceAttachmentAttributesRequest;

DescribeInstanceAttachmentAttributesRequest::DescribeInstanceAttachmentAttributesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeInstanceAttachmentAttributes") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceAttachmentAttributesRequest::~DescribeInstanceAttachmentAttributesRequest() {}

long DescribeInstanceAttachmentAttributesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeInstanceAttachmentAttributesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeInstanceAttachmentAttributesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeInstanceAttachmentAttributesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeInstanceAttachmentAttributesRequest::getRegionId() const {
  return regionId_;
}

void DescribeInstanceAttachmentAttributesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeInstanceAttachmentAttributesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeInstanceAttachmentAttributesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeInstanceAttachmentAttributesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeInstanceAttachmentAttributesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeInstanceAttachmentAttributesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeInstanceAttachmentAttributesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeInstanceAttachmentAttributesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeInstanceAttachmentAttributesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeInstanceAttachmentAttributesRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeInstanceAttachmentAttributesRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

