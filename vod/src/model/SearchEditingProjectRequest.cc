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

#include <alibabacloud/vod/model/SearchEditingProjectRequest.h>

using AlibabaCloud::Vod::Model::SearchEditingProjectRequest;

SearchEditingProjectRequest::SearchEditingProjectRequest()
    : RpcServiceRequest("vod", "2017-03-21", "SearchEditingProject") {
  setMethod(HttpRequest::Method::Post);
}

SearchEditingProjectRequest::~SearchEditingProjectRequest() {}

std::string SearchEditingProjectRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SearchEditingProjectRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

std::string SearchEditingProjectRequest::getStartTime() const {
  return startTime_;
}

void SearchEditingProjectRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string SearchEditingProjectRequest::getTitle() const {
  return title_;
}

void SearchEditingProjectRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string SearchEditingProjectRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SearchEditingProjectRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int SearchEditingProjectRequest::getPageSize() const {
  return pageSize_;
}

void SearchEditingProjectRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string SearchEditingProjectRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SearchEditingProjectRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SearchEditingProjectRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SearchEditingProjectRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string SearchEditingProjectRequest::getEndTime() const {
  return endTime_;
}

void SearchEditingProjectRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string SearchEditingProjectRequest::getOwnerId() const {
  return ownerId_;
}

void SearchEditingProjectRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

int SearchEditingProjectRequest::getPageNo() const {
  return pageNo_;
}

void SearchEditingProjectRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string SearchEditingProjectRequest::getSortBy() const {
  return sortBy_;
}

void SearchEditingProjectRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

std::string SearchEditingProjectRequest::getStatus() const {
  return status_;
}

void SearchEditingProjectRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

