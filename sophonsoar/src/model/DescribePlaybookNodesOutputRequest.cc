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

#include <alibabacloud/sophonsoar/model/DescribePlaybookNodesOutputRequest.h>

using AlibabaCloud::Sophonsoar::Model::DescribePlaybookNodesOutputRequest;

DescribePlaybookNodesOutputRequest::DescribePlaybookNodesOutputRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "DescribePlaybookNodesOutput") {
  setMethod(HttpRequest::Method::Get);
}

DescribePlaybookNodesOutputRequest::~DescribePlaybookNodesOutputRequest() {}

std::string DescribePlaybookNodesOutputRequest::getRoleFor() const {
  return roleFor_;
}

void DescribePlaybookNodesOutputRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string DescribePlaybookNodesOutputRequest::getNodeName() const {
  return nodeName_;
}

void DescribePlaybookNodesOutputRequest::setNodeName(const std::string &nodeName) {
  nodeName_ = nodeName;
  setParameter(std::string("NodeName"), nodeName);
}

std::string DescribePlaybookNodesOutputRequest::getPlaybookUuid() const {
  return playbookUuid_;
}

void DescribePlaybookNodesOutputRequest::setPlaybookUuid(const std::string &playbookUuid) {
  playbookUuid_ = playbookUuid;
  setParameter(std::string("PlaybookUuid"), playbookUuid);
}

std::string DescribePlaybookNodesOutputRequest::getRoleType() const {
  return roleType_;
}

void DescribePlaybookNodesOutputRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string DescribePlaybookNodesOutputRequest::getLang() const {
  return lang_;
}

void DescribePlaybookNodesOutputRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

