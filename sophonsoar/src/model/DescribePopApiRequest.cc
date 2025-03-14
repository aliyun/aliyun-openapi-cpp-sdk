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

#include <alibabacloud/sophonsoar/model/DescribePopApiRequest.h>

using AlibabaCloud::Sophonsoar::Model::DescribePopApiRequest;

DescribePopApiRequest::DescribePopApiRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "DescribePopApi") {
  setMethod(HttpRequest::Method::Get);
}

DescribePopApiRequest::~DescribePopApiRequest() {}

std::string DescribePopApiRequest::getPopCode() const {
  return popCode_;
}

void DescribePopApiRequest::setPopCode(const std::string &popCode) {
  popCode_ = popCode;
  setParameter(std::string("PopCode"), popCode);
}

std::string DescribePopApiRequest::getRoleFor() const {
  return roleFor_;
}

void DescribePopApiRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string DescribePopApiRequest::getApiVersion() const {
  return apiVersion_;
}

void DescribePopApiRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setParameter(std::string("ApiVersion"), apiVersion);
}

std::string DescribePopApiRequest::getEnv() const {
  return env_;
}

void DescribePopApiRequest::setEnv(const std::string &env) {
  env_ = env;
  setParameter(std::string("Env"), env);
}

std::string DescribePopApiRequest::getApiName() const {
  return apiName_;
}

void DescribePopApiRequest::setApiName(const std::string &apiName) {
  apiName_ = apiName;
  setParameter(std::string("ApiName"), apiName);
}

std::string DescribePopApiRequest::getRoleType() const {
  return roleType_;
}

void DescribePopApiRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string DescribePopApiRequest::getLang() const {
  return lang_;
}

void DescribePopApiRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

