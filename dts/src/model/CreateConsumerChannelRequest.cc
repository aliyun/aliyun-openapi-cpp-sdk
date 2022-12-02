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

#include <alibabacloud/dts/model/CreateConsumerChannelRequest.h>

using AlibabaCloud::Dts::Model::CreateConsumerChannelRequest;

CreateConsumerChannelRequest::CreateConsumerChannelRequest()
    : RpcServiceRequest("dts", "2020-01-01", "CreateConsumerChannel") {
  setMethod(HttpRequest::Method::Post);
}

CreateConsumerChannelRequest::~CreateConsumerChannelRequest() {}

std::string CreateConsumerChannelRequest::getConsumerGroupName() const {
  return consumerGroupName_;
}

void CreateConsumerChannelRequest::setConsumerGroupName(const std::string &consumerGroupName) {
  consumerGroupName_ = consumerGroupName;
  setParameter(std::string("ConsumerGroupName"), consumerGroupName);
}

std::string CreateConsumerChannelRequest::getConsumerGroupPassword() const {
  return consumerGroupPassword_;
}

void CreateConsumerChannelRequest::setConsumerGroupPassword(const std::string &consumerGroupPassword) {
  consumerGroupPassword_ = consumerGroupPassword;
  setParameter(std::string("ConsumerGroupPassword"), consumerGroupPassword);
}

std::string CreateConsumerChannelRequest::getConsumerGroupUserName() const {
  return consumerGroupUserName_;
}

void CreateConsumerChannelRequest::setConsumerGroupUserName(const std::string &consumerGroupUserName) {
  consumerGroupUserName_ = consumerGroupUserName;
  setParameter(std::string("ConsumerGroupUserName"), consumerGroupUserName);
}

std::string CreateConsumerChannelRequest::getRegionId() const {
  return regionId_;
}

void CreateConsumerChannelRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateConsumerChannelRequest::getDtsJobId() const {
  return dtsJobId_;
}

void CreateConsumerChannelRequest::setDtsJobId(const std::string &dtsJobId) {
  dtsJobId_ = dtsJobId;
  setParameter(std::string("DtsJobId"), dtsJobId);
}

std::string CreateConsumerChannelRequest::getDtsInstanceId() const {
  return dtsInstanceId_;
}

void CreateConsumerChannelRequest::setDtsInstanceId(const std::string &dtsInstanceId) {
  dtsInstanceId_ = dtsInstanceId;
  setParameter(std::string("DtsInstanceId"), dtsInstanceId);
}

