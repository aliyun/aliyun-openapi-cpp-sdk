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

#include <alibabacloud/alimt/model/GetTranslateReportRequest.h>

using AlibabaCloud::Alimt::Model::GetTranslateReportRequest;

GetTranslateReportRequest::GetTranslateReportRequest()
    : RpcServiceRequest("alimt", "2018-10-12", "GetTranslateReport") {
  setMethod(HttpRequest::Method::Post);
}

GetTranslateReportRequest::~GetTranslateReportRequest() {}

std::string GetTranslateReportRequest::getEndTime() const {
  return endTime_;
}

void GetTranslateReportRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string GetTranslateReportRequest::getBeginTime() const {
  return beginTime_;
}

void GetTranslateReportRequest::setBeginTime(const std::string &beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), beginTime);
}

std::string GetTranslateReportRequest::getApiName() const {
  return apiName_;
}

void GetTranslateReportRequest::setApiName(const std::string &apiName) {
  apiName_ = apiName;
  setParameter(std::string("ApiName"), apiName);
}

std::string GetTranslateReportRequest::getGroup() const {
  return group_;
}

void GetTranslateReportRequest::setGroup(const std::string &group) {
  group_ = group;
  setParameter(std::string("Group"), group);
}

