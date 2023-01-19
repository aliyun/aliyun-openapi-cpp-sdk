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

#include <alibabacloud/sas/model/DescribeImageRepoListRequest.h>

using AlibabaCloud::Sas::Model::DescribeImageRepoListRequest;

DescribeImageRepoListRequest::DescribeImageRepoListRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeImageRepoList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeImageRepoListRequest::~DescribeImageRepoListRequest() {}

std::string DescribeImageRepoListRequest::getTargetType() const {
  return targetType_;
}

void DescribeImageRepoListRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string DescribeImageRepoListRequest::getType() const {
  return type_;
}

void DescribeImageRepoListRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeImageRepoListRequest::getRepoNamespace() const {
  return repoNamespace_;
}

void DescribeImageRepoListRequest::setRepoNamespace(const std::string &repoNamespace) {
  repoNamespace_ = repoNamespace;
  setParameter(std::string("RepoNamespace"), repoNamespace);
}

std::string DescribeImageRepoListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeImageRepoListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeImageRepoListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeImageRepoListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeImageRepoListRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeImageRepoListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeImageRepoListRequest::getFieldValue() const {
  return fieldValue_;
}

void DescribeImageRepoListRequest::setFieldValue(const std::string &fieldValue) {
  fieldValue_ = fieldValue;
  setParameter(std::string("FieldValue"), fieldValue);
}

std::string DescribeImageRepoListRequest::getFieldName() const {
  return fieldName_;
}

void DescribeImageRepoListRequest::setFieldName(const std::string &fieldName) {
  fieldName_ = fieldName;
  setParameter(std::string("FieldName"), fieldName);
}

std::string DescribeImageRepoListRequest::getRepoName() const {
  return repoName_;
}

void DescribeImageRepoListRequest::setRepoName(const std::string &repoName) {
  repoName_ = repoName;
  setParameter(std::string("RepoName"), repoName);
}

std::string DescribeImageRepoListRequest::getOperateType() const {
  return operateType_;
}

void DescribeImageRepoListRequest::setOperateType(const std::string &operateType) {
  operateType_ = operateType;
  setParameter(std::string("OperateType"), operateType);
}

