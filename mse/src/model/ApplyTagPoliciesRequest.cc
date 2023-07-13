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

#include <alibabacloud/mse/model/ApplyTagPoliciesRequest.h>

using AlibabaCloud::Mse::Model::ApplyTagPoliciesRequest;

ApplyTagPoliciesRequest::ApplyTagPoliciesRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ApplyTagPolicies") {
  setMethod(HttpRequest::Method::Post);
}

ApplyTagPoliciesRequest::~ApplyTagPoliciesRequest() {}

std::string ApplyTagPoliciesRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ApplyTagPoliciesRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ApplyTagPoliciesRequest::getRules() const {
  return rules_;
}

void ApplyTagPoliciesRequest::setRules(const std::string &rules) {
  rules_ = rules;
  setParameter(std::string("Rules"), rules);
}

std::string ApplyTagPoliciesRequest::getSource() const {
  return source_;
}

void ApplyTagPoliciesRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string ApplyTagPoliciesRequest::getAppName() const {
  return appName_;
}

void ApplyTagPoliciesRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string ApplyTagPoliciesRequest::getNamespaceId() const {
  return namespaceId_;
}

void ApplyTagPoliciesRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

bool ApplyTagPoliciesRequest::getEnable() const {
  return enable_;
}

void ApplyTagPoliciesRequest::setEnable(bool enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), enable ? "true" : "false");
}

std::string ApplyTagPoliciesRequest::getAppId() const {
  return appId_;
}

void ApplyTagPoliciesRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string ApplyTagPoliciesRequest::get_Namespace() const {
  return _namespace_;
}

void ApplyTagPoliciesRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string ApplyTagPoliciesRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ApplyTagPoliciesRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string ApplyTagPoliciesRequest::getRegion() const {
  return region_;
}

void ApplyTagPoliciesRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

