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

#include <alibabacloud/sophonsoar/model/DescribePlaybookInputOutputRequest.h>

using AlibabaCloud::Sophonsoar::Model::DescribePlaybookInputOutputRequest;

DescribePlaybookInputOutputRequest::DescribePlaybookInputOutputRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "DescribePlaybookInputOutput") {
  setMethod(HttpRequest::Method::Get);
}

DescribePlaybookInputOutputRequest::~DescribePlaybookInputOutputRequest() {}

std::string DescribePlaybookInputOutputRequest::getRoleFor() const {
  return roleFor_;
}

void DescribePlaybookInputOutputRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string DescribePlaybookInputOutputRequest::getModelName() const {
  return modelName_;
}

void DescribePlaybookInputOutputRequest::setModelName(const std::string &modelName) {
  modelName_ = modelName;
  setParameter(std::string("ModelName"), modelName);
}

std::string DescribePlaybookInputOutputRequest::getPlaybookUuid() const {
  return playbookUuid_;
}

void DescribePlaybookInputOutputRequest::setPlaybookUuid(const std::string &playbookUuid) {
  playbookUuid_ = playbookUuid;
  setParameter(std::string("PlaybookUuid"), playbookUuid);
}

std::string DescribePlaybookInputOutputRequest::getModelCode() const {
  return modelCode_;
}

void DescribePlaybookInputOutputRequest::setModelCode(const std::string &modelCode) {
  modelCode_ = modelCode;
  setParameter(std::string("ModelCode"), modelCode);
}

std::string DescribePlaybookInputOutputRequest::getRoleType() const {
  return roleType_;
}

void DescribePlaybookInputOutputRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string DescribePlaybookInputOutputRequest::getLang() const {
  return lang_;
}

void DescribePlaybookInputOutputRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

