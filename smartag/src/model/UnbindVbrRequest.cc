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

#include <alibabacloud/smartag/model/UnbindVbrRequest.h>

using AlibabaCloud::Smartag::Model::UnbindVbrRequest;

UnbindVbrRequest::UnbindVbrRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "UnbindVbr") {
  setMethod(HttpRequest::Method::Post);
}

UnbindVbrRequest::~UnbindVbrRequest() {}

long UnbindVbrRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UnbindVbrRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UnbindVbrRequest::getVbrId() const {
  return vbrId_;
}

void UnbindVbrRequest::setVbrId(const std::string &vbrId) {
  vbrId_ = vbrId;
  setParameter(std::string("VbrId"), vbrId);
}

std::string UnbindVbrRequest::getVbrRegionId() const {
  return vbrRegionId_;
}

void UnbindVbrRequest::setVbrRegionId(const std::string &vbrRegionId) {
  vbrRegionId_ = vbrRegionId;
  setParameter(std::string("VbrRegionId"), vbrRegionId);
}

std::string UnbindVbrRequest::getRegionId() const {
  return regionId_;
}

void UnbindVbrRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UnbindVbrRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UnbindVbrRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UnbindVbrRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UnbindVbrRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UnbindVbrRequest::getOwnerId() const {
  return ownerId_;
}

void UnbindVbrRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long UnbindVbrRequest::getSmartAGUid() const {
  return smartAGUid_;
}

void UnbindVbrRequest::setSmartAGUid(long smartAGUid) {
  smartAGUid_ = smartAGUid;
  setParameter(std::string("SmartAGUid"), std::to_string(smartAGUid));
}

std::string UnbindVbrRequest::getSmartAGId() const {
  return smartAGId_;
}

void UnbindVbrRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

