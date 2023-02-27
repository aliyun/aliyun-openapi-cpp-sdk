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

#include <alibabacloud/ice/model/QueryMediaCensorJobDetailRequest.h>

using AlibabaCloud::ICE::Model::QueryMediaCensorJobDetailRequest;

QueryMediaCensorJobDetailRequest::QueryMediaCensorJobDetailRequest()
    : RpcServiceRequest("ice", "2020-11-09", "QueryMediaCensorJobDetail") {
  setMethod(HttpRequest::Method::Post);
}

QueryMediaCensorJobDetailRequest::~QueryMediaCensorJobDetailRequest() {}

long QueryMediaCensorJobDetailRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryMediaCensorJobDetailRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryMediaCensorJobDetailRequest::getNextPageToken() const {
  return nextPageToken_;
}

void QueryMediaCensorJobDetailRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

std::string QueryMediaCensorJobDetailRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryMediaCensorJobDetailRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QueryMediaCensorJobDetailRequest::getJobId() const {
  return jobId_;
}

void QueryMediaCensorJobDetailRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string QueryMediaCensorJobDetailRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryMediaCensorJobDetailRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QueryMediaCensorJobDetailRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void QueryMediaCensorJobDetailRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long QueryMediaCensorJobDetailRequest::getMaximumPageSize() const {
  return maximumPageSize_;
}

void QueryMediaCensorJobDetailRequest::setMaximumPageSize(long maximumPageSize) {
  maximumPageSize_ = maximumPageSize;
  setParameter(std::string("MaximumPageSize"), std::to_string(maximumPageSize));
}

long QueryMediaCensorJobDetailRequest::getOwnerId() const {
  return ownerId_;
}

void QueryMediaCensorJobDetailRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

