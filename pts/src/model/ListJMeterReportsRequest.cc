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

#include <alibabacloud/pts/model/ListJMeterReportsRequest.h>

using AlibabaCloud::PTS::Model::ListJMeterReportsRequest;

ListJMeterReportsRequest::ListJMeterReportsRequest()
    : RpcServiceRequest("pts", "2020-10-20", "ListJMeterReports") {
  setMethod(HttpRequest::Method::Post);
}

ListJMeterReportsRequest::~ListJMeterReportsRequest() {}

std::string ListJMeterReportsRequest::getReportId() const {
  return reportId_;
}

void ListJMeterReportsRequest::setReportId(const std::string &reportId) {
  reportId_ = reportId;
  setParameter(std::string("ReportId"), reportId);
}

long ListJMeterReportsRequest::getEndTime() const {
  return endTime_;
}

void ListJMeterReportsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long ListJMeterReportsRequest::getBeginTime() const {
  return beginTime_;
}

void ListJMeterReportsRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

int ListJMeterReportsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListJMeterReportsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListJMeterReportsRequest::getPageSize() const {
  return pageSize_;
}

void ListJMeterReportsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListJMeterReportsRequest::getSceneId() const {
  return sceneId_;
}

void ListJMeterReportsRequest::setSceneId(const std::string &sceneId) {
  sceneId_ = sceneId;
  setParameter(std::string("SceneId"), sceneId);
}

std::string ListJMeterReportsRequest::getKeyword() const {
  return keyword_;
}

void ListJMeterReportsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

