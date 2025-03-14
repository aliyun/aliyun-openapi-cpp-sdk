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

#include <alibabacloud/sophonsoar/model/DescribeComponentAssetFormRequest.h>

using AlibabaCloud::Sophonsoar::Model::DescribeComponentAssetFormRequest;

DescribeComponentAssetFormRequest::DescribeComponentAssetFormRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "DescribeComponentAssetForm") {
  setMethod(HttpRequest::Method::Get);
}

DescribeComponentAssetFormRequest::~DescribeComponentAssetFormRequest() {}

std::string DescribeComponentAssetFormRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeComponentAssetFormRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string DescribeComponentAssetFormRequest::getComponentName() const {
  return componentName_;
}

void DescribeComponentAssetFormRequest::setComponentName(const std::string &componentName) {
  componentName_ = componentName;
  setParameter(std::string("ComponentName"), componentName);
}

std::string DescribeComponentAssetFormRequest::getRoleType() const {
  return roleType_;
}

void DescribeComponentAssetFormRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string DescribeComponentAssetFormRequest::getLang() const {
  return lang_;
}

void DescribeComponentAssetFormRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

