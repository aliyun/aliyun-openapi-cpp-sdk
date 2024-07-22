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

#include <alibabacloud/elasticsearch/model/ListDiagnoseReportRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListDiagnoseReportRequest;

ListDiagnoseReportRequest::ListDiagnoseReportRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/diagnosis/instances/[InstanceId]/reports"};
  setMethod(HttpRequest::Method::Get);
}

ListDiagnoseReportRequest::~ListDiagnoseReportRequest() {}

std::string ListDiagnoseReportRequest::getInstanceId() const {
  return instanceId_;
}

void ListDiagnoseReportRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListDiagnoseReportRequest::getSize() const {
  return size_;
}

void ListDiagnoseReportRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

long ListDiagnoseReportRequest::getEndTime() const {
  return endTime_;
}

void ListDiagnoseReportRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("endTime"), std::to_string(endTime));
}

long ListDiagnoseReportRequest::getStartTime() const {
  return startTime_;
}

void ListDiagnoseReportRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("startTime"), std::to_string(startTime));
}

int ListDiagnoseReportRequest::getPage() const {
  return page_;
}

void ListDiagnoseReportRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

bool ListDiagnoseReportRequest::getDetail() const {
  return detail_;
}

void ListDiagnoseReportRequest::setDetail(bool detail) {
  detail_ = detail;
  setParameter(std::string("detail"), detail ? "true" : "false");
}

std::string ListDiagnoseReportRequest::getTrigger() const {
  return trigger_;
}

void ListDiagnoseReportRequest::setTrigger(const std::string &trigger) {
  trigger_ = trigger;
  setParameter(std::string("trigger"), trigger);
}

std::string ListDiagnoseReportRequest::getLang() const {
  return lang_;
}

void ListDiagnoseReportRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("lang"), lang);
}

