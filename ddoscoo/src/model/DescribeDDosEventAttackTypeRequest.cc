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

#include <alibabacloud/ddoscoo/model/DescribeDDosEventAttackTypeRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeDDosEventAttackTypeRequest;

DescribeDDosEventAttackTypeRequest::DescribeDDosEventAttackTypeRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeDDosEventAttackType") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDDosEventAttackTypeRequest::~DescribeDDosEventAttackTypeRequest() {}

std::string DescribeDDosEventAttackTypeRequest::getIp() const {
  return ip_;
}

void DescribeDDosEventAttackTypeRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

long DescribeDDosEventAttackTypeRequest::getStartTime() const {
  return startTime_;
}

void DescribeDDosEventAttackTypeRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeDDosEventAttackTypeRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeDDosEventAttackTypeRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeDDosEventAttackTypeRequest::getEventType() const {
  return eventType_;
}

void DescribeDDosEventAttackTypeRequest::setEventType(const std::string &eventType) {
  eventType_ = eventType;
  setParameter(std::string("EventType"), eventType);
}

