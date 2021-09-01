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

#include <alibabacloud/mts/model/QueryMediaInfoJobListRequest.h>

using AlibabaCloud::Mts::Model::QueryMediaInfoJobListRequest;

QueryMediaInfoJobListRequest::QueryMediaInfoJobListRequest()
    : RpcServiceRequest("mts", "2014-06-18", "QueryMediaInfoJobList") {
  setMethod(HttpRequest::Method::Post);
}

QueryMediaInfoJobListRequest::~QueryMediaInfoJobListRequest() {}

long QueryMediaInfoJobListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryMediaInfoJobListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryMediaInfoJobListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryMediaInfoJobListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QueryMediaInfoJobListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void QueryMediaInfoJobListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long QueryMediaInfoJobListRequest::getOwnerId() const {
  return ownerId_;
}

void QueryMediaInfoJobListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryMediaInfoJobListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryMediaInfoJobListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QueryMediaInfoJobListRequest::getMediaInfoJobIds() const {
  return mediaInfoJobIds_;
}

void QueryMediaInfoJobListRequest::setMediaInfoJobIds(const std::string &mediaInfoJobIds) {
  mediaInfoJobIds_ = mediaInfoJobIds;
  setParameter(std::string("MediaInfoJobIds"), mediaInfoJobIds);
}

