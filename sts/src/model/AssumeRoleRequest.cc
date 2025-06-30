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

#include <alibabacloud/sts/model/AssumeRoleRequest.h>

using AlibabaCloud::Sts::Model::AssumeRoleRequest;

AssumeRoleRequest::AssumeRoleRequest()
    : RpcServiceRequest("sts", "2015-04-01", "AssumeRole") {
  setMethod(HttpRequest::Method::Post);
}

AssumeRoleRequest::~AssumeRoleRequest() {}

std::string AssumeRoleRequest::getExternalId() const {
  return externalId_;
}

void AssumeRoleRequest::setExternalId(const std::string &externalId) {
  externalId_ = externalId;
  setParameter(std::string("ExternalId"), externalId);
}

std::string AssumeRoleRequest::getSourceIdentity() const {
  return sourceIdentity_;
}

void AssumeRoleRequest::setSourceIdentity(const std::string &sourceIdentity) {
  sourceIdentity_ = sourceIdentity;
  setParameter(std::string("SourceIdentity"), sourceIdentity);
}

std::string AssumeRoleRequest::getRoleSessionName() const {
  return roleSessionName_;
}

void AssumeRoleRequest::setRoleSessionName(const std::string &roleSessionName) {
  roleSessionName_ = roleSessionName;
  setParameter(std::string("RoleSessionName"), roleSessionName);
}

std::string AssumeRoleRequest::getPolicy() const {
  return policy_;
}

void AssumeRoleRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

std::string AssumeRoleRequest::getRoleArn() const {
  return roleArn_;
}

void AssumeRoleRequest::setRoleArn(const std::string &roleArn) {
  roleArn_ = roleArn;
  setParameter(std::string("RoleArn"), roleArn);
}

long AssumeRoleRequest::getDurationSeconds() const {
  return durationSeconds_;
}

void AssumeRoleRequest::setDurationSeconds(long durationSeconds) {
  durationSeconds_ = durationSeconds;
  setParameter(std::string("DurationSeconds"), std::to_string(durationSeconds));
}

