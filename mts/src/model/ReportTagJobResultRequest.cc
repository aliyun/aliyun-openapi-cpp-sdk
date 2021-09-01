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

#include <alibabacloud/mts/model/ReportTagJobResultRequest.h>

using AlibabaCloud::Mts::Model::ReportTagJobResultRequest;

ReportTagJobResultRequest::ReportTagJobResultRequest()
    : RpcServiceRequest("mts", "2014-06-18", "ReportTagJobResult") {
  setMethod(HttpRequest::Method::Post);
}

ReportTagJobResultRequest::~ReportTagJobResultRequest() {}

long ReportTagJobResultRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ReportTagJobResultRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ReportTagJobResultRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ReportTagJobResultRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ReportTagJobResultRequest::getResult() const {
  return result_;
}

void ReportTagJobResultRequest::setResult(const std::string &result) {
  result_ = result;
  setParameter(std::string("Result"), result);
}

std::string ReportTagJobResultRequest::getJobId() const {
  return jobId_;
}

void ReportTagJobResultRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string ReportTagJobResultRequest::getTag() const {
  return tag_;
}

void ReportTagJobResultRequest::setTag(const std::string &tag) {
  tag_ = tag;
  setParameter(std::string("Tag"), tag);
}

std::string ReportTagJobResultRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ReportTagJobResultRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ReportTagJobResultRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ReportTagJobResultRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ReportTagJobResultRequest::getOwnerId() const {
  return ownerId_;
}

void ReportTagJobResultRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

