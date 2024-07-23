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

#include <alibabacloud/mts/model/ListFpShotFilesRequest.h>

using AlibabaCloud::Mts::Model::ListFpShotFilesRequest;

ListFpShotFilesRequest::ListFpShotFilesRequest()
    : RpcServiceRequest("mts", "2014-06-18", "ListFpShotFiles") {
  setMethod(HttpRequest::Method::Post);
}

ListFpShotFilesRequest::~ListFpShotFilesRequest() {}

long ListFpShotFilesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListFpShotFilesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListFpShotFilesRequest::getFpDBId() const {
  return fpDBId_;
}

void ListFpShotFilesRequest::setFpDBId(const std::string &fpDBId) {
  fpDBId_ = fpDBId;
  setParameter(std::string("FpDBId"), fpDBId);
}

std::string ListFpShotFilesRequest::getNextPageToken() const {
  return nextPageToken_;
}

void ListFpShotFilesRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

std::string ListFpShotFilesRequest::getStartTime() const {
  return startTime_;
}

void ListFpShotFilesRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string ListFpShotFilesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListFpShotFilesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int ListFpShotFilesRequest::getPageSize() const {
  return pageSize_;
}

void ListFpShotFilesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListFpShotFilesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListFpShotFilesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListFpShotFilesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListFpShotFilesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ListFpShotFilesRequest::getEndTime() const {
  return endTime_;
}

void ListFpShotFilesRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long ListFpShotFilesRequest::getOwnerId() const {
  return ownerId_;
}

void ListFpShotFilesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

