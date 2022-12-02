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

#include <alibabacloud/dts/model/ModifySubscriptionRequest.h>

using AlibabaCloud::Dts::Model::ModifySubscriptionRequest;

ModifySubscriptionRequest::ModifySubscriptionRequest()
    : RpcServiceRequest("dts", "2020-01-01", "ModifySubscription") {
  setMethod(HttpRequest::Method::Post);
}

ModifySubscriptionRequest::~ModifySubscriptionRequest() {}

std::string ModifySubscriptionRequest::getDbList() const {
  return dbList_;
}

void ModifySubscriptionRequest::setDbList(const std::string &dbList) {
  dbList_ = dbList;
  setParameter(std::string("DbList"), dbList);
}

bool ModifySubscriptionRequest::getSubscriptionDataTypeDDL() const {
  return subscriptionDataTypeDDL_;
}

void ModifySubscriptionRequest::setSubscriptionDataTypeDDL(bool subscriptionDataTypeDDL) {
  subscriptionDataTypeDDL_ = subscriptionDataTypeDDL;
  setParameter(std::string("SubscriptionDataTypeDDL"), subscriptionDataTypeDDL ? "true" : "false");
}

bool ModifySubscriptionRequest::getSubscriptionDataTypeDML() const {
  return subscriptionDataTypeDML_;
}

void ModifySubscriptionRequest::setSubscriptionDataTypeDML(bool subscriptionDataTypeDML) {
  subscriptionDataTypeDML_ = subscriptionDataTypeDML;
  setParameter(std::string("SubscriptionDataTypeDML"), subscriptionDataTypeDML ? "true" : "false");
}

std::string ModifySubscriptionRequest::getRegionId() const {
  return regionId_;
}

void ModifySubscriptionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifySubscriptionRequest::getDtsJobId() const {
  return dtsJobId_;
}

void ModifySubscriptionRequest::setDtsJobId(const std::string &dtsJobId) {
  dtsJobId_ = dtsJobId;
  setParameter(std::string("DtsJobId"), dtsJobId);
}

std::string ModifySubscriptionRequest::getDtsInstanceId() const {
  return dtsInstanceId_;
}

void ModifySubscriptionRequest::setDtsInstanceId(const std::string &dtsInstanceId) {
  dtsInstanceId_ = dtsInstanceId;
  setParameter(std::string("DtsInstanceId"), dtsInstanceId);
}

