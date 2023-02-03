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

#include <alibabacloud/mse/model/UpdateServiceSourceRequest.h>

using AlibabaCloud::Mse::Model::UpdateServiceSourceRequest;

UpdateServiceSourceRequest::UpdateServiceSourceRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateServiceSource") {
  setMethod(HttpRequest::Method::Post);
}

UpdateServiceSourceRequest::~UpdateServiceSourceRequest() {}

UpdateServiceSourceRequest::IngressOptionsRequest UpdateServiceSourceRequest::getIngressOptionsRequest() const {
  return ingressOptionsRequest_;
}

void UpdateServiceSourceRequest::setIngressOptionsRequest(const UpdateServiceSourceRequest::IngressOptionsRequest &ingressOptionsRequest) {
  ingressOptionsRequest_ = ingressOptionsRequest;
  setParameter(std::string("IngressOptionsRequest") + ".EnableStatus", ingressOptionsRequest.enableStatus ? "true" : "false");
  setParameter(std::string("IngressOptionsRequest") + ".EnableIngress", ingressOptionsRequest.enableIngress ? "true" : "false");
  setParameter(std::string("IngressOptionsRequest") + ".WatchNamespace", ingressOptionsRequest.watchNamespace);
  setParameter(std::string("IngressOptionsRequest") + ".IngressClass", ingressOptionsRequest.ingressClass);
}

std::string UpdateServiceSourceRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateServiceSourceRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateServiceSourceRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void UpdateServiceSourceRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string UpdateServiceSourceRequest::getSource() const {
  return source_;
}

void UpdateServiceSourceRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string UpdateServiceSourceRequest::getType() const {
  return type_;
}

void UpdateServiceSourceRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

long UpdateServiceSourceRequest::getId() const {
  return id_;
}

void UpdateServiceSourceRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::vector<UpdateServiceSourceRequest::std::string> UpdateServiceSourceRequest::getPathList() const {
  return pathList_;
}

void UpdateServiceSourceRequest::setPathList(const std::vector<UpdateServiceSourceRequest::std::string> &pathList) {
  pathList_ = pathList;
  for(int dep1 = 0; dep1 != pathList.size(); dep1++) {
    setParameter(std::string("PathList") + "." + std::to_string(dep1 + 1), pathList[dep1]);
  }
}

long UpdateServiceSourceRequest::getGatewayId() const {
  return gatewayId_;
}

void UpdateServiceSourceRequest::setGatewayId(long gatewayId) {
  gatewayId_ = gatewayId;
  setParameter(std::string("GatewayId"), std::to_string(gatewayId));
}

std::string UpdateServiceSourceRequest::getAddress() const {
  return address_;
}

void UpdateServiceSourceRequest::setAddress(const std::string &address) {
  address_ = address;
  setParameter(std::string("Address"), address);
}

std::string UpdateServiceSourceRequest::getName() const {
  return name_;
}

void UpdateServiceSourceRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateServiceSourceRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateServiceSourceRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

