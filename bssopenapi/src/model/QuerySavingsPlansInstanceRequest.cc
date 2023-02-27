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

#include <alibabacloud/bssopenapi/model/QuerySavingsPlansInstanceRequest.h>

using AlibabaCloud::BssOpenApi::Model::QuerySavingsPlansInstanceRequest;

QuerySavingsPlansInstanceRequest::QuerySavingsPlansInstanceRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "QuerySavingsPlansInstance") {
  setMethod(HttpRequest::Method::Post);
}

QuerySavingsPlansInstanceRequest::~QuerySavingsPlansInstanceRequest() {}

std::string QuerySavingsPlansInstanceRequest::getEndTime() const {
  return endTime_;
}

void QuerySavingsPlansInstanceRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string QuerySavingsPlansInstanceRequest::getStartTime() const {
  return startTime_;
}

void QuerySavingsPlansInstanceRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string QuerySavingsPlansInstanceRequest::getLocale() const {
  return locale_;
}

void QuerySavingsPlansInstanceRequest::setLocale(const std::string &locale) {
  locale_ = locale;
  setParameter(std::string("Locale"), locale);
}

int QuerySavingsPlansInstanceRequest::getPageNum() const {
  return pageNum_;
}

void QuerySavingsPlansInstanceRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string QuerySavingsPlansInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void QuerySavingsPlansInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int QuerySavingsPlansInstanceRequest::getPageSize() const {
  return pageSize_;
}

void QuerySavingsPlansInstanceRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<QuerySavingsPlansInstanceRequest::Tag> QuerySavingsPlansInstanceRequest::getTag() const {
  return tag_;
}

void QuerySavingsPlansInstanceRequest::setTag(const std::vector<QuerySavingsPlansInstanceRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string QuerySavingsPlansInstanceRequest::getStatus() const {
  return status_;
}

void QuerySavingsPlansInstanceRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

