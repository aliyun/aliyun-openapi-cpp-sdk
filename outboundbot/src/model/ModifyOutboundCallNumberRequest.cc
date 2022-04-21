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

#include <alibabacloud/outboundbot/model/ModifyOutboundCallNumberRequest.h>

using AlibabaCloud::OutboundBot::Model::ModifyOutboundCallNumberRequest;

ModifyOutboundCallNumberRequest::ModifyOutboundCallNumberRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ModifyOutboundCallNumber") {
  setMethod(HttpRequest::Method::Post);
}

ModifyOutboundCallNumberRequest::~ModifyOutboundCallNumberRequest() {}

std::string ModifyOutboundCallNumberRequest::getOutboundCallNumberId() const {
  return outboundCallNumberId_;
}

void ModifyOutboundCallNumberRequest::setOutboundCallNumberId(const std::string &outboundCallNumberId) {
  outboundCallNumberId_ = outboundCallNumberId;
  setParameter(std::string("OutboundCallNumberId"), outboundCallNumberId);
}

int ModifyOutboundCallNumberRequest::getRateLimitCount() const {
  return rateLimitCount_;
}

void ModifyOutboundCallNumberRequest::setRateLimitCount(int rateLimitCount) {
  rateLimitCount_ = rateLimitCount;
  setParameter(std::string("RateLimitCount"), std::to_string(rateLimitCount));
}

std::string ModifyOutboundCallNumberRequest::getNumber() const {
  return number_;
}

void ModifyOutboundCallNumberRequest::setNumber(const std::string &number) {
  number_ = number;
  setParameter(std::string("Number"), number);
}

std::string ModifyOutboundCallNumberRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyOutboundCallNumberRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ModifyOutboundCallNumberRequest::getRateLimitPeriod() const {
  return rateLimitPeriod_;
}

void ModifyOutboundCallNumberRequest::setRateLimitPeriod(int rateLimitPeriod) {
  rateLimitPeriod_ = rateLimitPeriod;
  setParameter(std::string("RateLimitPeriod"), std::to_string(rateLimitPeriod));
}

