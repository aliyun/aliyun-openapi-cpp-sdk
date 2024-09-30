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

#include <alibabacloud/tag/model/EnablePolicyTypeRequest.h>

using AlibabaCloud::Tag::Model::EnablePolicyTypeRequest;

EnablePolicyTypeRequest::EnablePolicyTypeRequest()
    : RpcServiceRequest("tag", "2018-08-28", "EnablePolicyType") {
  setMethod(HttpRequest::Method::Post);
}

EnablePolicyTypeRequest::~EnablePolicyTypeRequest() {}

std::string EnablePolicyTypeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void EnablePolicyTypeRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

std::string EnablePolicyTypeRequest::getRegionId() const {
  return regionId_;
}

void EnablePolicyTypeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string EnablePolicyTypeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void EnablePolicyTypeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string EnablePolicyTypeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void EnablePolicyTypeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string EnablePolicyTypeRequest::getUserType() const {
  return userType_;
}

void EnablePolicyTypeRequest::setUserType(const std::string &userType) {
  userType_ = userType;
  setParameter(std::string("UserType"), userType);
}

long EnablePolicyTypeRequest::getOwnerId() const {
  return ownerId_;
}

void EnablePolicyTypeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string EnablePolicyTypeRequest::getOpenType() const {
  return openType_;
}

void EnablePolicyTypeRequest::setOpenType(const std::string &openType) {
  openType_ = openType;
  setParameter(std::string("OpenType"), openType);
}

