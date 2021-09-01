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

#include <alibabacloud/mts/model/QuerySubtitleJobListRequest.h>

using AlibabaCloud::Mts::Model::QuerySubtitleJobListRequest;

QuerySubtitleJobListRequest::QuerySubtitleJobListRequest()
    : RpcServiceRequest("mts", "2014-06-18", "QuerySubtitleJobList") {
  setMethod(HttpRequest::Method::Post);
}

QuerySubtitleJobListRequest::~QuerySubtitleJobListRequest() {}

long QuerySubtitleJobListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QuerySubtitleJobListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QuerySubtitleJobListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QuerySubtitleJobListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QuerySubtitleJobListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void QuerySubtitleJobListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long QuerySubtitleJobListRequest::getOwnerId() const {
  return ownerId_;
}

void QuerySubtitleJobListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QuerySubtitleJobListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QuerySubtitleJobListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QuerySubtitleJobListRequest::getJobIds() const {
  return jobIds_;
}

void QuerySubtitleJobListRequest::setJobIds(const std::string &jobIds) {
  jobIds_ = jobIds;
  setParameter(std::string("JobIds"), jobIds);
}

