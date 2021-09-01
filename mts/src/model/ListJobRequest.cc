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

#include <alibabacloud/mts/model/ListJobRequest.h>

using AlibabaCloud::Mts::Model::ListJobRequest;

ListJobRequest::ListJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "ListJob") {
  setMethod(HttpRequest::Method::Post);
}

ListJobRequest::~ListJobRequest() {}

long ListJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListJobRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListJobRequest::getNextPageToken() const {
  return nextPageToken_;
}

void ListJobRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

std::string ListJobRequest::getStartOfJobCreatedTimeRange() const {
  return startOfJobCreatedTimeRange_;
}

void ListJobRequest::setStartOfJobCreatedTimeRange(const std::string &startOfJobCreatedTimeRange) {
  startOfJobCreatedTimeRange_ = startOfJobCreatedTimeRange;
  setParameter(std::string("StartOfJobCreatedTimeRange"), startOfJobCreatedTimeRange);
}

std::string ListJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListJobRequest::getState() const {
  return state_;
}

void ListJobRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string ListJobRequest::getEndOfJobCreatedTimeRange() const {
  return endOfJobCreatedTimeRange_;
}

void ListJobRequest::setEndOfJobCreatedTimeRange(const std::string &endOfJobCreatedTimeRange) {
  endOfJobCreatedTimeRange_ = endOfJobCreatedTimeRange;
  setParameter(std::string("EndOfJobCreatedTimeRange"), endOfJobCreatedTimeRange);
}

std::string ListJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListJobRequest::getMaximumPageSize() const {
  return maximumPageSize_;
}

void ListJobRequest::setMaximumPageSize(long maximumPageSize) {
  maximumPageSize_ = maximumPageSize;
  setParameter(std::string("MaximumPageSize"), std::to_string(maximumPageSize));
}

long ListJobRequest::getOwnerId() const {
  return ownerId_;
}

void ListJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListJobRequest::getPipelineId() const {
  return pipelineId_;
}

void ListJobRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

