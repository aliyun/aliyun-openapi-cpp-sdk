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

#include <alibabacloud/dataworks-public/model/ListDutyRostersRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListDutyRostersRequest;

ListDutyRostersRequest::ListDutyRostersRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListDutyRosters") {
  setMethod(HttpRequest::Method::Post);
}

ListDutyRostersRequest::~ListDutyRostersRequest() {}

std::string ListDutyRostersRequest::getDutyRosterOwner() const {
  return dutyRosterOwner_;
}

void ListDutyRostersRequest::setDutyRosterOwner(const std::string &dutyRosterOwner) {
  dutyRosterOwner_ = dutyRosterOwner;
  setBodyParameter(std::string("DutyRosterOwner"), dutyRosterOwner);
}

std::string ListDutyRostersRequest::getDutyRosterName() const {
  return dutyRosterName_;
}

void ListDutyRostersRequest::setDutyRosterName(const std::string &dutyRosterName) {
  dutyRosterName_ = dutyRosterName;
  setBodyParameter(std::string("DutyRosterName"), dutyRosterName);
}

int ListDutyRostersRequest::getPageSize() const {
  return pageSize_;
}

void ListDutyRostersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListDutyRostersRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDutyRostersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

