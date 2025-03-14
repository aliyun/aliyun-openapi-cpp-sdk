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

#include <alibabacloud/sophonsoar/model/DescribeComponentAssetsRequest.h>

using AlibabaCloud::Sophonsoar::Model::DescribeComponentAssetsRequest;

DescribeComponentAssetsRequest::DescribeComponentAssetsRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "DescribeComponentAssets") {
  setMethod(HttpRequest::Method::Get);
}

DescribeComponentAssetsRequest::~DescribeComponentAssetsRequest() {}

std::string DescribeComponentAssetsRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeComponentAssetsRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string DescribeComponentAssetsRequest::getComponentName() const {
  return componentName_;
}

void DescribeComponentAssetsRequest::setComponentName(const std::string &componentName) {
  componentName_ = componentName;
  setParameter(std::string("ComponentName"), componentName);
}

std::string DescribeComponentAssetsRequest::getRoleType() const {
  return roleType_;
}

void DescribeComponentAssetsRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string DescribeComponentAssetsRequest::getLang() const {
  return lang_;
}

void DescribeComponentAssetsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

