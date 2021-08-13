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

#include <alibabacloud/smartag/model/DescribeSagTrafficTopNRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSagTrafficTopNRequest;

DescribeSagTrafficTopNRequest::DescribeSagTrafficTopNRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DescribeSagTrafficTopN") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSagTrafficTopNRequest::~DescribeSagTrafficTopNRequest() {}

long DescribeSagTrafficTopNRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSagTrafficTopNRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSagTrafficTopNRequest::getRegionId() const {
  return regionId_;
}

void DescribeSagTrafficTopNRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSagTrafficTopNRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSagTrafficTopNRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSagTrafficTopNRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSagTrafficTopNRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSagTrafficTopNRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSagTrafficTopNRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int DescribeSagTrafficTopNRequest::getSize() const {
  return size_;
}

void DescribeSagTrafficTopNRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

