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

#include <alibabacloud/ice/model/QueryDNAJobListRequest.h>

using AlibabaCloud::ICE::Model::QueryDNAJobListRequest;

QueryDNAJobListRequest::QueryDNAJobListRequest()
    : RpcServiceRequest("ice", "2020-11-09", "QueryDNAJobList") {
  setMethod(HttpRequest::Method::Post);
}

QueryDNAJobListRequest::~QueryDNAJobListRequest() {}

long QueryDNAJobListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryDNAJobListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryDNAJobListRequest::getNextPageToken() const {
  return nextPageToken_;
}

void QueryDNAJobListRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

std::string QueryDNAJobListRequest::getStartOfJobCreatedTimeRange() const {
  return startOfJobCreatedTimeRange_;
}

void QueryDNAJobListRequest::setStartOfJobCreatedTimeRange(const std::string &startOfJobCreatedTimeRange) {
  startOfJobCreatedTimeRange_ = startOfJobCreatedTimeRange;
  setParameter(std::string("StartOfJobCreatedTimeRange"), startOfJobCreatedTimeRange);
}

std::string QueryDNAJobListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryDNAJobListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QueryDNAJobListRequest::getUserData() const {
  return userData_;
}

void QueryDNAJobListRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string QueryDNAJobListRequest::getEndOfJobCreatedTimeRange() const {
  return endOfJobCreatedTimeRange_;
}

void QueryDNAJobListRequest::setEndOfJobCreatedTimeRange(const std::string &endOfJobCreatedTimeRange) {
  endOfJobCreatedTimeRange_ = endOfJobCreatedTimeRange;
  setParameter(std::string("EndOfJobCreatedTimeRange"), endOfJobCreatedTimeRange);
}

std::string QueryDNAJobListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryDNAJobListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QueryDNAJobListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void QueryDNAJobListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long QueryDNAJobListRequest::getMaximumPageSize() const {
  return maximumPageSize_;
}

void QueryDNAJobListRequest::setMaximumPageSize(long maximumPageSize) {
  maximumPageSize_ = maximumPageSize;
  setParameter(std::string("MaximumPageSize"), std::to_string(maximumPageSize));
}

long QueryDNAJobListRequest::getOwnerId() const {
  return ownerId_;
}

void QueryDNAJobListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryDNAJobListRequest::getJobIds() const {
  return jobIds_;
}

void QueryDNAJobListRequest::setJobIds(const std::string &jobIds) {
  jobIds_ = jobIds;
  setParameter(std::string("JobIds"), jobIds);
}

std::string QueryDNAJobListRequest::getStatus() const {
  return status_;
}

void QueryDNAJobListRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

