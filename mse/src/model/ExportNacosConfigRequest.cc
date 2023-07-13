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

#include <alibabacloud/mse/model/ExportNacosConfigRequest.h>

using AlibabaCloud::Mse::Model::ExportNacosConfigRequest;

ExportNacosConfigRequest::ExportNacosConfigRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ExportNacosConfig") {
  setMethod(HttpRequest::Method::Post);
}

ExportNacosConfigRequest::~ExportNacosConfigRequest() {}

std::string ExportNacosConfigRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ExportNacosConfigRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ExportNacosConfigRequest::getDataIds() const {
  return dataIds_;
}

void ExportNacosConfigRequest::setDataIds(const std::string &dataIds) {
  dataIds_ = dataIds;
  setParameter(std::string("DataIds"), dataIds);
}

std::string ExportNacosConfigRequest::getAppName() const {
  return appName_;
}

void ExportNacosConfigRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string ExportNacosConfigRequest::getNamespaceId() const {
  return namespaceId_;
}

void ExportNacosConfigRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string ExportNacosConfigRequest::getGroup() const {
  return group_;
}

void ExportNacosConfigRequest::setGroup(const std::string &group) {
  group_ = group;
  setParameter(std::string("Group"), group);
}

std::string ExportNacosConfigRequest::getInstanceId() const {
  return instanceId_;
}

void ExportNacosConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ExportNacosConfigRequest::getDataId() const {
  return dataId_;
}

void ExportNacosConfigRequest::setDataId(const std::string &dataId) {
  dataId_ = dataId;
  setParameter(std::string("DataId"), dataId);
}

std::string ExportNacosConfigRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ExportNacosConfigRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string ExportNacosConfigRequest::getIds() const {
  return ids_;
}

void ExportNacosConfigRequest::setIds(const std::string &ids) {
  ids_ = ids;
  setParameter(std::string("Ids"), ids);
}

