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

#include <alibabacloud/mts/model/QueryFpShotJobListRequest.h>

using AlibabaCloud::Mts::Model::QueryFpShotJobListRequest;

QueryFpShotJobListRequest::QueryFpShotJobListRequest()
    : RpcServiceRequest("mts", "2014-06-18", "QueryFpShotJobList") {
  setMethod(HttpRequest::Method::Post);
}

QueryFpShotJobListRequest::~QueryFpShotJobListRequest() {}

long QueryFpShotJobListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryFpShotJobListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryFpShotJobListRequest::getNextPageToken() const {
  return nextPageToken_;
}

void QueryFpShotJobListRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

std::string QueryFpShotJobListRequest::getStartOfJobCreatedTimeRange() const {
  return startOfJobCreatedTimeRange_;
}

void QueryFpShotJobListRequest::setStartOfJobCreatedTimeRange(const std::string &startOfJobCreatedTimeRange) {
  startOfJobCreatedTimeRange_ = startOfJobCreatedTimeRange;
  setParameter(std::string("StartOfJobCreatedTimeRange"), startOfJobCreatedTimeRange);
}

std::string QueryFpShotJobListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryFpShotJobListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QueryFpShotJobListRequest::getUserData() const {
  return userData_;
}

void QueryFpShotJobListRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string QueryFpShotJobListRequest::getState() const {
  return state_;
}

void QueryFpShotJobListRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string QueryFpShotJobListRequest::getEndOfJobCreatedTimeRange() const {
  return endOfJobCreatedTimeRange_;
}

void QueryFpShotJobListRequest::setEndOfJobCreatedTimeRange(const std::string &endOfJobCreatedTimeRange) {
  endOfJobCreatedTimeRange_ = endOfJobCreatedTimeRange;
  setParameter(std::string("EndOfJobCreatedTimeRange"), endOfJobCreatedTimeRange);
}

std::string QueryFpShotJobListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryFpShotJobListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QueryFpShotJobListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void QueryFpShotJobListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long QueryFpShotJobListRequest::getMaximumPageSize() const {
  return maximumPageSize_;
}

void QueryFpShotJobListRequest::setMaximumPageSize(long maximumPageSize) {
  maximumPageSize_ = maximumPageSize;
  setParameter(std::string("MaximumPageSize"), std::to_string(maximumPageSize));
}

long QueryFpShotJobListRequest::getOwnerId() const {
  return ownerId_;
}

void QueryFpShotJobListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryFpShotJobListRequest::getPipelineId() const {
  return pipelineId_;
}

void QueryFpShotJobListRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

std::string QueryFpShotJobListRequest::getPrimaryKeyList() const {
  return primaryKeyList_;
}

void QueryFpShotJobListRequest::setPrimaryKeyList(const std::string &primaryKeyList) {
  primaryKeyList_ = primaryKeyList;
  setParameter(std::string("PrimaryKeyList"), primaryKeyList);
}

std::string QueryFpShotJobListRequest::getJobIds() const {
  return jobIds_;
}

void QueryFpShotJobListRequest::setJobIds(const std::string &jobIds) {
  jobIds_ = jobIds;
  setParameter(std::string("JobIds"), jobIds);
}

