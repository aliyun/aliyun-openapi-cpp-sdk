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

#include <alibabacloud/vod/model/GetAIImageJobsRequest.h>

using AlibabaCloud::Vod::Model::GetAIImageJobsRequest;

GetAIImageJobsRequest::GetAIImageJobsRequest()
    : RpcServiceRequest("vod", "2017-03-21", "GetAIImageJobs") {
  setMethod(HttpRequest::Method::Post);
}

GetAIImageJobsRequest::~GetAIImageJobsRequest() {}

std::string GetAIImageJobsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetAIImageJobsRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

std::string GetAIImageJobsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetAIImageJobsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetAIImageJobsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetAIImageJobsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string GetAIImageJobsRequest::getOwnerId() const {
  return ownerId_;
}

void GetAIImageJobsRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string GetAIImageJobsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetAIImageJobsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetAIImageJobsRequest::getJobIds() const {
  return jobIds_;
}

void GetAIImageJobsRequest::setJobIds(const std::string &jobIds) {
  jobIds_ = jobIds;
  setParameter(std::string("JobIds"), jobIds);
}

