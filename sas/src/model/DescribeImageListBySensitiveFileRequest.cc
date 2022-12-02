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

#include <alibabacloud/sas/model/DescribeImageListBySensitiveFileRequest.h>

using AlibabaCloud::Sas::Model::DescribeImageListBySensitiveFileRequest;

DescribeImageListBySensitiveFileRequest::DescribeImageListBySensitiveFileRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeImageListBySensitiveFile") {
  setMethod(HttpRequest::Method::Post);
}

DescribeImageListBySensitiveFileRequest::~DescribeImageListBySensitiveFileRequest() {}

std::string DescribeImageListBySensitiveFileRequest::getSensitiveFileKey() const {
  return sensitiveFileKey_;
}

void DescribeImageListBySensitiveFileRequest::setSensitiveFileKey(const std::string &sensitiveFileKey) {
  sensitiveFileKey_ = sensitiveFileKey;
  setParameter(std::string("SensitiveFileKey"), sensitiveFileKey);
}

std::string DescribeImageListBySensitiveFileRequest::getRepoNamespace() const {
  return repoNamespace_;
}

void DescribeImageListBySensitiveFileRequest::setRepoNamespace(const std::string &repoNamespace) {
  repoNamespace_ = repoNamespace;
  setParameter(std::string("RepoNamespace"), repoNamespace);
}

std::string DescribeImageListBySensitiveFileRequest::getImageDigest() const {
  return imageDigest_;
}

void DescribeImageListBySensitiveFileRequest::setImageDigest(const std::string &imageDigest) {
  imageDigest_ = imageDigest;
  setParameter(std::string("ImageDigest"), imageDigest);
}

std::vector<DescribeImageListBySensitiveFileRequest::std::string> DescribeImageListBySensitiveFileRequest::getScanRange() const {
  return scanRange_;
}

void DescribeImageListBySensitiveFileRequest::setScanRange(const std::vector<DescribeImageListBySensitiveFileRequest::std::string> &scanRange) {
  scanRange_ = scanRange;
  for(int dep1 = 0; dep1 != scanRange.size(); dep1++) {
    setParameter(std::string("ScanRange") + "." + std::to_string(dep1 + 1), scanRange[dep1]);
  }
}

int DescribeImageListBySensitiveFileRequest::getPageSize() const {
  return pageSize_;
}

void DescribeImageListBySensitiveFileRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeImageListBySensitiveFileRequest::getLang() const {
  return lang_;
}

void DescribeImageListBySensitiveFileRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int DescribeImageListBySensitiveFileRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeImageListBySensitiveFileRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeImageListBySensitiveFileRequest::getRiskLevel() const {
  return riskLevel_;
}

void DescribeImageListBySensitiveFileRequest::setRiskLevel(const std::string &riskLevel) {
  riskLevel_ = riskLevel;
  setParameter(std::string("RiskLevel"), riskLevel);
}

std::string DescribeImageListBySensitiveFileRequest::getRepoName() const {
  return repoName_;
}

void DescribeImageListBySensitiveFileRequest::setRepoName(const std::string &repoName) {
  repoName_ = repoName;
  setParameter(std::string("RepoName"), repoName);
}

std::string DescribeImageListBySensitiveFileRequest::getRepoInstanceId() const {
  return repoInstanceId_;
}

void DescribeImageListBySensitiveFileRequest::setRepoInstanceId(const std::string &repoInstanceId) {
  repoInstanceId_ = repoInstanceId;
  setParameter(std::string("RepoInstanceId"), repoInstanceId);
}

