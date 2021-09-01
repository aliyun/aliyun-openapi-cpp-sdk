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

#include <alibabacloud/mts/model/QueryTerrorismJobListRequest.h>

using AlibabaCloud::Mts::Model::QueryTerrorismJobListRequest;

QueryTerrorismJobListRequest::QueryTerrorismJobListRequest()
    : RpcServiceRequest("mts", "2014-06-18", "QueryTerrorismJobList") {
  setMethod(HttpRequest::Method::Post);
}

QueryTerrorismJobListRequest::~QueryTerrorismJobListRequest() {}

long QueryTerrorismJobListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryTerrorismJobListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryTerrorismJobListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryTerrorismJobListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QueryTerrorismJobListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void QueryTerrorismJobListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long QueryTerrorismJobListRequest::getOwnerId() const {
  return ownerId_;
}

void QueryTerrorismJobListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryTerrorismJobListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryTerrorismJobListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QueryTerrorismJobListRequest::getJobIds() const {
  return jobIds_;
}

void QueryTerrorismJobListRequest::setJobIds(const std::string &jobIds) {
  jobIds_ = jobIds;
  setParameter(std::string("JobIds"), jobIds);
}

