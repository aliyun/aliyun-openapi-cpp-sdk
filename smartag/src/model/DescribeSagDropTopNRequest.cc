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

#include <alibabacloud/smartag/model/DescribeSagDropTopNRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSagDropTopNRequest;

DescribeSagDropTopNRequest::DescribeSagDropTopNRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DescribeSagDropTopN") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSagDropTopNRequest::~DescribeSagDropTopNRequest() {}

long DescribeSagDropTopNRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSagDropTopNRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSagDropTopNRequest::getRegionId() const {
  return regionId_;
}

void DescribeSagDropTopNRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSagDropTopNRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSagDropTopNRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSagDropTopNRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSagDropTopNRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSagDropTopNRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSagDropTopNRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int DescribeSagDropTopNRequest::getSize() const {
  return size_;
}

void DescribeSagDropTopNRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

