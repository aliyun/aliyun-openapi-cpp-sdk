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

#include <alibabacloud/alidns/model/UpdateGtmInstanceGlobalConfigRequest.h>

using AlibabaCloud::Alidns::Model::UpdateGtmInstanceGlobalConfigRequest;

UpdateGtmInstanceGlobalConfigRequest::UpdateGtmInstanceGlobalConfigRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "UpdateGtmInstanceGlobalConfig") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGtmInstanceGlobalConfigRequest::~UpdateGtmInstanceGlobalConfigRequest() {}

std::string UpdateGtmInstanceGlobalConfigRequest::getAlertGroup() const {
  return alertGroup_;
}

void UpdateGtmInstanceGlobalConfigRequest::setAlertGroup(const std::string &alertGroup) {
  alertGroup_ = alertGroup;
  setParameter(std::string("AlertGroup"), alertGroup);
}

std::string UpdateGtmInstanceGlobalConfigRequest::getCnameMode() const {
  return cnameMode_;
}

void UpdateGtmInstanceGlobalConfigRequest::setCnameMode(const std::string &cnameMode) {
  cnameMode_ = cnameMode;
  setParameter(std::string("CnameMode"), cnameMode);
}

std::string UpdateGtmInstanceGlobalConfigRequest::getLbaStrategy() const {
  return lbaStrategy_;
}

void UpdateGtmInstanceGlobalConfigRequest::setLbaStrategy(const std::string &lbaStrategy) {
  lbaStrategy_ = lbaStrategy;
  setParameter(std::string("LbaStrategy"), lbaStrategy);
}

int UpdateGtmInstanceGlobalConfigRequest::getTtl() const {
  return ttl_;
}

void UpdateGtmInstanceGlobalConfigRequest::setTtl(int ttl) {
  ttl_ = ttl;
  setParameter(std::string("Ttl"), std::to_string(ttl));
}

std::string UpdateGtmInstanceGlobalConfigRequest::getCnameCustomDomainName() const {
  return cnameCustomDomainName_;
}

void UpdateGtmInstanceGlobalConfigRequest::setCnameCustomDomainName(const std::string &cnameCustomDomainName) {
  cnameCustomDomainName_ = cnameCustomDomainName;
  setParameter(std::string("CnameCustomDomainName"), cnameCustomDomainName);
}

std::string UpdateGtmInstanceGlobalConfigRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateGtmInstanceGlobalConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateGtmInstanceGlobalConfigRequest::getInstanceName() const {
  return instanceName_;
}

void UpdateGtmInstanceGlobalConfigRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string UpdateGtmInstanceGlobalConfigRequest::getUserDomainName() const {
  return userDomainName_;
}

void UpdateGtmInstanceGlobalConfigRequest::setUserDomainName(const std::string &userDomainName) {
  userDomainName_ = userDomainName;
  setParameter(std::string("UserDomainName"), userDomainName);
}

std::string UpdateGtmInstanceGlobalConfigRequest::getUserClientIp() const {
  return userClientIp_;
}

void UpdateGtmInstanceGlobalConfigRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string UpdateGtmInstanceGlobalConfigRequest::getLang() const {
  return lang_;
}

void UpdateGtmInstanceGlobalConfigRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

