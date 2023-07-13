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

#include <alibabacloud/mse/model/ListListenersByIpRequest.h>

using AlibabaCloud::Mse::Model::ListListenersByIpRequest;

ListListenersByIpRequest::ListListenersByIpRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListListenersByIp") {
  setMethod(HttpRequest::Method::Post);
}

ListListenersByIpRequest::~ListListenersByIpRequest() {}

std::string ListListenersByIpRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListListenersByIpRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ListListenersByIpRequest::getNamespaceId() const {
  return namespaceId_;
}

void ListListenersByIpRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string ListListenersByIpRequest::getRequestPars() const {
  return requestPars_;
}

void ListListenersByIpRequest::setRequestPars(const std::string &requestPars) {
  requestPars_ = requestPars;
  setParameter(std::string("RequestPars"), requestPars);
}

std::string ListListenersByIpRequest::getIp() const {
  return ip_;
}

void ListListenersByIpRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

std::string ListListenersByIpRequest::getInstanceId() const {
  return instanceId_;
}

void ListListenersByIpRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListListenersByIpRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListListenersByIpRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

