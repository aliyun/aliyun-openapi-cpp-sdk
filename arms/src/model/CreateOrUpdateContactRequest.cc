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

#include <alibabacloud/arms/model/CreateOrUpdateContactRequest.h>

using AlibabaCloud::ARMS::Model::CreateOrUpdateContactRequest;

CreateOrUpdateContactRequest::CreateOrUpdateContactRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreateOrUpdateContact") {
  setMethod(HttpRequest::Method::Post);
}

CreateOrUpdateContactRequest::~CreateOrUpdateContactRequest() {}

long CreateOrUpdateContactRequest::getContactId() const {
  return contactId_;
}

void CreateOrUpdateContactRequest::setContactId(long contactId) {
  contactId_ = contactId;
  setBodyParameter(std::string("ContactId"), std::to_string(contactId));
}

long CreateOrUpdateContactRequest::getReissueSendNotice() const {
  return reissueSendNotice_;
}

void CreateOrUpdateContactRequest::setReissueSendNotice(long reissueSendNotice) {
  reissueSendNotice_ = reissueSendNotice;
  setBodyParameter(std::string("ReissueSendNotice"), std::to_string(reissueSendNotice));
}

bool CreateOrUpdateContactRequest::getIsVerify() const {
  return isVerify_;
}

void CreateOrUpdateContactRequest::setIsVerify(bool isVerify) {
  isVerify_ = isVerify;
  setBodyParameter(std::string("IsVerify"), isVerify ? "true" : "false");
}

std::string CreateOrUpdateContactRequest::getProxyUserId() const {
  return proxyUserId_;
}

void CreateOrUpdateContactRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setBodyParameter(std::string("ProxyUserId"), proxyUserId);
}

std::string CreateOrUpdateContactRequest::getCorpUserId() const {
  return corpUserId_;
}

void CreateOrUpdateContactRequest::setCorpUserId(const std::string &corpUserId) {
  corpUserId_ = corpUserId;
  setBodyParameter(std::string("CorpUserId"), corpUserId);
}

std::string CreateOrUpdateContactRequest::getContactName() const {
  return contactName_;
}

void CreateOrUpdateContactRequest::setContactName(const std::string &contactName) {
  contactName_ = contactName;
  setBodyParameter(std::string("ContactName"), contactName);
}

std::string CreateOrUpdateContactRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateOrUpdateContactRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateOrUpdateContactRequest::getDingRobotUrl() const {
  return dingRobotUrl_;
}

void CreateOrUpdateContactRequest::setDingRobotUrl(const std::string &dingRobotUrl) {
  dingRobotUrl_ = dingRobotUrl;
  setParameter(std::string("DingRobotUrl"), dingRobotUrl);
}

std::string CreateOrUpdateContactRequest::getPhone() const {
  return phone_;
}

void CreateOrUpdateContactRequest::setPhone(const std::string &phone) {
  phone_ = phone;
  setBodyParameter(std::string("Phone"), phone);
}

std::string CreateOrUpdateContactRequest::getEmail() const {
  return email_;
}

void CreateOrUpdateContactRequest::setEmail(const std::string &email) {
  email_ = email;
  setBodyParameter(std::string("Email"), email);
}

bool CreateOrUpdateContactRequest::getIsEmailVerify() const {
  return isEmailVerify_;
}

void CreateOrUpdateContactRequest::setIsEmailVerify(bool isEmailVerify) {
  isEmailVerify_ = isEmailVerify;
  setBodyParameter(std::string("IsEmailVerify"), isEmailVerify ? "true" : "false");
}

