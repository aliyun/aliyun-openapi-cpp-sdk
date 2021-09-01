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

#include <alibabacloud/mts/model/QuerySnapshotJobListRequest.h>

using AlibabaCloud::Mts::Model::QuerySnapshotJobListRequest;

QuerySnapshotJobListRequest::QuerySnapshotJobListRequest()
    : RpcServiceRequest("mts", "2014-06-18", "QuerySnapshotJobList") {
  setMethod(HttpRequest::Method::Post);
}

QuerySnapshotJobListRequest::~QuerySnapshotJobListRequest() {}

long QuerySnapshotJobListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QuerySnapshotJobListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QuerySnapshotJobListRequest::getNextPageToken() const {
  return nextPageToken_;
}

void QuerySnapshotJobListRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

std::string QuerySnapshotJobListRequest::getStartOfJobCreatedTimeRange() const {
  return startOfJobCreatedTimeRange_;
}

void QuerySnapshotJobListRequest::setStartOfJobCreatedTimeRange(const std::string &startOfJobCreatedTimeRange) {
  startOfJobCreatedTimeRange_ = startOfJobCreatedTimeRange;
  setParameter(std::string("StartOfJobCreatedTimeRange"), startOfJobCreatedTimeRange);
}

std::string QuerySnapshotJobListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QuerySnapshotJobListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QuerySnapshotJobListRequest::getState() const {
  return state_;
}

void QuerySnapshotJobListRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string QuerySnapshotJobListRequest::getEndOfJobCreatedTimeRange() const {
  return endOfJobCreatedTimeRange_;
}

void QuerySnapshotJobListRequest::setEndOfJobCreatedTimeRange(const std::string &endOfJobCreatedTimeRange) {
  endOfJobCreatedTimeRange_ = endOfJobCreatedTimeRange;
  setParameter(std::string("EndOfJobCreatedTimeRange"), endOfJobCreatedTimeRange);
}

std::string QuerySnapshotJobListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QuerySnapshotJobListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QuerySnapshotJobListRequest::getSnapshotJobIds() const {
  return snapshotJobIds_;
}

void QuerySnapshotJobListRequest::setSnapshotJobIds(const std::string &snapshotJobIds) {
  snapshotJobIds_ = snapshotJobIds;
  setParameter(std::string("SnapshotJobIds"), snapshotJobIds);
}

std::string QuerySnapshotJobListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void QuerySnapshotJobListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long QuerySnapshotJobListRequest::getMaximumPageSize() const {
  return maximumPageSize_;
}

void QuerySnapshotJobListRequest::setMaximumPageSize(long maximumPageSize) {
  maximumPageSize_ = maximumPageSize;
  setParameter(std::string("MaximumPageSize"), std::to_string(maximumPageSize));
}

long QuerySnapshotJobListRequest::getOwnerId() const {
  return ownerId_;
}

void QuerySnapshotJobListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QuerySnapshotJobListRequest::getPipelineId() const {
  return pipelineId_;
}

void QuerySnapshotJobListRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

