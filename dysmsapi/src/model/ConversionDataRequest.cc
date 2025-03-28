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

#include <alibabacloud/dysmsapi/model/ConversionDataRequest.h>

using AlibabaCloud::Dysmsapi::Model::ConversionDataRequest;

ConversionDataRequest::ConversionDataRequest()
    : RpcServiceRequest("dysmsapi", "2018-05-01", "ConversionData") {
  setMethod(HttpRequest::Method::Post);
}

ConversionDataRequest::~ConversionDataRequest() {}

long ConversionDataRequest::getReportTime() const {
  return reportTime_;
}

void ConversionDataRequest::setReportTime(long reportTime) {
  reportTime_ = reportTime;
  setBodyParameter(std::string("ReportTime"), std::to_string(reportTime));
}

std::string ConversionDataRequest::getConversionRate() const {
  return conversionRate_;
}

void ConversionDataRequest::setConversionRate(const std::string &conversionRate) {
  conversionRate_ = conversionRate;
  setBodyParameter(std::string("ConversionRate"), conversionRate);
}

