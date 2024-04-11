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

std::string ModifyPhoneBusinessProfileRequest::getApiCode() const {
  return apiCode_;
}

void ModifyPhoneBusinessProfileRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
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

std::string ModifyPhoneBusinessProfileRequest::getProdCode() const {
  return prodCode_;
}

void ModifyPhoneBusinessProfileRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
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

