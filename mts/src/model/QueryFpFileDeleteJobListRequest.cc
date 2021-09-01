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

#include <alibabacloud/mts/model/QueryFpFileDeleteJobListRequest.h>

using AlibabaCloud::Mts::Model::QueryFpFileDeleteJobListRequest;

QueryFpFileDeleteJobListRequest::QueryFpFileDeleteJobListRequest()
    : RpcServiceRequest("mts", "2014-06-18", "QueryFpFileDeleteJobList") {
  setMethod(HttpRequest::Method::Post);
}

QueryFpFileDeleteJobListRequest::~QueryFpFileDeleteJobListRequest() {}

long QueryFpFileDeleteJobListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryFpFileDeleteJobListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryFpFileDeleteJobListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryFpFileDeleteJobListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QueryFpFileDeleteJobListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void QueryFpFileDeleteJobListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long QueryFpFileDeleteJobListRequest::getOwnerId() const {
  return ownerId_;
}

void QueryFpFileDeleteJobListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryFpFileDeleteJobListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryFpFileDeleteJobListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QueryFpFileDeleteJobListRequest::getJobIds() const {
  return jobIds_;
}

void QueryFpFileDeleteJobListRequest::setJobIds(const std::string &jobIds) {
  jobIds_ = jobIds;
  setParameter(std::string("JobIds"), jobIds);
}

