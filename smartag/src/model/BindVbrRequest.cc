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

#include <alibabacloud/smartag/model/BindVbrRequest.h>

using AlibabaCloud::Smartag::Model::BindVbrRequest;

BindVbrRequest::BindVbrRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "BindVbr") {
  setMethod(HttpRequest::Method::Post);
}

BindVbrRequest::~BindVbrRequest() {}

long BindVbrRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void BindVbrRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string BindVbrRequest::getVbrId() const {
  return vbrId_;
}

void BindVbrRequest::setVbrId(const std::string &vbrId) {
  vbrId_ = vbrId;
  setParameter(std::string("VbrId"), vbrId);
}

std::string BindVbrRequest::getVbrRegionId() const {
  return vbrRegionId_;
}

void BindVbrRequest::setVbrRegionId(const std::string &vbrRegionId) {
  vbrRegionId_ = vbrRegionId;
  setParameter(std::string("VbrRegionId"), vbrRegionId);
}

std::string BindVbrRequest::getRegionId() const {
  return regionId_;
}

void BindVbrRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string BindVbrRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void BindVbrRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string BindVbrRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void BindVbrRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long BindVbrRequest::getOwnerId() const {
  return ownerId_;
}

void BindVbrRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long BindVbrRequest::getSmartAGUid() const {
  return smartAGUid_;
}

void BindVbrRequest::setSmartAGUid(long smartAGUid) {
  smartAGUid_ = smartAGUid;
  setParameter(std::string("SmartAGUid"), std::to_string(smartAGUid));
}

std::string BindVbrRequest::getSmartAGId() const {
  return smartAGId_;
}

void BindVbrRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

