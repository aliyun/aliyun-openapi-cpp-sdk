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

#include <alibabacloud/mts/model/ListFpShotNotaryRequest.h>

using AlibabaCloud::Mts::Model::ListFpShotNotaryRequest;

ListFpShotNotaryRequest::ListFpShotNotaryRequest()
    : RpcServiceRequest("mts", "2014-06-18", "ListFpShotNotary") {
  setMethod(HttpRequest::Method::Post);
}

ListFpShotNotaryRequest::~ListFpShotNotaryRequest() {}

long ListFpShotNotaryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListFpShotNotaryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListFpShotNotaryRequest::getFpDBId() const {
  return fpDBId_;
}

void ListFpShotNotaryRequest::setFpDBId(const std::string &fpDBId) {
  fpDBId_ = fpDBId;
  setParameter(std::string("FpDBId"), fpDBId);
}

std::string ListFpShotNotaryRequest::getNextPageToken() const {
  return nextPageToken_;
}

void ListFpShotNotaryRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

std::string ListFpShotNotaryRequest::getStartOfCreatedTimeRange() const {
  return startOfCreatedTimeRange_;
}

void ListFpShotNotaryRequest::setStartOfCreatedTimeRange(const std::string &startOfCreatedTimeRange) {
  startOfCreatedTimeRange_ = startOfCreatedTimeRange;
  setParameter(std::string("StartOfCreatedTimeRange"), startOfCreatedTimeRange);
}

std::string ListFpShotNotaryRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListFpShotNotaryRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListFpShotNotaryRequest::getEndOfCreatedTimeRange() const {
  return endOfCreatedTimeRange_;
}

void ListFpShotNotaryRequest::setEndOfCreatedTimeRange(const std::string &endOfCreatedTimeRange) {
  endOfCreatedTimeRange_ = endOfCreatedTimeRange;
  setParameter(std::string("EndOfCreatedTimeRange"), endOfCreatedTimeRange);
}

std::string ListFpShotNotaryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListFpShotNotaryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListFpShotNotaryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListFpShotNotaryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListFpShotNotaryRequest::getMaximumPageSize() const {
  return maximumPageSize_;
}

void ListFpShotNotaryRequest::setMaximumPageSize(long maximumPageSize) {
  maximumPageSize_ = maximumPageSize;
  setParameter(std::string("MaximumPageSize"), std::to_string(maximumPageSize));
}

long ListFpShotNotaryRequest::getOwnerId() const {
  return ownerId_;
}

void ListFpShotNotaryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

