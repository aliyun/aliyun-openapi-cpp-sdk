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

#include <alibabacloud/sts/model/AssumeRoleWithOIDCRequest.h>

using AlibabaCloud::Sts::Model::AssumeRoleWithOIDCRequest;

AssumeRoleWithOIDCRequest::AssumeRoleWithOIDCRequest()
    : RpcServiceRequest("sts", "2015-04-01", "AssumeRoleWithOIDC") {
  setMethod(HttpRequest::Method::Post);
}

AssumeRoleWithOIDCRequest::~AssumeRoleWithOIDCRequest() {}

std::string AssumeRoleWithOIDCRequest::getRoleArn() const {
  return roleArn_;
}

void AssumeRoleWithOIDCRequest::setRoleArn(const std::string &roleArn) {
  roleArn_ = roleArn;
  setParameter(std::string("RoleArn"), roleArn);
}

std::string AssumeRoleWithOIDCRequest::getRoleSessionName() const {
  return roleSessionName_;
}

void AssumeRoleWithOIDCRequest::setRoleSessionName(const std::string &roleSessionName) {
  roleSessionName_ = roleSessionName;
  setParameter(std::string("RoleSessionName"), roleSessionName);
}

std::string AssumeRoleWithOIDCRequest::getOIDCToken() const {
  return oIDCToken_;
}

void AssumeRoleWithOIDCRequest::setOIDCToken(const std::string &oIDCToken) {
  oIDCToken_ = oIDCToken;
  setParameter(std::string("OIDCToken"), oIDCToken);
}

long AssumeRoleWithOIDCRequest::getDurationSeconds() const {
  return durationSeconds_;
}

void AssumeRoleWithOIDCRequest::setDurationSeconds(long durationSeconds) {
  durationSeconds_ = durationSeconds;
  setParameter(std::string("DurationSeconds"), std::to_string(durationSeconds));
}

std::string AssumeRoleWithOIDCRequest::getOIDCProviderArn() const {
  return oIDCProviderArn_;
}

void AssumeRoleWithOIDCRequest::setOIDCProviderArn(const std::string &oIDCProviderArn) {
  oIDCProviderArn_ = oIDCProviderArn;
  setParameter(std::string("OIDCProviderArn"), oIDCProviderArn);
}

std::string AssumeRoleWithOIDCRequest::getPolicy() const {
  return policy_;
}

void AssumeRoleWithOIDCRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

