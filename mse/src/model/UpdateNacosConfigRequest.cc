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

#include <alibabacloud/mse/model/UpdateNacosConfigRequest.h>

using AlibabaCloud::Mse::Model::UpdateNacosConfigRequest;

UpdateNacosConfigRequest::UpdateNacosConfigRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateNacosConfig") {
  setMethod(HttpRequest::Method::Post);
}

UpdateNacosConfigRequest::~UpdateNacosConfigRequest() {}

std::string UpdateNacosConfigRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateNacosConfigRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateNacosConfigRequest::getEncryptedDataKey() const {
  return encryptedDataKey_;
}

void UpdateNacosConfigRequest::setEncryptedDataKey(const std::string &encryptedDataKey) {
  encryptedDataKey_ = encryptedDataKey;
  setParameter(std::string("EncryptedDataKey"), encryptedDataKey);
}

std::string UpdateNacosConfigRequest::getType() const {
  return type_;
}

void UpdateNacosConfigRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string UpdateNacosConfigRequest::getAppName() const {
  return appName_;
}

void UpdateNacosConfigRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string UpdateNacosConfigRequest::getNamespaceId() const {
  return namespaceId_;
}

void UpdateNacosConfigRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string UpdateNacosConfigRequest::getGroup() const {
  return group_;
}

void UpdateNacosConfigRequest::setGroup(const std::string &group) {
  group_ = group;
  setParameter(std::string("Group"), group);
}

std::string UpdateNacosConfigRequest::getTags() const {
  return tags_;
}

void UpdateNacosConfigRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string UpdateNacosConfigRequest::getBetaIps() const {
  return betaIps_;
}

void UpdateNacosConfigRequest::setBetaIps(const std::string &betaIps) {
  betaIps_ = betaIps;
  setParameter(std::string("BetaIps"), betaIps);
}

std::string UpdateNacosConfigRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateNacosConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateNacosConfigRequest::getDesc() const {
  return desc_;
}

void UpdateNacosConfigRequest::setDesc(const std::string &desc) {
  desc_ = desc;
  setParameter(std::string("Desc"), desc);
}

std::string UpdateNacosConfigRequest::getContent() const {
  return content_;
}

void UpdateNacosConfigRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

std::string UpdateNacosConfigRequest::getDataId() const {
  return dataId_;
}

void UpdateNacosConfigRequest::setDataId(const std::string &dataId) {
  dataId_ = dataId;
  setParameter(std::string("DataId"), dataId);
}

std::string UpdateNacosConfigRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateNacosConfigRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string UpdateNacosConfigRequest::getMd5() const {
  return md5_;
}

void UpdateNacosConfigRequest::setMd5(const std::string &md5) {
  md5_ = md5;
  setParameter(std::string("Md5"), md5);
}

