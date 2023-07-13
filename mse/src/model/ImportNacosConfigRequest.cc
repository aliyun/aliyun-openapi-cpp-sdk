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

#include <alibabacloud/mse/model/ImportNacosConfigRequest.h>

using AlibabaCloud::Mse::Model::ImportNacosConfigRequest;

ImportNacosConfigRequest::ImportNacosConfigRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ImportNacosConfig") {
  setMethod(HttpRequest::Method::Post);
}

ImportNacosConfigRequest::~ImportNacosConfigRequest() {}

std::string ImportNacosConfigRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ImportNacosConfigRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ImportNacosConfigRequest::getNamespaceId() const {
  return namespaceId_;
}

void ImportNacosConfigRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string ImportNacosConfigRequest::getPolicy() const {
  return policy_;
}

void ImportNacosConfigRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

std::string ImportNacosConfigRequest::getInstanceId() const {
  return instanceId_;
}

void ImportNacosConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ImportNacosConfigRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ImportNacosConfigRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string ImportNacosConfigRequest::getFileUrl() const {
  return fileUrl_;
}

void ImportNacosConfigRequest::setFileUrl(const std::string &fileUrl) {
  fileUrl_ = fileUrl;
  setParameter(std::string("FileUrl"), fileUrl);
}

