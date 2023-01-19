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

#include <alibabacloud/sas/model/GetImageScanNumInPeriodRequest.h>

using AlibabaCloud::Sas::Model::GetImageScanNumInPeriodRequest;

GetImageScanNumInPeriodRequest::GetImageScanNumInPeriodRequest()
    : RpcServiceRequest("sas", "2018-12-03", "GetImageScanNumInPeriod") {
  setMethod(HttpRequest::Method::Post);
}

GetImageScanNumInPeriodRequest::~GetImageScanNumInPeriodRequest() {}

std::string GetImageScanNumInPeriodRequest::getPastDay() const {
  return pastDay_;
}

void GetImageScanNumInPeriodRequest::setPastDay(const std::string &pastDay) {
  pastDay_ = pastDay;
  setParameter(std::string("PastDay"), pastDay);
}

std::string GetImageScanNumInPeriodRequest::getSourceIp() const {
  return sourceIp_;
}

void GetImageScanNumInPeriodRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

