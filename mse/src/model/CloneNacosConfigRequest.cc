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

#include <alibabacloud/mse/model/CloneNacosConfigRequest.h>

using AlibabaCloud::Mse::Model::CloneNacosConfigRequest;

CloneNacosConfigRequest::CloneNacosConfigRequest()
    : RpcServiceRequest("mse", "2019-05-31", "CloneNacosConfig") {
  setMethod(HttpRequest::Method::Post);
}

CloneNacosConfigRequest::~CloneNacosConfigRequest() {}

std::string CloneNacosConfigRequest::getMseSessionId() const {
  return mseSessionId_;
}

void CloneNacosConfigRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string CloneNacosConfigRequest::getTargetNamespaceId() const {
  return targetNamespaceId_;
}

void CloneNacosConfigRequest::setTargetNamespaceId(const std::string &targetNamespaceId) {
  targetNamespaceId_ = targetNamespaceId;
  setParameter(std::string("TargetNamespaceId"), targetNamespaceId);
}

std::string CloneNacosConfigRequest::getOriginNamespaceId() const {
  return originNamespaceId_;
}

void CloneNacosConfigRequest::setOriginNamespaceId(const std::string &originNamespaceId) {
  originNamespaceId_ = originNamespaceId;
  setParameter(std::string("OriginNamespaceId"), originNamespaceId);
}

std::string CloneNacosConfigRequest::getPolicy() const {
  return policy_;
}

void CloneNacosConfigRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

std::string CloneNacosConfigRequest::getInstanceId() const {
  return instanceId_;
}

void CloneNacosConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CloneNacosConfigRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void CloneNacosConfigRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string CloneNacosConfigRequest::getIds() const {
  return ids_;
}

void CloneNacosConfigRequest::setIds(const std::string &ids) {
  ids_ = ids;
  setParameter(std::string("Ids"), ids);
}

