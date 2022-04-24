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

#include <alibabacloud/bssopenapi/model/QuerySavingsPlansDeductLogRequest.h>

using AlibabaCloud::BssOpenApi::Model::QuerySavingsPlansDeductLogRequest;

QuerySavingsPlansDeductLogRequest::QuerySavingsPlansDeductLogRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "QuerySavingsPlansDeductLog") {
  setMethod(HttpRequest::Method::Post);
}

QuerySavingsPlansDeductLogRequest::~QuerySavingsPlansDeductLogRequest() {}

std::string QuerySavingsPlansDeductLogRequest::getEndTime() const {
  return endTime_;
}

void QuerySavingsPlansDeductLogRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string QuerySavingsPlansDeductLogRequest::getStartTime() const {
  return startTime_;
}

void QuerySavingsPlansDeductLogRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string QuerySavingsPlansDeductLogRequest::getLocale() const {
  return locale_;
}

void QuerySavingsPlansDeductLogRequest::setLocale(const std::string &locale) {
  locale_ = locale;
  setParameter(std::string("Locale"), locale);
}

int QuerySavingsPlansDeductLogRequest::getPageNum() const {
  return pageNum_;
}

void QuerySavingsPlansDeductLogRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string QuerySavingsPlansDeductLogRequest::getInstanceId() const {
  return instanceId_;
}

void QuerySavingsPlansDeductLogRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int QuerySavingsPlansDeductLogRequest::getPageSize() const {
  return pageSize_;
}

void QuerySavingsPlansDeductLogRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QuerySavingsPlansDeductLogRequest::getInstanceType() const {
  return instanceType_;
}

void QuerySavingsPlansDeductLogRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

