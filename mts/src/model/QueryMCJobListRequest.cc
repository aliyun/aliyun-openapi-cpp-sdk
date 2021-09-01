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

#include <alibabacloud/mts/model/QueryMCJobListRequest.h>

using AlibabaCloud::Mts::Model::QueryMCJobListRequest;

QueryMCJobListRequest::QueryMCJobListRequest()
    : RpcServiceRequest("mts", "2014-06-18", "QueryMCJobList") {
  setMethod(HttpRequest::Method::Post);
}

QueryMCJobListRequest::~QueryMCJobListRequest() {}

long QueryMCJobListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryMCJobListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryMCJobListRequest::getNextPageToken() const {
  return nextPageToken_;
}

void QueryMCJobListRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

std::string QueryMCJobListRequest::getStartOfJobCreatedTimeRange() const {
  return startOfJobCreatedTimeRange_;
}

void QueryMCJobListRequest::setStartOfJobCreatedTimeRange(const std::string &startOfJobCreatedTimeRange) {
  startOfJobCreatedTimeRange_ = startOfJobCreatedTimeRange;
  setParameter(std::string("StartOfJobCreatedTimeRange"), startOfJobCreatedTimeRange);
}

std::string QueryMCJobListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryMCJobListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QueryMCJobListRequest::getState() const {
  return state_;
}

void QueryMCJobListRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string QueryMCJobListRequest::getEndOfJobCreatedTimeRange() const {
  return endOfJobCreatedTimeRange_;
}

void QueryMCJobListRequest::setEndOfJobCreatedTimeRange(const std::string &endOfJobCreatedTimeRange) {
  endOfJobCreatedTimeRange_ = endOfJobCreatedTimeRange;
  setParameter(std::string("EndOfJobCreatedTimeRange"), endOfJobCreatedTimeRange);
}

std::string QueryMCJobListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryMCJobListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QueryMCJobListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void QueryMCJobListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long QueryMCJobListRequest::getMaximumPageSize() const {
  return maximumPageSize_;
}

void QueryMCJobListRequest::setMaximumPageSize(long maximumPageSize) {
  maximumPageSize_ = maximumPageSize;
  setParameter(std::string("MaximumPageSize"), std::to_string(maximumPageSize));
}

long QueryMCJobListRequest::getOwnerId() const {
  return ownerId_;
}

void QueryMCJobListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryMCJobListRequest::getPipelineId() const {
  return pipelineId_;
}

void QueryMCJobListRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

std::string QueryMCJobListRequest::getJobIds() const {
  return jobIds_;
}

void QueryMCJobListRequest::setJobIds(const std::string &jobIds) {
  jobIds_ = jobIds;
  setParameter(std::string("JobIds"), jobIds);
}

