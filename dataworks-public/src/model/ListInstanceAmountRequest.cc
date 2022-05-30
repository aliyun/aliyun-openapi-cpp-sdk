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

#include <alibabacloud/dataworks-public/model/ListInstanceAmountRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListInstanceAmountRequest;

ListInstanceAmountRequest::ListInstanceAmountRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListInstanceAmount") {
  setMethod(HttpRequest::Method::Post);
}

ListInstanceAmountRequest::~ListInstanceAmountRequest() {}

std::string ListInstanceAmountRequest::getBeginDate() const {
  return beginDate_;
}

void ListInstanceAmountRequest::setBeginDate(const std::string &beginDate) {
  beginDate_ = beginDate;
  setBodyParameter(std::string("BeginDate"), beginDate);
}

std::string ListInstanceAmountRequest::getEndDate() const {
  return endDate_;
}

void ListInstanceAmountRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setBodyParameter(std::string("EndDate"), endDate);
}

long ListInstanceAmountRequest::getProjectId() const {
  return projectId_;
}

void ListInstanceAmountRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

