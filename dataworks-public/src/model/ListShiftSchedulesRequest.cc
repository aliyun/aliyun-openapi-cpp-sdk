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

#include <alibabacloud/dataworks-public/model/ListShiftSchedulesRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListShiftSchedulesRequest;

ListShiftSchedulesRequest::ListShiftSchedulesRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListShiftSchedules") {
  setMethod(HttpRequest::Method::Post);
}

ListShiftSchedulesRequest::~ListShiftSchedulesRequest() {}

std::string ListShiftSchedulesRequest::getOwner() const {
  return owner_;
}

void ListShiftSchedulesRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setBodyParameter(std::string("Owner"), owner);
}

int ListShiftSchedulesRequest::getPageSize() const {
  return pageSize_;
}

void ListShiftSchedulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListShiftSchedulesRequest::getShiftScheduleName() const {
  return shiftScheduleName_;
}

void ListShiftSchedulesRequest::setShiftScheduleName(const std::string &shiftScheduleName) {
  shiftScheduleName_ = shiftScheduleName;
  setBodyParameter(std::string("ShiftScheduleName"), shiftScheduleName);
}

int ListShiftSchedulesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListShiftSchedulesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

