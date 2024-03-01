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

#include <alibabacloud/live/model/DescribeLiveCdnDiagnoseInfoRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveCdnDiagnoseInfoRequest;

DescribeLiveCdnDiagnoseInfoRequest::DescribeLiveCdnDiagnoseInfoRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveCdnDiagnoseInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveCdnDiagnoseInfoRequest::~DescribeLiveCdnDiagnoseInfoRequest() {}

std::string DescribeLiveCdnDiagnoseInfoRequest::getIntervalType() const {
  return intervalType_;
}

void DescribeLiveCdnDiagnoseInfoRequest::setIntervalType(const std::string &intervalType) {
  intervalType_ = intervalType;
  setParameter(std::string("intervalType"), intervalType);
}

std::string DescribeLiveCdnDiagnoseInfoRequest::getStreamSuffix() const {
  return streamSuffix_;
}

void DescribeLiveCdnDiagnoseInfoRequest::setStreamSuffix(const std::string &streamSuffix) {
  streamSuffix_ = streamSuffix;
  setParameter(std::string("streamSuffix"), streamSuffix);
}

long DescribeLiveCdnDiagnoseInfoRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveCdnDiagnoseInfoRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("startTime"), std::to_string(startTime));
}

std::string DescribeLiveCdnDiagnoseInfoRequest::getRequestType() const {
  return requestType_;
}

void DescribeLiveCdnDiagnoseInfoRequest::setRequestType(const std::string &requestType) {
  requestType_ = requestType;
  setParameter(std::string("requestType"), requestType);
}

std::string DescribeLiveCdnDiagnoseInfoRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeLiveCdnDiagnoseInfoRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeLiveCdnDiagnoseInfoRequest::getStreamName() const {
  return streamName_;
}

void DescribeLiveCdnDiagnoseInfoRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("streamName"), streamName);
}

std::string DescribeLiveCdnDiagnoseInfoRequest::getApp() const {
  return app_;
}

void DescribeLiveCdnDiagnoseInfoRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("app"), app);
}

int DescribeLiveCdnDiagnoseInfoRequest::getPhase() const {
  return phase_;
}

void DescribeLiveCdnDiagnoseInfoRequest::setPhase(int phase) {
  phase_ = phase;
  setParameter(std::string("phase"), std::to_string(phase));
}

long DescribeLiveCdnDiagnoseInfoRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveCdnDiagnoseInfoRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("endTime"), std::to_string(endTime));
}

std::string DescribeLiveCdnDiagnoseInfoRequest::getDomain() const {
  return domain_;
}

void DescribeLiveCdnDiagnoseInfoRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("domain"), domain);
}

