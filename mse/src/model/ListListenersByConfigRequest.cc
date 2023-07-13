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

#include <alibabacloud/mse/model/ListListenersByConfigRequest.h>

using AlibabaCloud::Mse::Model::ListListenersByConfigRequest;

ListListenersByConfigRequest::ListListenersByConfigRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListListenersByConfig") {
  setMethod(HttpRequest::Method::Post);
}

ListListenersByConfigRequest::~ListListenersByConfigRequest() {}

std::string ListListenersByConfigRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListListenersByConfigRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ListListenersByConfigRequest::getNamespaceId() const {
  return namespaceId_;
}

void ListListenersByConfigRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string ListListenersByConfigRequest::getRequestPars() const {
  return requestPars_;
}

void ListListenersByConfigRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string ListListenersByConfigRequest::getGroup() const {
  return group_;
}

void ListListenersByConfigRequest::setGroup(const std::string &group) {
  group_ = group;
  setParameter(std::string("Group"), group);
}

std::string ListListenersByConfigRequest::getInstanceId() const {
  return instanceId_;
}

void ListListenersByConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListListenersByConfigRequest::getDataId() const {
  return dataId_;
}

void ListListenersByConfigRequest::setDataId(const std::string &dataId) {
  dataId_ = dataId;
  setParameter(std::string("DataId"), dataId);
}

std::string ListListenersByConfigRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListListenersByConfigRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

