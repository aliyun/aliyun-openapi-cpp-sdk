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

#include <alibabacloud/mse/model/CreateNacosConfigRequest.h>

using AlibabaCloud::Mse::Model::CreateNacosConfigRequest;

CreateNacosConfigRequest::CreateNacosConfigRequest()
    : RpcServiceRequest("mse", "2019-05-31", "CreateNacosConfig") {
  setMethod(HttpRequest::Method::Post);
}

CreateNacosConfigRequest::~CreateNacosConfigRequest() {}

std::string CreateNacosConfigRequest::getMseSessionId() const {
  return mseSessionId_;
}

void CreateNacosConfigRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string CreateNacosConfigRequest::getType() const {
  return type_;
}

void CreateNacosConfigRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string CreateNacosConfigRequest::getContent() const {
  return content_;
}

void CreateNacosConfigRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

std::string CreateNacosConfigRequest::getAppName() const {
  return appName_;
}

void CreateNacosConfigRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string CreateNacosConfigRequest::getNamespaceId() const {
  return namespaceId_;
}

void CreateNacosConfigRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string CreateNacosConfigRequest::getGroup() const {
  return group_;
}

void CreateNacosConfigRequest::setGroup(const std::string &group) {
  group_ = group;
  setParameter(std::string("Group"), group);
}

std::string CreateNacosConfigRequest::getTags() const {
  return tags_;
}

void CreateNacosConfigRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string CreateNacosConfigRequest::getBetaIps() const {
  return betaIps_;
}

void CreateNacosConfigRequest::setBetaIps(const std::string &betaIps) {
  betaIps_ = betaIps;
  setParameter(std::string("BetaIps"), betaIps);
}

std::string CreateNacosConfigRequest::getInstanceId() const {
  return instanceId_;
}

void CreateNacosConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateNacosConfigRequest::getDataId() const {
  return dataId_;
}

void CreateNacosConfigRequest::setDataId(const std::string &dataId) {
  dataId_ = dataId;
  setParameter(std::string("DataId"), dataId);
}

std::string CreateNacosConfigRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void CreateNacosConfigRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string CreateNacosConfigRequest::getDesc() const {
  return desc_;
}

void CreateNacosConfigRequest::setDesc(const std::string &desc) {
  desc_ = desc;
  setParameter(std::string("Desc"), desc);
}

