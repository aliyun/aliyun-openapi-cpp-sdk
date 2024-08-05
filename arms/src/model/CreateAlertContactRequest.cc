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

#include <alibabacloud/arms/model/CreateAlertContactRequest.h>

using AlibabaCloud::ARMS::Model::CreateAlertContactRequest;

CreateAlertContactRequest::CreateAlertContactRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreateAlertContact") {
  setMethod(HttpRequest::Method::Post);
}

CreateAlertContactRequest::~CreateAlertContactRequest() {}

std::string CreateAlertContactRequest::getPhoneNum() const {
  return phoneNum_;
}

void CreateAlertContactRequest::setPhoneNum(const std::string &phoneNum) {
  phoneNum_ = phoneNum;
  setParameter(std::string("PhoneNum"), phoneNum);
}

std::string CreateAlertContactRequest::getProxyUserId() const {
  return proxyUserId_;
}

void CreateAlertContactRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

std::string CreateAlertContactRequest::getContactName() const {
  return contactName_;
}

void CreateAlertContactRequest::setContactName(const std::string &contactName) {
  contactName_ = contactName;
  setParameter(std::string("ContactName"), contactName);
}

std::string CreateAlertContactRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateAlertContactRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateAlertContactRequest::getRegionId() const {
  return regionId_;
}

void CreateAlertContactRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateAlertContactRequest::getDingRobotWebhookUrl() const {
  return dingRobotWebhookUrl_;
}

void CreateAlertContactRequest::setDingRobotWebhookUrl(const std::string &dingRobotWebhookUrl) {
  dingRobotWebhookUrl_ = dingRobotWebhookUrl;
  setParameter(std::string("DingRobotWebhookUrl"), dingRobotWebhookUrl);
}

std::string CreateAlertContactRequest::getEmail() const {
  return email_;
}

void CreateAlertContactRequest::setEmail(const std::string &email) {
  email_ = email;
  setParameter(std::string("Email"), email);
}

bool CreateAlertContactRequest::getSystemNoc() const {
  return systemNoc_;
}

void CreateAlertContactRequest::setSystemNoc(bool systemNoc) {
  systemNoc_ = systemNoc;
  setParameter(std::string("SystemNoc"), systemNoc ? "true" : "false");
}

