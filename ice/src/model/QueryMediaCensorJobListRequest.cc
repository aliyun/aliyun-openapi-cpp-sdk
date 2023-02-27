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

#include <alibabacloud/ice/model/QueryMediaCensorJobListRequest.h>

using AlibabaCloud::ICE::Model::QueryMediaCensorJobListRequest;

QueryMediaCensorJobListRequest::QueryMediaCensorJobListRequest()
    : RpcServiceRequest("ice", "2020-11-09", "QueryMediaCensorJobList") {
  setMethod(HttpRequest::Method::Post);
}

QueryMediaCensorJobListRequest::~QueryMediaCensorJobListRequest() {}

long QueryMediaCensorJobListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryMediaCensorJobListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryMediaCensorJobListRequest::getNextPageToken() const {
  return nextPageToken_;
}

void QueryMediaCensorJobListRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

std::string QueryMediaCensorJobListRequest::getStartOfJobCreatedTimeRange() const {
  return startOfJobCreatedTimeRange_;
}

void QueryMediaCensorJobListRequest::setStartOfJobCreatedTimeRange(const std::string &startOfJobCreatedTimeRange) {
  startOfJobCreatedTimeRange_ = startOfJobCreatedTimeRange;
  setParameter(std::string("StartOfJobCreatedTimeRange"), startOfJobCreatedTimeRange);
}

std::string QueryMediaCensorJobListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryMediaCensorJobListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QueryMediaCensorJobListRequest::getState() const {
  return state_;
}

void QueryMediaCensorJobListRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string QueryMediaCensorJobListRequest::getEndOfJobCreatedTimeRange() const {
  return endOfJobCreatedTimeRange_;
}

void QueryMediaCensorJobListRequest::setEndOfJobCreatedTimeRange(const std::string &endOfJobCreatedTimeRange) {
  endOfJobCreatedTimeRange_ = endOfJobCreatedTimeRange;
  setParameter(std::string("EndOfJobCreatedTimeRange"), endOfJobCreatedTimeRange);
}

std::string QueryMediaCensorJobListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryMediaCensorJobListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QueryMediaCensorJobListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void QueryMediaCensorJobListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long QueryMediaCensorJobListRequest::getMaximumPageSize() const {
  return maximumPageSize_;
}

void QueryMediaCensorJobListRequest::setMaximumPageSize(long maximumPageSize) {
  maximumPageSize_ = maximumPageSize;
  setParameter(std::string("MaximumPageSize"), std::to_string(maximumPageSize));
}

long QueryMediaCensorJobListRequest::getOwnerId() const {
  return ownerId_;
}

void QueryMediaCensorJobListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryMediaCensorJobListRequest::getPipelineId() const {
  return pipelineId_;
}

void QueryMediaCensorJobListRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

std::string QueryMediaCensorJobListRequest::getJobIds() const {
  return jobIds_;
}

void QueryMediaCensorJobListRequest::setJobIds(const std::string &jobIds) {
  jobIds_ = jobIds;
  setParameter(std::string("JobIds"), jobIds);
}

