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

#include <alibabacloud/quickbi-public/model/SmartqQueryAbilityRequest.h>

using AlibabaCloud::Quickbi_public::Model::SmartqQueryAbilityRequest;

SmartqQueryAbilityRequest::SmartqQueryAbilityRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "SmartqQueryAbility") {
  setMethod(HttpRequest::Method::Post);
}

SmartqQueryAbilityRequest::~SmartqQueryAbilityRequest() {}

std::string SmartqQueryAbilityRequest::getAccessPoint() const {
  return accessPoint_;
}

void SmartqQueryAbilityRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string SmartqQueryAbilityRequest::getUserId() const {
  return userId_;
}

void SmartqQueryAbilityRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string SmartqQueryAbilityRequest::getUserQuestion() const {
  return userQuestion_;
}

void SmartqQueryAbilityRequest::setUserQuestion(const std::string &userQuestion) {
  userQuestion_ = userQuestion;
  setParameter(std::string("UserQuestion"), userQuestion);
}

std::string SmartqQueryAbilityRequest::getCubeId() const {
  return cubeId_;
}

void SmartqQueryAbilityRequest::setCubeId(const std::string &cubeId) {
  cubeId_ = cubeId;
  setParameter(std::string("CubeId"), cubeId);
}

std::string SmartqQueryAbilityRequest::getSignType() const {
  return signType_;
}

void SmartqQueryAbilityRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

