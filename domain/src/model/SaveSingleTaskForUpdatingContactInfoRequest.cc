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

#include <alibabacloud/domain/model/SaveSingleTaskForUpdatingContactInfoRequest.h>

using AlibabaCloud::Domain::Model::SaveSingleTaskForUpdatingContactInfoRequest;

SaveSingleTaskForUpdatingContactInfoRequest::SaveSingleTaskForUpdatingContactInfoRequest()
    : RpcServiceRequest("domain", "2018-01-29", "SaveSingleTaskForUpdatingContactInfo") {
  setMethod(HttpRequest::Method::Post);
}

SaveSingleTaskForUpdatingContactInfoRequest::~SaveSingleTaskForUpdatingContactInfoRequest() {}

std::string SaveSingleTaskForUpdatingContactInfoRequest::getContactType() const {
  return contactType_;
}

void SaveSingleTaskForUpdatingContactInfoRequest::setContactType(const std::string &contactType) {
  contactType_ = contactType;
  setParameter(std::string("ContactType"), contactType);
}

std::string SaveSingleTaskForUpdatingContactInfoRequest::getDomainName() const {
  return domainName_;
}

void SaveSingleTaskForUpdatingContactInfoRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long SaveSingleTaskForUpdatingContactInfoRequest::getRegistrantProfileId() const {
  return registrantProfileId_;
}

void SaveSingleTaskForUpdatingContactInfoRequest::setRegistrantProfileId(long registrantProfileId) {
  registrantProfileId_ = registrantProfileId;
  setParameter(std::string("RegistrantProfileId"), std::to_string(registrantProfileId));
}

bool SaveSingleTaskForUpdatingContactInfoRequest::getAddTransferLock() const {
  return addTransferLock_;
}

void SaveSingleTaskForUpdatingContactInfoRequest::setAddTransferLock(bool addTransferLock) {
  addTransferLock_ = addTransferLock;
  setParameter(std::string("AddTransferLock"), addTransferLock ? "true" : "false");
}

std::string SaveSingleTaskForUpdatingContactInfoRequest::getInstanceId() const {
  return instanceId_;
}

void SaveSingleTaskForUpdatingContactInfoRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string SaveSingleTaskForUpdatingContactInfoRequest::getUserClientIp() const {
  return userClientIp_;
}

void SaveSingleTaskForUpdatingContactInfoRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string SaveSingleTaskForUpdatingContactInfoRequest::getLang() const {
  return lang_;
}

void SaveSingleTaskForUpdatingContactInfoRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

