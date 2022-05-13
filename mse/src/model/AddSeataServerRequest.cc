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

#include <alibabacloud/mse/model/AddSeataServerRequest.h>

using AlibabaCloud::Mse::Model::AddSeataServerRequest;

AddSeataServerRequest::AddSeataServerRequest()
    : RpcServiceRequest("mse", "2019-05-31", "AddSeataServer") {
  setMethod(HttpRequest::Method::Post);
}

AddSeataServerRequest::~AddSeataServerRequest() {}

int AddSeataServerRequest::getReplica() const {
  return replica_;
}

void AddSeataServerRequest::setReplica(int replica) {
  replica_ = replica;
  setParameter(std::string("Replica"), std::to_string(replica));
}

std::string AddSeataServerRequest::getPrimaryUser() const {
  return primaryUser_;
}

void AddSeataServerRequest::setPrimaryUser(const std::string &primaryUser) {
  primaryUser_ = primaryUser;
  setParameter(std::string("PrimaryUser"), primaryUser);
}

std::string AddSeataServerRequest::getVpc() const {
  return vpc_;
}

void AddSeataServerRequest::setVpc(const std::string &vpc) {
  vpc_ = vpc;
  setParameter(std::string("Vpc"), vpc);
}

std::string AddSeataServerRequest::getVswitch() const {
  return vswitch_;
}

void AddSeataServerRequest::setVswitch(const std::string &vswitch) {
  vswitch_ = vswitch;
  setParameter(std::string("Vswitch"), vswitch);
}

std::string AddSeataServerRequest::getName() const {
  return name_;
}

void AddSeataServerRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string AddSeataServerRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void AddSeataServerRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string AddSeataServerRequest::getZoneId() const {
  return zoneId_;
}

void AddSeataServerRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string AddSeataServerRequest::getRegion() const {
  return region_;
}

void AddSeataServerRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

