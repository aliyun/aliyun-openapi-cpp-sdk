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

#include <alibabacloud/dcdn/model/DescribeHighlightInfoRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeHighlightInfoRequest;

DescribeHighlightInfoRequest::DescribeHighlightInfoRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeHighlightInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeHighlightInfoRequest::~DescribeHighlightInfoRequest() {}

std::string DescribeHighlightInfoRequest::getTraceId() const {
  return traceId_;
}

void DescribeHighlightInfoRequest::setTraceId(const std::string &traceId) {
  traceId_ = traceId;
  setParameter(std::string("TraceId"), traceId);
}

std::string DescribeHighlightInfoRequest::getEndTime() const {
  return endTime_;
}

void DescribeHighlightInfoRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeHighlightInfoRequest::getStartTime() const {
  return startTime_;
}

void DescribeHighlightInfoRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeHighlightInfoRequest::getLang() const {
  return lang_;
}

void DescribeHighlightInfoRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

