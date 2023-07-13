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

#include <alibabacloud/mse/model/AddAuthPolicyRequest.h>

using AlibabaCloud::Mse::Model::AddAuthPolicyRequest;

AddAuthPolicyRequest::AddAuthPolicyRequest()
    : RpcServiceRequest("mse", "2019-05-31", "AddAuthPolicy") {
  setMethod(HttpRequest::Method::Post);
}

AddAuthPolicyRequest::~AddAuthPolicyRequest() {}

std::string AddAuthPolicyRequest::getMseSessionId() const {
  return mseSessionId_;
}

void AddAuthPolicyRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string AddAuthPolicyRequest::getAuthRule() const {
  return authRule_;
}

void AddAuthPolicyRequest::setAuthRule(const std::string &authRule) {
  authRule_ = authRule;
  setParameter(std::string("AuthRule"), authRule);
}

std::string AddAuthPolicyRequest::getSource() const {
  return source_;
}

void AddAuthPolicyRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

int AddAuthPolicyRequest::getAuthType() const {
  return authType_;
}

void AddAuthPolicyRequest::setAuthType(int authType) {
  authType_ = authType;
  setParameter(std::string("AuthType"), std::to_string(authType));
}

std::string AddAuthPolicyRequest::getProtocol() const {
  return protocol_;
}

void AddAuthPolicyRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string AddAuthPolicyRequest::getEnable() const {
  return enable_;
}

void AddAuthPolicyRequest::setEnable(const std::string &enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), enable);
}

std::string AddAuthPolicyRequest::getK8sNamespace() const {
  return k8sNamespace_;
}

void AddAuthPolicyRequest::setK8sNamespace(const std::string &k8sNamespace) {
  k8sNamespace_ = k8sNamespace;
  setParameter(std::string("K8sNamespace"), k8sNamespace);
}

std::string AddAuthPolicyRequest::getAppId() const {
  return appId_;
}

void AddAuthPolicyRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string AddAuthPolicyRequest::getName() const {
  return name_;
}

void AddAuthPolicyRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string AddAuthPolicyRequest::get_Namespace() const {
  return _namespace_;
}

void AddAuthPolicyRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string AddAuthPolicyRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void AddAuthPolicyRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string AddAuthPolicyRequest::getRegion() const {
  return region_;
}

void AddAuthPolicyRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

