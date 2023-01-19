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

#include <alibabacloud/sas/model/DescribeAffectedAssetsRequest.h>

using AlibabaCloud::Sas::Model::DescribeAffectedAssetsRequest;

DescribeAffectedAssetsRequest::DescribeAffectedAssetsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeAffectedAssets") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAffectedAssetsRequest::~DescribeAffectedAssetsRequest() {}

std::string DescribeAffectedAssetsRequest::getCurrent() const {
  return current_;
}

void DescribeAffectedAssetsRequest::setCurrent(const std::string &current) {
  current_ = current;
  setParameter(std::string("Current"), current);
}

std::string DescribeAffectedAssetsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeAffectedAssetsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeAffectedAssetsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAffectedAssetsRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeAffectedAssetsRequest::getLevels() const {
  return levels_;
}

void DescribeAffectedAssetsRequest::setLevels(const std::string &levels) {
  levels_ = levels;
  setParameter(std::string("Levels"), levels);
}

