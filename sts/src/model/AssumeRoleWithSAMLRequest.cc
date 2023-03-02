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

#include <alibabacloud/sts/model/AssumeRoleWithSAMLRequest.h>

using AlibabaCloud::Sts::Model::AssumeRoleWithSAMLRequest;

AssumeRoleWithSAMLRequest::AssumeRoleWithSAMLRequest()
    : RpcServiceRequest("sts", "2015-04-01", "AssumeRoleWithSAML") {
  setMethod(HttpRequest::Method::Post);
}

AssumeRoleWithSAMLRequest::~AssumeRoleWithSAMLRequest() {}

std::string AssumeRoleWithSAMLRequest::getSAMLAssertion() const {
  return sAMLAssertion_;
}

void AssumeRoleWithSAMLRequest::setSAMLAssertion(const std::string &sAMLAssertion) {
  sAMLAssertion_ = sAMLAssertion;
  setParameter(std::string("SAMLAssertion"), sAMLAssertion);
}

std::string AssumeRoleWithSAMLRequest::getRoleArn() const {
  return roleArn_;
}

void AssumeRoleWithSAMLRequest::setRoleArn(const std::string &roleArn) {
  roleArn_ = roleArn;
  setParameter(std::string("RoleArn"), roleArn);
}

std::string AssumeRoleWithSAMLRequest::getSAMLProviderArn() const {
  return sAMLProviderArn_;
}

void AssumeRoleWithSAMLRequest::setSAMLProviderArn(const std::string &sAMLProviderArn) {
  sAMLProviderArn_ = sAMLProviderArn;
  setParameter(std::string("SAMLProviderArn"), sAMLProviderArn);
}

long AssumeRoleWithSAMLRequest::getDurationSeconds() const {
  return durationSeconds_;
}

void AssumeRoleWithSAMLRequest::setDurationSeconds(long durationSeconds) {
  durationSeconds_ = durationSeconds;
  setParameter(std::string("DurationSeconds"), std::to_string(durationSeconds));
}

std::string AssumeRoleWithSAMLRequest::getPolicy() const {
  return policy_;
}

void AssumeRoleWithSAMLRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

