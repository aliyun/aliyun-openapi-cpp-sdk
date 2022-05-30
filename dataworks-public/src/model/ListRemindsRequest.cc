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

#include <alibabacloud/dataworks-public/model/ListRemindsRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListRemindsRequest;

ListRemindsRequest::ListRemindsRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListReminds") {
  setMethod(HttpRequest::Method::Post);
}

ListRemindsRequest::~ListRemindsRequest() {}

std::string ListRemindsRequest::getSearchText() const {
  return searchText_;
}

void ListRemindsRequest::setSearchText(const std::string &searchText) {
  searchText_ = searchText;
  setBodyParameter(std::string("SearchText"), searchText);
}

std::string ListRemindsRequest::getFounder() const {
  return founder_;
}

void ListRemindsRequest::setFounder(const std::string &founder) {
  founder_ = founder;
  setBodyParameter(std::string("Founder"), founder);
}

std::string ListRemindsRequest::getRemindTypes() const {
  return remindTypes_;
}

void ListRemindsRequest::setRemindTypes(const std::string &remindTypes) {
  remindTypes_ = remindTypes;
  setBodyParameter(std::string("RemindTypes"), remindTypes);
}

int ListRemindsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListRemindsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListRemindsRequest::getAlertTarget() const {
  return alertTarget_;
}

void ListRemindsRequest::setAlertTarget(const std::string &alertTarget) {
  alertTarget_ = alertTarget;
  setBodyParameter(std::string("AlertTarget"), alertTarget);
}

int ListRemindsRequest::getPageSize() const {
  return pageSize_;
}

void ListRemindsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListRemindsRequest::getNodeId() const {
  return nodeId_;
}

void ListRemindsRequest::setNodeId(long nodeId) {
  nodeId_ = nodeId;
  setBodyParameter(std::string("NodeId"), std::to_string(nodeId));
}

