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

#include <alibabacloud/arms/model/UpdateAlertContactRequest.h>

using AlibabaCloud::ARMS::Model::UpdateAlertContactRequest;

UpdateAlertContactRequest::UpdateAlertContactRequest()
    : RpcServiceRequest("arms", "2019-08-08", "UpdateAlertContact") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAlertContactRequest::~UpdateAlertContactRequest() {}

long UpdateAlertContactRequest::getContactId() const {
  return contactId_;
}

void UpdateAlertContactRequest::setContactId(long contactId) {
  contactId_ = contactId;
  setParameter(std::string("ContactId"), std::to_string(contactId));
}

std::string UpdateAlertContactRequest::getPhoneNum() const {
  return phoneNum_;
}

void UpdateAlertContactRequest::setPhoneNum(const std::string &phoneNum) {
  phoneNum_ = phoneNum;
  setParameter(std::string("PhoneNum"), phoneNum);
}

std::string UpdateAlertContactRequest::getProxyUserId() const {
  return proxyUserId_;
}

void UpdateAlertContactRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

std::string UpdateAlertContactRequest::getContactName() const {
  return contactName_;
}

void UpdateAlertContactRequest::setContactName(const std::string &contactName) {
  contactName_ = contactName;
  setParameter(std::string("ContactName"), contactName);
}

std::string UpdateAlertContactRequest::getRegionId() const {
  return regionId_;
}

void UpdateAlertContactRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateAlertContactRequest::getDingRobotWebhookUrl() const {
  return dingRobotWebhookUrl_;
}

void UpdateAlertContactRequest::setDingRobotWebhookUrl(const std::string &dingRobotWebhookUrl) {
  dingRobotWebhookUrl_ = dingRobotWebhookUrl;
  setParameter(std::string("DingRobotWebhookUrl"), dingRobotWebhookUrl);
}

std::string UpdateAlertContactRequest::getEmail() const {
  return email_;
}

void UpdateAlertContactRequest::setEmail(const std::string &email) {
  email_ = email;
  setParameter(std::string("Email"), email);
}

bool UpdateAlertContactRequest::getSystemNoc() const {
  return systemNoc_;
}

void UpdateAlertContactRequest::setSystemNoc(bool systemNoc) {
  systemNoc_ = systemNoc;
  setParameter(std::string("SystemNoc"), systemNoc ? "true" : "false");
}

