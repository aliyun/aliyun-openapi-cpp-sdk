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

#include <alibabacloud/arms/model/CreateOrUpdateIMRobotRequest.h>

using AlibabaCloud::ARMS::Model::CreateOrUpdateIMRobotRequest;

CreateOrUpdateIMRobotRequest::CreateOrUpdateIMRobotRequest()
    : RpcServiceRequest("arms", "2019-08-08", "CreateOrUpdateIMRobot") {
  setMethod(HttpRequest::Method::Post);
}

CreateOrUpdateIMRobotRequest::~CreateOrUpdateIMRobotRequest() {}

bool CreateOrUpdateIMRobotRequest::getDailyNoc() const {
  return dailyNoc_;
}

void CreateOrUpdateIMRobotRequest::setDailyNoc(bool dailyNoc) {
  dailyNoc_ = dailyNoc;
  setBodyParameter(std::string("DailyNoc"), dailyNoc ? "true" : "false");
}

std::string CreateOrUpdateIMRobotRequest::getRobotAddress() const {
  return robotAddress_;
}

void CreateOrUpdateIMRobotRequest::setRobotAddress(const std::string &robotAddress) {
  robotAddress_ = robotAddress;
  setBodyParameter(std::string("RobotAddress"), robotAddress);
}

std::string CreateOrUpdateIMRobotRequest::getDingSignKey() const {
  return dingSignKey_;
}

void CreateOrUpdateIMRobotRequest::setDingSignKey(const std::string &dingSignKey) {
  dingSignKey_ = dingSignKey;
  setBodyParameter(std::string("DingSignKey"), dingSignKey);
}

std::string CreateOrUpdateIMRobotRequest::getRobotName() const {
  return robotName_;
}

void CreateOrUpdateIMRobotRequest::setRobotName(const std::string &robotName) {
  robotName_ = robotName;
  setBodyParameter(std::string("RobotName"), robotName);
}

long CreateOrUpdateIMRobotRequest::getRobotId() const {
  return robotId_;
}

void CreateOrUpdateIMRobotRequest::setRobotId(long robotId) {
  robotId_ = robotId;
  setBodyParameter(std::string("RobotId"), std::to_string(robotId));
}

std::string CreateOrUpdateIMRobotRequest::getType() const {
  return type_;
}

void CreateOrUpdateIMRobotRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

std::string CreateOrUpdateIMRobotRequest::getProxyUserId() const {
  return proxyUserId_;
}

void CreateOrUpdateIMRobotRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setBodyParameter(std::string("ProxyUserId"), proxyUserId);
}

std::string CreateOrUpdateIMRobotRequest::getDailyNocTime() const {
  return dailyNocTime_;
}

void CreateOrUpdateIMRobotRequest::setDailyNocTime(const std::string &dailyNocTime) {
  dailyNocTime_ = dailyNocTime;
  setBodyParameter(std::string("DailyNocTime"), dailyNocTime);
}

std::string CreateOrUpdateIMRobotRequest::getToken() const {
  return token_;
}

void CreateOrUpdateIMRobotRequest::setToken(const std::string &token) {
  token_ = token;
  setBodyParameter(std::string("Token"), token);
}

std::string CreateOrUpdateIMRobotRequest::getCardTemplate() const {
  return cardTemplate_;
}

void CreateOrUpdateIMRobotRequest::setCardTemplate(const std::string &cardTemplate) {
  cardTemplate_ = cardTemplate;
  setBodyParameter(std::string("CardTemplate"), cardTemplate);
}

bool CreateOrUpdateIMRobotRequest::getEnableOutgoing() const {
  return enableOutgoing_;
}

void CreateOrUpdateIMRobotRequest::setEnableOutgoing(bool enableOutgoing) {
  enableOutgoing_ = enableOutgoing;
  setBodyParameter(std::string("EnableOutgoing"), enableOutgoing ? "true" : "false");
}

