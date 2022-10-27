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

#include <alibabacloud/elasticsearch/model/ListDiagnoseReportIdsRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListDiagnoseReportIdsRequest;

ListDiagnoseReportIdsRequest::ListDiagnoseReportIdsRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/diagnosis/instances/[InstanceId]/report-ids"};
  setMethod(HttpRequest::Method::Get);
}

ListDiagnoseReportIdsRequest::~ListDiagnoseReportIdsRequest() {}

string ListDiagnoseReportIdsRequest::getInstanceId() const {
  return instanceId_;
}

void ListDiagnoseReportIdsRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

integer ListDiagnoseReportIdsRequest::getSize() const {
  return size_;
}

void ListDiagnoseReportIdsRequest::setSize(integer size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

integer ListDiagnoseReportIdsRequest::getEndTime() const {
  return endTime_;
}

void ListDiagnoseReportIdsRequest::setEndTime(integer endTime) {
  endTime_ = endTime;
  setParameter(std::string("endTime"), std::to_string(endTime));
}

integer ListDiagnoseReportIdsRequest::getStartTime() const {
  return startTime_;
}

void ListDiagnoseReportIdsRequest::setStartTime(integer startTime) {
  startTime_ = startTime;
  setParameter(std::string("startTime"), std::to_string(startTime));
}

integer ListDiagnoseReportIdsRequest::getPage() const {
  return page_;
}

void ListDiagnoseReportIdsRequest::setPage(integer page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

string ListDiagnoseReportIdsRequest::getTrigger() const {
  return trigger_;
}

void ListDiagnoseReportIdsRequest::setTrigger(string trigger) {
  trigger_ = trigger;
  setParameter(std::string("trigger"), std::to_string(trigger));
}

string ListDiagnoseReportIdsRequest::getLang() const {
  return lang_;
}

void ListDiagnoseReportIdsRequest::setLang(string lang) {
  lang_ = lang;
  setParameter(std::string("lang"), std::to_string(lang));
}

