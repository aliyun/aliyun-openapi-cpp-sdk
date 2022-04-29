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

#include <alibabacloud/nas/model/DescribeAccessRulesRequest.h>

using AlibabaCloud::NAS::Model::DescribeAccessRulesRequest;

DescribeAccessRulesRequest::DescribeAccessRulesRequest()
    : RpcServiceRequest("nas", "2017-06-26", "DescribeAccessRules") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAccessRulesRequest::~DescribeAccessRulesRequest() {}

std::string DescribeAccessRulesRequest::getFileSystemType() const {
  return fileSystemType_;
}

void DescribeAccessRulesRequest::setFileSystemType(const std::string &fileSystemType) {
  fileSystemType_ = fileSystemType;
  setParameter(std::string("FileSystemType"), fileSystemType);
}

int DescribeAccessRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAccessRulesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeAccessRulesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAccessRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeAccessRulesRequest::getAccessRuleId() const {
  return accessRuleId_;
}

void DescribeAccessRulesRequest::setAccessRuleId(const std::string &accessRuleId) {
  accessRuleId_ = accessRuleId;
  setParameter(std::string("AccessRuleId"), accessRuleId);
}

std::string DescribeAccessRulesRequest::getSourceCidrIpFilter() const {
  return sourceCidrIpFilter_;
}

void DescribeAccessRulesRequest::setSourceCidrIpFilter(const std::string &sourceCidrIpFilter) {
  sourceCidrIpFilter_ = sourceCidrIpFilter;
  setParameter(std::string("SourceCidrIpFilter"), sourceCidrIpFilter);
}

std::string DescribeAccessRulesRequest::getSourceCidrIp() const {
  return sourceCidrIp_;
}

void DescribeAccessRulesRequest::setSourceCidrIp(const std::string &sourceCidrIp) {
  sourceCidrIp_ = sourceCidrIp;
  setParameter(std::string("SourceCidrIp"), sourceCidrIp);
}

std::string DescribeAccessRulesRequest::getAccessGroupName() const {
  return accessGroupName_;
}

void DescribeAccessRulesRequest::setAccessGroupName(const std::string &accessGroupName) {
  accessGroupName_ = accessGroupName;
  setParameter(std::string("AccessGroupName"), accessGroupName);
}

