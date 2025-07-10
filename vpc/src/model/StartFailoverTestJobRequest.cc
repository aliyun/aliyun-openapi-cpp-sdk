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

#include <alibabacloud/vpc/model/StartFailoverTestJobRequest.h>

using AlibabaCloud::Vpc::Model::StartFailoverTestJobRequest;

StartFailoverTestJobRequest::StartFailoverTestJobRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "StartFailoverTestJob") {
  setMethod(HttpRequest::Method::Post);
}

StartFailoverTestJobRequest::~StartFailoverTestJobRequest() {}

std::string StartFailoverTestJobRequest::getClientToken() const {
  return clientToken_;
}

void StartFailoverTestJobRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string StartFailoverTestJobRequest::getJobId() const {
  return jobId_;
}

void StartFailoverTestJobRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string StartFailoverTestJobRequest::getRegionId() const {
  return regionId_;
}

void StartFailoverTestJobRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string StartFailoverTestJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void StartFailoverTestJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string StartFailoverTestJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void StartFailoverTestJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long StartFailoverTestJobRequest::getOwnerId() const {
  return ownerId_;
}

void StartFailoverTestJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

