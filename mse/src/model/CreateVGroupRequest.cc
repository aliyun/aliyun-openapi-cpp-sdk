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

#include <alibabacloud/mse/model/CreateVGroupRequest.h>

using AlibabaCloud::Mse::Model::CreateVGroupRequest;

CreateVGroupRequest::CreateVGroupRequest()
    : RpcServiceRequest("mse", "2019-05-31", "CreateVGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateVGroupRequest::~CreateVGroupRequest() {}

std::string CreateVGroupRequest::getPrimaryUser() const {
  return primaryUser_;
}

void CreateVGroupRequest::setPrimaryUser(const std::string &primaryUser) {
  primaryUser_ = primaryUser;
  setParameter(std::string("PrimaryUser"), primaryUser);
}

std::string CreateVGroupRequest::getName() const {
  return name_;
}

void CreateVGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateVGroupRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void CreateVGroupRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::string CreateVGroupRequest::getSeataServerUniqueId() const {
  return seataServerUniqueId_;
}

void CreateVGroupRequest::setSeataServerUniqueId(const std::string &seataServerUniqueId) {
  seataServerUniqueId_ = seataServerUniqueId;
  setParameter(std::string("SeataServerUniqueId"), seataServerUniqueId);
}

std::string CreateVGroupRequest::getRegion() const {
  return region_;
}

void CreateVGroupRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

