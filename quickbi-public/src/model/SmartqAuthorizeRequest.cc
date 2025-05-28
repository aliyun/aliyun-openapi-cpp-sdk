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

#include <alibabacloud/quickbi-public/model/SmartqAuthorizeRequest.h>

using AlibabaCloud::Quickbi_public::Model::SmartqAuthorizeRequest;

SmartqAuthorizeRequest::SmartqAuthorizeRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "SmartqAuthorize") {
  setMethod(HttpRequest::Method::Post);
}

SmartqAuthorizeRequest::~SmartqAuthorizeRequest() {}

std::string SmartqAuthorizeRequest::getLlmCubeThemes() const {
  return llmCubeThemes_;
}

void SmartqAuthorizeRequest::setLlmCubeThemes(const std::string &llmCubeThemes) {
  llmCubeThemes_ = llmCubeThemes;
  setParameter(std::string("LlmCubeThemes"), llmCubeThemes);
}

std::string SmartqAuthorizeRequest::getAccessPoint() const {
  return accessPoint_;
}

void SmartqAuthorizeRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string SmartqAuthorizeRequest::getLlmCubes() const {
  return llmCubes_;
}

void SmartqAuthorizeRequest::setLlmCubes(const std::string &llmCubes) {
  llmCubes_ = llmCubes;
  setParameter(std::string("LlmCubes"), llmCubes);
}

std::string SmartqAuthorizeRequest::getCubeIds() const {
  return cubeIds_;
}

void SmartqAuthorizeRequest::setCubeIds(const std::string &cubeIds) {
  cubeIds_ = cubeIds;
  setParameter(std::string("CubeIds"), cubeIds);
}

std::string SmartqAuthorizeRequest::getSignType() const {
  return signType_;
}

void SmartqAuthorizeRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

int SmartqAuthorizeRequest::getOperationType() const {
  return operationType_;
}

void SmartqAuthorizeRequest::setOperationType(int operationType) {
  operationType_ = operationType;
  setParameter(std::string("OperationType"), std::to_string(operationType));
}

std::string SmartqAuthorizeRequest::getExpireDay() const {
  return expireDay_;
}

void SmartqAuthorizeRequest::setExpireDay(const std::string &expireDay) {
  expireDay_ = expireDay;
  setParameter(std::string("ExpireDay"), expireDay);
}

std::string SmartqAuthorizeRequest::getUserIds() const {
  return userIds_;
}

void SmartqAuthorizeRequest::setUserIds(const std::string &userIds) {
  userIds_ = userIds;
  setParameter(std::string("UserIds"), userIds);
}

