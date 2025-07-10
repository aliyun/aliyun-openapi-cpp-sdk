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

#include <alibabacloud/vpc/model/DeleteFailoverTestJobRequest.h>

using AlibabaCloud::Vpc::Model::DeleteFailoverTestJobRequest;

DeleteFailoverTestJobRequest::DeleteFailoverTestJobRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteFailoverTestJob") {
  setMethod(HttpRequest::Method::Post);
}

DeleteFailoverTestJobRequest::~DeleteFailoverTestJobRequest() {}

std::string DeleteFailoverTestJobRequest::getClientToken() const {
  return clientToken_;
}

void DeleteFailoverTestJobRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteFailoverTestJobRequest::getJobId() const {
  return jobId_;
}

void DeleteFailoverTestJobRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string DeleteFailoverTestJobRequest::getRegionId() const {
  return regionId_;
}

void DeleteFailoverTestJobRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteFailoverTestJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteFailoverTestJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteFailoverTestJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteFailoverTestJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteFailoverTestJobRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteFailoverTestJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

