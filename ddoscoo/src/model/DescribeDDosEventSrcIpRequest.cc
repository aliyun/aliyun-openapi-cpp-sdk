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

#include <alibabacloud/ddoscoo/model/DescribeDDosEventSrcIpRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeDDosEventSrcIpRequest;

DescribeDDosEventSrcIpRequest::DescribeDDosEventSrcIpRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeDDosEventSrcIp") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDDosEventSrcIpRequest::~DescribeDDosEventSrcIpRequest() {}

std::string DescribeDDosEventSrcIpRequest::getIp() const {
  return ip_;
}

void DescribeDDosEventSrcIpRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

long DescribeDDosEventSrcIpRequest::getRange() const {
  return range_;
}

void DescribeDDosEventSrcIpRequest::setRange(long range) {
  range_ = range;
  setParameter(std::string("Range"), std::to_string(range));
}

long DescribeDDosEventSrcIpRequest::getStartTime() const {
  return startTime_;
}

void DescribeDDosEventSrcIpRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeDDosEventSrcIpRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeDDosEventSrcIpRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeDDosEventSrcIpRequest::getEventType() const {
  return eventType_;
}

void DescribeDDosEventSrcIpRequest::setEventType(const std::string &eventType) {
  eventType_ = eventType;
  setParameter(std::string("EventType"), eventType);
}

