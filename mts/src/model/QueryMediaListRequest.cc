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

#include <alibabacloud/mts/model/QueryMediaListRequest.h>

using AlibabaCloud::Mts::Model::QueryMediaListRequest;

QueryMediaListRequest::QueryMediaListRequest()
    : RpcServiceRequest("mts", "2014-06-18", "QueryMediaList") {
  setMethod(HttpRequest::Method::Post);
}

QueryMediaListRequest::~QueryMediaListRequest() {}

long QueryMediaListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryMediaListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool QueryMediaListRequest::getIncludeSummaryList() const {
  return includeSummaryList_;
}

void QueryMediaListRequest::setIncludeSummaryList(bool includeSummaryList) {
  includeSummaryList_ = includeSummaryList;
  setParameter(std::string("IncludeSummaryList"), includeSummaryList ? "true" : "false");
}

std::string QueryMediaListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryMediaListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QueryMediaListRequest::getMediaIds() const {
  return mediaIds_;
}

void QueryMediaListRequest::setMediaIds(const std::string &mediaIds) {
  mediaIds_ = mediaIds;
  setParameter(std::string("MediaIds"), mediaIds);
}

bool QueryMediaListRequest::getIncludePlayList() const {
  return includePlayList_;
}

void QueryMediaListRequest::setIncludePlayList(bool includePlayList) {
  includePlayList_ = includePlayList;
  setParameter(std::string("IncludePlayList"), includePlayList ? "true" : "false");
}

std::string QueryMediaListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryMediaListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

bool QueryMediaListRequest::getIncludeSnapshotList() const {
  return includeSnapshotList_;
}

void QueryMediaListRequest::setIncludeSnapshotList(bool includeSnapshotList) {
  includeSnapshotList_ = includeSnapshotList;
  setParameter(std::string("IncludeSnapshotList"), includeSnapshotList ? "true" : "false");
}

std::string QueryMediaListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void QueryMediaListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long QueryMediaListRequest::getOwnerId() const {
  return ownerId_;
}

void QueryMediaListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool QueryMediaListRequest::getIncludeMediaInfo() const {
  return includeMediaInfo_;
}

void QueryMediaListRequest::setIncludeMediaInfo(bool includeMediaInfo) {
  includeMediaInfo_ = includeMediaInfo;
  setParameter(std::string("IncludeMediaInfo"), includeMediaInfo ? "true" : "false");
}

