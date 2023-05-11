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

#include <alibabacloud/alidns/model/DescribeCustomLineRequest.h>

using AlibabaCloud::Alidns::Model::DescribeCustomLineRequest;

DescribeCustomLineRequest::DescribeCustomLineRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeCustomLine") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCustomLineRequest::~DescribeCustomLineRequest() {}

long DescribeCustomLineRequest::getLineId() const {
  return lineId_;
}

void DescribeCustomLineRequest::setLineId(long lineId) {
  lineId_ = lineId;
  setParameter(std::string("LineId"), std::to_string(lineId));
}

std::string DescribeCustomLineRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeCustomLineRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string DescribeCustomLineRequest::getLang() const {
  return lang_;
}

void DescribeCustomLineRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

