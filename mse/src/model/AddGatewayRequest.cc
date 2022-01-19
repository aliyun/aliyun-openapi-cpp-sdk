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

#include <alibabacloud/mse/model/AddGatewayRequest.h>

using AlibabaCloud::Mse::Model::AddGatewayRequest;

AddGatewayRequest::AddGatewayRequest()
    : RpcServiceRequest("mse", "2019-05-31", "AddGateway") {
  setMethod(HttpRequest::Method::Post);
}

AddGatewayRequest::~AddGatewayRequest() {}

std::string AddGatewayRequest::getInternetSlbSpec() const {
  return internetSlbSpec_;
}

void AddGatewayRequest::setInternetSlbSpec(const std::string &internetSlbSpec) {
  internetSlbSpec_ = internetSlbSpec;
  setParameter(std::string("InternetSlbSpec"), internetSlbSpec);
}

int AddGatewayRequest::getReplica() const {
  return replica_;
}

void AddGatewayRequest::setReplica(int replica) {
  replica_ = replica;
  setParameter(std::string("Replica"), std::to_string(replica));
}

std::string AddGatewayRequest::getVSwitchId2() const {
  return vSwitchId2_;
}

void AddGatewayRequest::setVSwitchId2(const std::string &vSwitchId2) {
  vSwitchId2_ = vSwitchId2;
  setParameter(std::string("VSwitchId2"), vSwitchId2);
}

std::string AddGatewayRequest::getSpec() const {
  return spec_;
}

void AddGatewayRequest::setSpec(const std::string &spec) {
  spec_ = spec;
  setParameter(std::string("Spec"), spec);
}

bool AddGatewayRequest::getEnterpriseSecurityGroup() const {
  return enterpriseSecurityGroup_;
}

void AddGatewayRequest::setEnterpriseSecurityGroup(bool enterpriseSecurityGroup) {
  enterpriseSecurityGroup_ = enterpriseSecurityGroup;
  setParameter(std::string("EnterpriseSecurityGroup"), enterpriseSecurityGroup ? "true" : "false");
}

std::string AddGatewayRequest::getVpc() const {
  return vpc_;
}

void AddGatewayRequest::setVpc(const std::string &vpc) {
  vpc_ = vpc;
  setParameter(std::string("Vpc"), vpc);
}

std::string AddGatewayRequest::getVSwitchId() const {
  return vSwitchId_;
}

void AddGatewayRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string AddGatewayRequest::getSlbSpec() const {
  return slbSpec_;
}

void AddGatewayRequest::setSlbSpec(const std::string &slbSpec) {
  slbSpec_ = slbSpec;
  setParameter(std::string("SlbSpec"), slbSpec);
}

std::string AddGatewayRequest::getName() const {
  return name_;
}

void AddGatewayRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string AddGatewayRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void AddGatewayRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string AddGatewayRequest::getRegion() const {
  return region_;
}

void AddGatewayRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

