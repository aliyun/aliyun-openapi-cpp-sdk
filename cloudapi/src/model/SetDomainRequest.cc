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

#include <alibabacloud/cloudapi/model/SetDomainRequest.h>

using AlibabaCloud::CloudAPI::Model::SetDomainRequest;

SetDomainRequest::SetDomainRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "SetDomain") {
  setMethod(HttpRequest::Method::Post);
}

SetDomainRequest::~SetDomainRequest() {}

std::string SetDomainRequest::getGroupId() const {
  return groupId_;
}

void SetDomainRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string SetDomainRequest::getDomainName() const {
  return domainName_;
}

void SetDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

bool SetDomainRequest::getIsHttpRedirectToHttps() const {
  return isHttpRedirectToHttps_;
}

void SetDomainRequest::setIsHttpRedirectToHttps(bool isHttpRedirectToHttps) {
  isHttpRedirectToHttps_ = isHttpRedirectToHttps;
  setParameter(std::string("IsHttpRedirectToHttps"), isHttpRedirectToHttps ? "true" : "false");
}

std::string SetDomainRequest::getCustomDomainType() const {
  return customDomainType_;
}

void SetDomainRequest::setCustomDomainType(const std::string &customDomainType) {
  customDomainType_ = customDomainType;
  setParameter(std::string("CustomDomainType"), customDomainType);
}

std::string SetDomainRequest::getBindStageName() const {
  return bindStageName_;
}

void SetDomainRequest::setBindStageName(const std::string &bindStageName) {
  bindStageName_ = bindStageName;
  setParameter(std::string("BindStageName"), bindStageName);
}

std::string SetDomainRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SetDomainRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SetDomainRequest::getSecurityToken() const {
  return securityToken_;
}

void SetDomainRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

bool SetDomainRequest::getIsForce() const {
  return isForce_;
}

void SetDomainRequest::setIsForce(bool isForce) {
  isForce_ = isForce;
  setParameter(std::string("IsForce"), isForce ? "true" : "false");
}

