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

#include <alibabacloud/vpc/model/CreateFailoverTestJobRequest.h>

using AlibabaCloud::Vpc::Model::CreateFailoverTestJobRequest;

CreateFailoverTestJobRequest::CreateFailoverTestJobRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateFailoverTestJob") {
  setMethod(HttpRequest::Method::Post);
}

CreateFailoverTestJobRequest::~CreateFailoverTestJobRequest() {}

std::string CreateFailoverTestJobRequest::getClientToken() const {
  return clientToken_;
}

void CreateFailoverTestJobRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateFailoverTestJobRequest::getDescription() const {
  return description_;
}

void CreateFailoverTestJobRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int CreateFailoverTestJobRequest::getJobDuration() const {
  return jobDuration_;
}

void CreateFailoverTestJobRequest::setJobDuration(int jobDuration) {
  jobDuration_ = jobDuration;
  setParameter(std::string("JobDuration"), std::to_string(jobDuration));
}

std::string CreateFailoverTestJobRequest::getRegionId() const {
  return regionId_;
}

void CreateFailoverTestJobRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> CreateFailoverTestJobRequest::getResourceId() const {
  return resourceId_;
}

void CreateFailoverTestJobRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

bool CreateFailoverTestJobRequest::getDryRun() const {
  return dryRun_;
}

void CreateFailoverTestJobRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateFailoverTestJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateFailoverTestJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateFailoverTestJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateFailoverTestJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateFailoverTestJobRequest::getOwnerId() const {
  return ownerId_;
}

void CreateFailoverTestJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateFailoverTestJobRequest::getResourceType() const {
  return resourceType_;
}

void CreateFailoverTestJobRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string CreateFailoverTestJobRequest::getJobType() const {
  return jobType_;
}

void CreateFailoverTestJobRequest::setJobType(const std::string &jobType) {
  jobType_ = jobType;
  setParameter(std::string("JobType"), jobType);
}

std::string CreateFailoverTestJobRequest::getName() const {
  return name_;
}

void CreateFailoverTestJobRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

