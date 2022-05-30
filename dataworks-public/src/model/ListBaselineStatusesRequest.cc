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

#include <alibabacloud/dataworks-public/model/ListBaselineStatusesRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListBaselineStatusesRequest;

ListBaselineStatusesRequest::ListBaselineStatusesRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListBaselineStatuses") {
  setMethod(HttpRequest::Method::Post);
}

ListBaselineStatusesRequest::~ListBaselineStatusesRequest() {}

std::string ListBaselineStatusesRequest::getSearchText() const {
  return searchText_;
}

void ListBaselineStatusesRequest::setSearchText(const std::string &searchText) {
  searchText_ = searchText;
  setBodyParameter(std::string("SearchText"), searchText);
}

std::string ListBaselineStatusesRequest::getOwner() const {
  return owner_;
}

void ListBaselineStatusesRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setBodyParameter(std::string("Owner"), owner);
}

std::string ListBaselineStatusesRequest::getPriority() const {
  return priority_;
}

void ListBaselineStatusesRequest::setPriority(const std::string &priority) {
  priority_ = priority;
  setBodyParameter(std::string("Priority"), priority);
}

int ListBaselineStatusesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListBaselineStatusesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListBaselineStatusesRequest::getTopicId() const {
  return topicId_;
}

void ListBaselineStatusesRequest::setTopicId(long topicId) {
  topicId_ = topicId;
  setBodyParameter(std::string("TopicId"), std::to_string(topicId));
}

std::string ListBaselineStatusesRequest::getBizdate() const {
  return bizdate_;
}

void ListBaselineStatusesRequest::setBizdate(const std::string &bizdate) {
  bizdate_ = bizdate;
  setBodyParameter(std::string("Bizdate"), bizdate);
}

std::string ListBaselineStatusesRequest::getFinishStatus() const {
  return finishStatus_;
}

void ListBaselineStatusesRequest::setFinishStatus(const std::string &finishStatus) {
  finishStatus_ = finishStatus;
  setBodyParameter(std::string("FinishStatus"), finishStatus);
}

int ListBaselineStatusesRequest::getPageSize() const {
  return pageSize_;
}

void ListBaselineStatusesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListBaselineStatusesRequest::getBaselineTypes() const {
  return baselineTypes_;
}

void ListBaselineStatusesRequest::setBaselineTypes(const std::string &baselineTypes) {
  baselineTypes_ = baselineTypes;
  setBodyParameter(std::string("BaselineTypes"), baselineTypes);
}

std::string ListBaselineStatusesRequest::getStatus() const {
  return status_;
}

void ListBaselineStatusesRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}

