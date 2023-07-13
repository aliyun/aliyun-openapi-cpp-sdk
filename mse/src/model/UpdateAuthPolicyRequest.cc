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

#include <alibabacloud/mse/model/UpdateAuthPolicyRequest.h>

using AlibabaCloud::Mse::Model::UpdateAuthPolicyRequest;

UpdateAuthPolicyRequest::UpdateAuthPolicyRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateAuthPolicy") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAuthPolicyRequest::~UpdateAuthPolicyRequest() {}

std::string UpdateAuthPolicyRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateAuthPolicyRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateAuthPolicyRequest::getAuthRule() const {
  return authRule_;
}

void UpdateAuthPolicyRequest::setAuthRule(const std::string &authRule) {
  authRule_ = authRule;
  setParameter(std::string("AuthRule"), authRule);
}

std::string UpdateAuthPolicyRequest::getSource() const {
  return source_;
}

void UpdateAuthPolicyRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string UpdateAuthPolicyRequest::getProtocol() const {
  return protocol_;
}

void UpdateAuthPolicyRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string UpdateAuthPolicyRequest::getEnable() const {
  return enable_;
}

void UpdateAuthPolicyRequest::setEnable(const std::string &enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), enable);
}

std::string UpdateAuthPolicyRequest::getId() const {
  return id_;
}

void UpdateAuthPolicyRequest::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("Id"), id);
}

std::string UpdateAuthPolicyRequest::getK8sNamespace() const {
  return k8sNamespace_;
}

void UpdateAuthPolicyRequest::setK8sNamespace(const std::string &k8sNamespace) {
  k8sNamespace_ = k8sNamespace;
  setParameter(std::string("K8sNamespace"), k8sNamespace);
}

std::string UpdateAuthPolicyRequest::getAppId() const {
  return appId_;
}

void UpdateAuthPolicyRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string UpdateAuthPolicyRequest::getName() const {
  return name_;
}

void UpdateAuthPolicyRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateAuthPolicyRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateAuthPolicyRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string UpdateAuthPolicyRequest::getRegion() const {
  return region_;
}

void UpdateAuthPolicyRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

