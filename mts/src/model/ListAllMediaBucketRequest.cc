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

#include <alibabacloud/mts/model/ListAllMediaBucketRequest.h>

using AlibabaCloud::Mts::Model::ListAllMediaBucketRequest;

ListAllMediaBucketRequest::ListAllMediaBucketRequest()
    : RpcServiceRequest("mts", "2014-06-18", "ListAllMediaBucket") {
  setMethod(HttpRequest::Method::Post);
}

ListAllMediaBucketRequest::~ListAllMediaBucketRequest() {}

long ListAllMediaBucketRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListAllMediaBucketRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListAllMediaBucketRequest::getNextPageToken() const {
  return nextPageToken_;
}

void ListAllMediaBucketRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

std::string ListAllMediaBucketRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListAllMediaBucketRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListAllMediaBucketRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListAllMediaBucketRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListAllMediaBucketRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListAllMediaBucketRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int ListAllMediaBucketRequest::getMaximumPageSize() const {
  return maximumPageSize_;
}

void ListAllMediaBucketRequest::setMaximumPageSize(int maximumPageSize) {
  maximumPageSize_ = maximumPageSize;
  setParameter(std::string("MaximumPageSize"), std::to_string(maximumPageSize));
}

long ListAllMediaBucketRequest::getOwnerId() const {
  return ownerId_;
}

void ListAllMediaBucketRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

