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

#include <alibabacloud/dataworks-public/model/ListCheckProcessesRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListCheckProcessesRequest;

ListCheckProcessesRequest::ListCheckProcessesRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListCheckProcesses") {
  setMethod(HttpRequest::Method::Post);
}

ListCheckProcessesRequest::~ListCheckProcessesRequest() {}

std::string ListCheckProcessesRequest::getMessageId() const {
  return messageId_;
}

void ListCheckProcessesRequest::setMessageId(const std::string &messageId) {
  messageId_ = messageId;
  setBodyParameter(std::string("MessageId"), messageId);
}

std::string ListCheckProcessesRequest::get_Operator() const {
  return _operator_;
}

void ListCheckProcessesRequest::set_Operator(const std::string &_operator) {
  _operator_ = _operator;
  setBodyParameter(std::string("Operator"), _operator);
}

int ListCheckProcessesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListCheckProcessesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListCheckProcessesRequest::getPageSize() const {
  return pageSize_;
}

void ListCheckProcessesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListCheckProcessesRequest::getProjectId() const {
  return projectId_;
}

void ListCheckProcessesRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string ListCheckProcessesRequest::getEventCode() const {
  return eventCode_;
}

void ListCheckProcessesRequest::setEventCode(const std::string &eventCode) {
  eventCode_ = eventCode;
  setBodyParameter(std::string("EventCode"), eventCode);
}

std::string ListCheckProcessesRequest::getStatus() const {
  return status_;
}

void ListCheckProcessesRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}

