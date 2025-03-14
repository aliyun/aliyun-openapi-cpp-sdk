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

#include <alibabacloud/sophonsoar/model/DescribePlaybookNumberMetricsRequest.h>

using AlibabaCloud::Sophonsoar::Model::DescribePlaybookNumberMetricsRequest;

DescribePlaybookNumberMetricsRequest::DescribePlaybookNumberMetricsRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "DescribePlaybookNumberMetrics") {
  setMethod(HttpRequest::Method::Get);
}

DescribePlaybookNumberMetricsRequest::~DescribePlaybookNumberMetricsRequest() {}

std::string DescribePlaybookNumberMetricsRequest::getRoleFor() const {
  return roleFor_;
}

void DescribePlaybookNumberMetricsRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string DescribePlaybookNumberMetricsRequest::getRoleType() const {
  return roleType_;
}

void DescribePlaybookNumberMetricsRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string DescribePlaybookNumberMetricsRequest::getLang() const {
  return lang_;
}

void DescribePlaybookNumberMetricsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

