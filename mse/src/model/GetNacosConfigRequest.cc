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

#include <alibabacloud/mse/model/GetNacosConfigRequest.h>

using AlibabaCloud::Mse::Model::GetNacosConfigRequest;

GetNacosConfigRequest::GetNacosConfigRequest()
    : RpcServiceRequest("mse", "2019-05-31", "GetNacosConfig") {
  setMethod(HttpRequest::Method::Post);
}

GetNacosConfigRequest::~GetNacosConfigRequest() {}

std::string GetNacosConfigRequest::getMseSessionId() const {
  return mseSessionId_;
}

void GetNacosConfigRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string GetNacosConfigRequest::getNamespaceId() const {
  return namespaceId_;
}

void GetNacosConfigRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

bool GetNacosConfigRequest::getBeta() const {
  return beta_;
}

void GetNacosConfigRequest::setBeta(bool beta) {
  beta_ = beta;
  setParameter(std::string("Beta"), beta ? "true" : "false");
}

std::string GetNacosConfigRequest::getGroup() const {
  return group_;
}

void GetNacosConfigRequest::setGroup(const std::string &group) {
  group_ = group;
  setParameter(std::string("Group"), group);
}

std::string GetNacosConfigRequest::getInstanceId() const {
  return instanceId_;
}

void GetNacosConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetNacosConfigRequest::getDataId() const {
  return dataId_;
}

void GetNacosConfigRequest::setDataId(const std::string &dataId) {
  dataId_ = dataId;
  setParameter(std::string("DataId"), dataId);
}

std::string GetNacosConfigRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void GetNacosConfigRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

