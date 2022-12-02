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

#include <alibabacloud/dts/model/ModifyConsumerChannelRequest.h>

using AlibabaCloud::Dts::Model::ModifyConsumerChannelRequest;

ModifyConsumerChannelRequest::ModifyConsumerChannelRequest()
    : RpcServiceRequest("dts", "2020-01-01", "ModifyConsumerChannel") {
  setMethod(HttpRequest::Method::Post);
}

ModifyConsumerChannelRequest::~ModifyConsumerChannelRequest() {}

std::string ModifyConsumerChannelRequest::getConsumerGroupId() const {
  return consumerGroupId_;
}

void ModifyConsumerChannelRequest::setConsumerGroupId(const std::string &consumerGroupId) {
  consumerGroupId_ = consumerGroupId;
  setParameter(std::string("ConsumerGroupId"), consumerGroupId);
}

std::string ModifyConsumerChannelRequest::getConsumerGroupPassword() const {
  return consumerGroupPassword_;
}

void ModifyConsumerChannelRequest::setConsumerGroupPassword(const std::string &consumerGroupPassword) {
  consumerGroupPassword_ = consumerGroupPassword;
  setParameter(std::string("ConsumerGroupPassword"), consumerGroupPassword);
}

std::string ModifyConsumerChannelRequest::getConsumerGroupUserName() const {
  return consumerGroupUserName_;
}

void ModifyConsumerChannelRequest::setConsumerGroupUserName(const std::string &consumerGroupUserName) {
  consumerGroupUserName_ = consumerGroupUserName;
  setParameter(std::string("ConsumerGroupUserName"), consumerGroupUserName);
}

std::string ModifyConsumerChannelRequest::getRegionId() const {
  return regionId_;
}

void ModifyConsumerChannelRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyConsumerChannelRequest::getDtsJobId() const {
  return dtsJobId_;
}

void ModifyConsumerChannelRequest::setDtsJobId(const std::string &dtsJobId) {
  dtsJobId_ = dtsJobId;
  setParameter(std::string("DtsJobId"), dtsJobId);
}

std::string ModifyConsumerChannelRequest::getConsumerGroupName() const {
  return consumerGroupName_;
}

void ModifyConsumerChannelRequest::setConsumerGroupName(const std::string &consumerGroupName) {
  consumerGroupName_ = consumerGroupName;
  setParameter(std::string("ConsumerGroupName"), consumerGroupName);
}

std::string ModifyConsumerChannelRequest::getDtsInstanceId() const {
  return dtsInstanceId_;
}

void ModifyConsumerChannelRequest::setDtsInstanceId(const std::string &dtsInstanceId) {
  dtsInstanceId_ = dtsInstanceId;
  setParameter(std::string("DtsInstanceId"), dtsInstanceId);
}

