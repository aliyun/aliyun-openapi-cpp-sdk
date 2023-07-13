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

#include <alibabacloud/mse/model/AddGatewaySlbRequest.h>

using AlibabaCloud::Mse::Model::AddGatewaySlbRequest;

AddGatewaySlbRequest::AddGatewaySlbRequest()
    : RpcServiceRequest("mse", "2019-05-31", "AddGatewaySlb") {
  setMethod(HttpRequest::Method::Post);
}

AddGatewaySlbRequest::~AddGatewaySlbRequest() {}

std::string AddGatewaySlbRequest::getMseSessionId() const {
  return mseSessionId_;
}

void AddGatewaySlbRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string AddGatewaySlbRequest::getSlbId() const {
  return slbId_;
}

void AddGatewaySlbRequest::setSlbId(const std::string &slbId) {
  slbId_ = slbId;
  setParameter(std::string("SlbId"), slbId);
}

std::string AddGatewaySlbRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void AddGatewaySlbRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string AddGatewaySlbRequest::getType() const {
  return type_;
}

void AddGatewaySlbRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int AddGatewaySlbRequest::getHttpPort() const {
  return httpPort_;
}

void AddGatewaySlbRequest::setHttpPort(int httpPort) {
  httpPort_ = httpPort;
  setParameter(std::string("HttpPort"), std::to_string(httpPort));
}

int AddGatewaySlbRequest::getServiceWeight() const {
  return serviceWeight_;
}

void AddGatewaySlbRequest::setServiceWeight(int serviceWeight) {
  serviceWeight_ = serviceWeight;
  setParameter(std::string("ServiceWeight"), std::to_string(serviceWeight));
}

std::string AddGatewaySlbRequest::getVServerGroupId() const {
  return vServerGroupId_;
}

void AddGatewaySlbRequest::setVServerGroupId(const std::string &vServerGroupId) {
  vServerGroupId_ = vServerGroupId;
  setParameter(std::string("VServerGroupId"), vServerGroupId);
}

std::vector<AddGatewaySlbRequest::VServiceList> AddGatewaySlbRequest::getVServiceList() const {
  return vServiceList_;
}

void AddGatewaySlbRequest::setVServiceList(const std::vector<AddGatewaySlbRequest::VServiceList> &vServiceList) {
  vServiceList_ = vServiceList;
  for(int dep1 = 0; dep1 != vServiceList.size(); dep1++) {
    setParameter(std::string("VServiceList") + "." + std::to_string(dep1 + 1) + ".VServerGroupId", vServiceList[dep1].vServerGroupId);
    setParameter(std::string("VServiceList") + "." + std::to_string(dep1 + 1) + ".Protocol", vServiceList[dep1].protocol);
    setParameter(std::string("VServiceList") + "." + std::to_string(dep1 + 1) + ".Port", std::to_string(vServiceList[dep1].port));
    setParameter(std::string("VServiceList") + "." + std::to_string(dep1 + 1) + ".VServerGroupName", vServiceList[dep1].vServerGroupName);
  }
}

std::string AddGatewaySlbRequest::getHttpsVServerGroupId() const {
  return httpsVServerGroupId_;
}

void AddGatewaySlbRequest::setHttpsVServerGroupId(const std::string &httpsVServerGroupId) {
  httpsVServerGroupId_ = httpsVServerGroupId;
  setParameter(std::string("HttpsVServerGroupId"), httpsVServerGroupId);
}

std::string AddGatewaySlbRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void AddGatewaySlbRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

int AddGatewaySlbRequest::getHttpsPort() const {
  return httpsPort_;
}

void AddGatewaySlbRequest::setHttpsPort(int httpsPort) {
  httpsPort_ = httpsPort;
  setParameter(std::string("HttpsPort"), std::to_string(httpsPort));
}

