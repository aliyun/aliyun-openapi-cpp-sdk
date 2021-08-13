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

#include <alibabacloud/smartag/model/DescribeSagVbrRelationsRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSagVbrRelationsRequest;

DescribeSagVbrRelationsRequest::DescribeSagVbrRelationsRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DescribeSagVbrRelations") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSagVbrRelationsRequest::~DescribeSagVbrRelationsRequest() {}

long DescribeSagVbrRelationsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSagVbrRelationsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<std::string> DescribeSagVbrRelationsRequest::getVbrInstanceIds() const {
  return vbrInstanceIds_;
}

void DescribeSagVbrRelationsRequest::setVbrInstanceIds(const std::vector<std::string> &vbrInstanceIds) {
  vbrInstanceIds_ = vbrInstanceIds;
}

std::string DescribeSagVbrRelationsRequest::getVbrRegionId() const {
  return vbrRegionId_;
}

void DescribeSagVbrRelationsRequest::setVbrRegionId(const std::string &vbrRegionId) {
  vbrRegionId_ = vbrRegionId;
  setParameter(std::string("VbrRegionId"), vbrRegionId);
}

std::string DescribeSagVbrRelationsRequest::getRegionId() const {
  return regionId_;
}

void DescribeSagVbrRelationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSagVbrRelationsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSagVbrRelationsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSagVbrRelationsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSagVbrRelationsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSagVbrRelationsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSagVbrRelationsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

