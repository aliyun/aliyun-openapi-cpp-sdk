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

#include <alibabacloud/mts/model/QueryJobListRequest.h>

using AlibabaCloud::Mts::Model::QueryJobListRequest;

QueryJobListRequest::QueryJobListRequest()
    : RpcServiceRequest("mts", "2014-06-18", "QueryJobList") {
  setMethod(HttpRequest::Method::Post);
}

QueryJobListRequest::~QueryJobListRequest() {}

long QueryJobListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryJobListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool QueryJobListRequest::getIncludePipelineInfo() const {
  return includePipelineInfo_;
}

void QueryJobListRequest::setIncludePipelineInfo(bool includePipelineInfo) {
  includePipelineInfo_ = includePipelineInfo;
  setParameter(std::string("IncludePipelineInfo"), includePipelineInfo ? "true" : "false");
}

std::string QueryJobListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryJobListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QueryJobListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryJobListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QueryJobListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void QueryJobListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long QueryJobListRequest::getOwnerId() const {
  return ownerId_;
}

void QueryJobListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryJobListRequest::getJobIds() const {
  return jobIds_;
}

void QueryJobListRequest::setJobIds(const std::string &jobIds) {
  jobIds_ = jobIds;
  setParameter(std::string("JobIds"), jobIds);
}

