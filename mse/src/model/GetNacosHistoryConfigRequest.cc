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

#include <alibabacloud/mse/model/GetNacosHistoryConfigRequest.h>

using AlibabaCloud::Mse::Model::GetNacosHistoryConfigRequest;

GetNacosHistoryConfigRequest::GetNacosHistoryConfigRequest()
    : RpcServiceRequest("mse", "2019-05-31", "GetNacosHistoryConfig") {
  setMethod(HttpRequest::Method::Post);
}

GetNacosHistoryConfigRequest::~GetNacosHistoryConfigRequest() {}

std::string GetNacosHistoryConfigRequest::getMseSessionId() const {
  return mseSessionId_;
}

void GetNacosHistoryConfigRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string GetNacosHistoryConfigRequest::getNid() const {
  return nid_;
}

void GetNacosHistoryConfigRequest::setNid(const std::string &nid) {
  nid_ = nid;
  setParameter(std::string("Nid"), nid);
}

std::string GetNacosHistoryConfigRequest::getNamespaceId() const {
  return namespaceId_;
}

void GetNacosHistoryConfigRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string GetNacosHistoryConfigRequest::getGroup() const {
  return group_;
}

void GetNacosHistoryConfigRequest::setGroup(const std::string &group) {
  group_ = group;
  setParameter(std::string("Group"), group);
}

std::string GetNacosHistoryConfigRequest::getInstanceId() const {
  return instanceId_;
}

void GetNacosHistoryConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetNacosHistoryConfigRequest::getDataId() const {
  return dataId_;
}

void GetNacosHistoryConfigRequest::setDataId(const std::string &dataId) {
  dataId_ = dataId;
  setParameter(std::string("DataId"), dataId);
}

std::string GetNacosHistoryConfigRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void GetNacosHistoryConfigRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

