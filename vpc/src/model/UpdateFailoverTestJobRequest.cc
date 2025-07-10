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

#include <alibabacloud/vpc/model/UpdateFailoverTestJobRequest.h>

using AlibabaCloud::Vpc::Model::UpdateFailoverTestJobRequest;

UpdateFailoverTestJobRequest::UpdateFailoverTestJobRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "UpdateFailoverTestJob") {
  setMethod(HttpRequest::Method::Post);
}

UpdateFailoverTestJobRequest::~UpdateFailoverTestJobRequest() {}

std::string UpdateFailoverTestJobRequest::getClientToken() const {
  return clientToken_;
}

void UpdateFailoverTestJobRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateFailoverTestJobRequest::getDescription() const {
  return description_;
}

void UpdateFailoverTestJobRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int UpdateFailoverTestJobRequest::getJobDuration() const {
  return jobDuration_;
}

void UpdateFailoverTestJobRequest::setJobDuration(int jobDuration) {
  jobDuration_ = jobDuration;
  setParameter(std::string("JobDuration"), std::to_string(jobDuration));
}

std::string UpdateFailoverTestJobRequest::getJobId() const {
  return jobId_;
}

void UpdateFailoverTestJobRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string UpdateFailoverTestJobRequest::getRegionId() const {
  return regionId_;
}

void UpdateFailoverTestJobRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> UpdateFailoverTestJobRequest::getResourceId() const {
  return resourceId_;
}

void UpdateFailoverTestJobRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

bool UpdateFailoverTestJobRequest::getDryRun() const {
  return dryRun_;
}

void UpdateFailoverTestJobRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateFailoverTestJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateFailoverTestJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateFailoverTestJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateFailoverTestJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateFailoverTestJobRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateFailoverTestJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateFailoverTestJobRequest::getName() const {
  return name_;
}

void UpdateFailoverTestJobRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

