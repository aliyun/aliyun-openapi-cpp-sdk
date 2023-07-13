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

#include <alibabacloud/mse/model/DeleteNacosConfigRequest.h>

using AlibabaCloud::Mse::Model::DeleteNacosConfigRequest;

DeleteNacosConfigRequest::DeleteNacosConfigRequest()
    : RpcServiceRequest("mse", "2019-05-31", "DeleteNacosConfig") {
  setMethod(HttpRequest::Method::Post);
}

DeleteNacosConfigRequest::~DeleteNacosConfigRequest() {}

std::string DeleteNacosConfigRequest::getMseSessionId() const {
  return mseSessionId_;
}

void DeleteNacosConfigRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string DeleteNacosConfigRequest::getNamespaceId() const {
  return namespaceId_;
}

void DeleteNacosConfigRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

bool DeleteNacosConfigRequest::getBeta() const {
  return beta_;
}

void DeleteNacosConfigRequest::setBeta(bool beta) {
  beta_ = beta;
  setParameter(std::string("Beta"), beta ? "true" : "false");
}

std::string DeleteNacosConfigRequest::getGroup() const {
  return group_;
}

void DeleteNacosConfigRequest::setGroup(const std::string &group) {
  group_ = group;
  setParameter(std::string("Group"), group);
}

std::string DeleteNacosConfigRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteNacosConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteNacosConfigRequest::getDataId() const {
  return dataId_;
}

void DeleteNacosConfigRequest::setDataId(const std::string &dataId) {
  dataId_ = dataId;
  setParameter(std::string("DataId"), dataId);
}

std::string DeleteNacosConfigRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DeleteNacosConfigRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

