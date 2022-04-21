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

#include <alibabacloud/outboundbot/model/CreateOutboundCallNumberRequest.h>

using AlibabaCloud::OutboundBot::Model::CreateOutboundCallNumberRequest;

CreateOutboundCallNumberRequest::CreateOutboundCallNumberRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "CreateOutboundCallNumber") {
  setMethod(HttpRequest::Method::Post);
}

CreateOutboundCallNumberRequest::~CreateOutboundCallNumberRequest() {}

int CreateOutboundCallNumberRequest::getRateLimitCount() const {
  return rateLimitCount_;
}

void CreateOutboundCallNumberRequest::setRateLimitCount(int rateLimitCount) {
  rateLimitCount_ = rateLimitCount;
  setParameter(std::string("RateLimitCount"), std::to_string(rateLimitCount));
}

std::string CreateOutboundCallNumberRequest::getNumber() const {
  return number_;
}

void CreateOutboundCallNumberRequest::setNumber(const std::string &number) {
  number_ = number;
  setParameter(std::string("Number"), number);
}

std::string CreateOutboundCallNumberRequest::getInstanceId() const {
  return instanceId_;
}

void CreateOutboundCallNumberRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int CreateOutboundCallNumberRequest::getRateLimitPeriod() const {
  return rateLimitPeriod_;
}

void CreateOutboundCallNumberRequest::setRateLimitPeriod(int rateLimitPeriod) {
  rateLimitPeriod_ = rateLimitPeriod;
  setParameter(std::string("RateLimitPeriod"), std::to_string(rateLimitPeriod));
}

