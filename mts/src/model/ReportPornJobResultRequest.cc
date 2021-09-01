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

#include <alibabacloud/mts/model/ReportPornJobResultRequest.h>

using AlibabaCloud::Mts::Model::ReportPornJobResultRequest;

ReportPornJobResultRequest::ReportPornJobResultRequest()
    : RpcServiceRequest("mts", "2014-06-18", "ReportPornJobResult") {
  setMethod(HttpRequest::Method::Post);
}

ReportPornJobResultRequest::~ReportPornJobResultRequest() {}

long ReportPornJobResultRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ReportPornJobResultRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ReportPornJobResultRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ReportPornJobResultRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ReportPornJobResultRequest::getJobId() const {
  return jobId_;
}

void ReportPornJobResultRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string ReportPornJobResultRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ReportPornJobResultRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ReportPornJobResultRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ReportPornJobResultRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ReportPornJobResultRequest::getLabel() const {
  return label_;
}

void ReportPornJobResultRequest::setLabel(const std::string &label) {
  label_ = label;
  setParameter(std::string("Label"), label);
}

long ReportPornJobResultRequest::getOwnerId() const {
  return ownerId_;
}

void ReportPornJobResultRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ReportPornJobResultRequest::getDetail() const {
  return detail_;
}

void ReportPornJobResultRequest::setDetail(const std::string &detail) {
  detail_ = detail;
  setParameter(std::string("Detail"), detail);
}

