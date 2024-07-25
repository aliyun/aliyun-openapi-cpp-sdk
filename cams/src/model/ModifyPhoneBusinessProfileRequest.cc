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

#include <alibabacloud/cams/model/ModifyPhoneBusinessProfileRequest.h>

using AlibabaCloud::Cams::Model::ModifyPhoneBusinessProfileRequest;

ModifyPhoneBusinessProfileRequest::ModifyPhoneBusinessProfileRequest()
    : RpcServiceRequest("cams", "2020-06-06", "ModifyPhoneBusinessProfile") {
  setMethod(HttpRequest::Method::Post);
}

ModifyPhoneBusinessProfileRequest::~ModifyPhoneBusinessProfileRequest() {}

long ModifyPhoneBusinessProfileRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyPhoneBusinessProfileRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyPhoneBusinessProfileRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void ModifyPhoneBusinessProfileRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string ModifyPhoneBusinessProfileRequest::getAbout() const {
  return about_;
}

void ModifyPhoneBusinessProfileRequest::setAbout(const std::string &about) {
  about_ = about;
  setParameter(std::string("About"), about);
}

std::string ModifyPhoneBusinessProfileRequest::getDescription() const {
  return description_;
}

void ModifyPhoneBusinessProfileRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyPhoneBusinessProfileRequest::getVertical() const {
  return vertical_;
}

void ModifyPhoneBusinessProfileRequest::setVertical(const std::string &vertical) {
  vertical_ = vertical;
  setParameter(std::string("Vertical"), vertical);
}

std::string ModifyPhoneBusinessProfileRequest::getLowcodeTenantId() const {
  return lowcodeTenantId_;
}

void ModifyPhoneBusinessProfileRequest::setLowcodeTenantId(const std::string &lowcodeTenantId) {
  lowcodeTenantId_ = lowcodeTenantId;
  setParameter(std::string("LowcodeTenantId"), lowcodeTenantId);
}

std::string ModifyPhoneBusinessProfileRequest::getExtendFunction() const {
  return extendFunction_;
}

void ModifyPhoneBusinessProfileRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string ModifyPhoneBusinessProfileRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyPhoneBusinessProfileRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyPhoneBusinessProfileRequest::getLowcodePhysicAppName() const {
  return lowcodePhysicAppName_;
}

void ModifyPhoneBusinessProfileRequest::setLowcodePhysicAppName(const std::string &lowcodePhysicAppName) {
  lowcodePhysicAppName_ = lowcodePhysicAppName;
  setParameter(std::string("LowcodePhysicAppName"), lowcodePhysicAppName);
}

std::string ModifyPhoneBusinessProfileRequest::getRouteName() const {
  return routeName_;
}

void ModifyPhoneBusinessProfileRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string ModifyPhoneBusinessProfileRequest::getEmail() const {
  return email_;
}

void ModifyPhoneBusinessProfileRequest::setEmail(const std::string &email) {
  email_ = email;
  setParameter(std::string("Email"), email);
}

std::string ModifyPhoneBusinessProfileRequest::getAddress() const {
  return address_;
}

void ModifyPhoneBusinessProfileRequest::setAddress(const std::string &address) {
  address_ = address;
  setParameter(std::string("Address"), address);
}

std::string ModifyPhoneBusinessProfileRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyPhoneBusinessProfileRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ModifyPhoneBusinessProfileRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyPhoneBusinessProfileRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyPhoneBusinessProfileRequest::getLowcodeLogicAppName() const {
  return lowcodeLogicAppName_;
}

void ModifyPhoneBusinessProfileRequest::setLowcodeLogicAppName(const std::string &lowcodeLogicAppName) {
  lowcodeLogicAppName_ = lowcodeLogicAppName;
  setParameter(std::string("LowcodeLogicAppName"), lowcodeLogicAppName);
}

std::string ModifyPhoneBusinessProfileRequest::getProfilePictureUrl() const {
  return profilePictureUrl_;
}

void ModifyPhoneBusinessProfileRequest::setProfilePictureUrl(const std::string &profilePictureUrl) {
  profilePictureUrl_ = profilePictureUrl;
  setParameter(std::string("ProfilePictureUrl"), profilePictureUrl);
}

std::string ModifyPhoneBusinessProfileRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void ModifyPhoneBusinessProfileRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

std::vector<ModifyPhoneBusinessProfileRequest::std::string> ModifyPhoneBusinessProfileRequest::getWebsites() const {
  return websites_;
}

void ModifyPhoneBusinessProfileRequest::setWebsites(const std::vector<ModifyPhoneBusinessProfileRequest::std::string> &websites) {
  websites_ = websites;
  for(int dep1 = 0; dep1 != websites.size(); dep1++) {
    setParameter(std::string("Websites") + "." + std::to_string(dep1 + 1), websites[dep1]);
  }
}

