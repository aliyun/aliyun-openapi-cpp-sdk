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

#include <alibabacloud/sas/model/DescribeGroupedMaliciousFilesRequest.h>

using AlibabaCloud::Sas::Model::DescribeGroupedMaliciousFilesRequest;

DescribeGroupedMaliciousFilesRequest::DescribeGroupedMaliciousFilesRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeGroupedMaliciousFiles") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGroupedMaliciousFilesRequest::~DescribeGroupedMaliciousFilesRequest() {}

std::string DescribeGroupedMaliciousFilesRequest::getRepoId() const {
  return repoId_;
}

void DescribeGroupedMaliciousFilesRequest::setRepoId(const std::string &repoId) {
  repoId_ = repoId;
  setParameter(std::string("RepoId"), repoId);
}

std::string DescribeGroupedMaliciousFilesRequest::getFuzzyMaliciousName() const {
  return fuzzyMaliciousName_;
}

void DescribeGroupedMaliciousFilesRequest::setFuzzyMaliciousName(const std::string &fuzzyMaliciousName) {
  fuzzyMaliciousName_ = fuzzyMaliciousName;
  setParameter(std::string("FuzzyMaliciousName"), fuzzyMaliciousName);
}

std::string DescribeGroupedMaliciousFilesRequest::getRepoNamespace() const {
  return repoNamespace_;
}

void DescribeGroupedMaliciousFilesRequest::setRepoNamespace(const std::string &repoNamespace) {
  repoNamespace_ = repoNamespace;
  setParameter(std::string("RepoNamespace"), repoNamespace);
}

std::string DescribeGroupedMaliciousFilesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeGroupedMaliciousFilesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeGroupedMaliciousFilesRequest::getImageDigest() const {
  return imageDigest_;
}

void DescribeGroupedMaliciousFilesRequest::setImageDigest(const std::string &imageDigest) {
  imageDigest_ = imageDigest;
  setParameter(std::string("ImageDigest"), imageDigest);
}

std::vector<std::string> DescribeGroupedMaliciousFilesRequest::getScanRange() const {
  return scanRange_;
}

void DescribeGroupedMaliciousFilesRequest::setScanRange(const std::vector<std::string> &scanRange) {
  scanRange_ = scanRange;
}

std::string DescribeGroupedMaliciousFilesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeGroupedMaliciousFilesRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeGroupedMaliciousFilesRequest::getLang() const {
  return lang_;
}

void DescribeGroupedMaliciousFilesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeGroupedMaliciousFilesRequest::getImageTag() const {
  return imageTag_;
}

void DescribeGroupedMaliciousFilesRequest::setImageTag(const std::string &imageTag) {
  imageTag_ = imageTag;
  setParameter(std::string("ImageTag"), imageTag);
}

std::string DescribeGroupedMaliciousFilesRequest::getMaliciousMd5() const {
  return maliciousMd5_;
}

void DescribeGroupedMaliciousFilesRequest::setMaliciousMd5(const std::string &maliciousMd5) {
  maliciousMd5_ = maliciousMd5;
  setParameter(std::string("MaliciousMd5"), maliciousMd5);
}

int DescribeGroupedMaliciousFilesRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeGroupedMaliciousFilesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeGroupedMaliciousFilesRequest::getClusterId() const {
  return clusterId_;
}

void DescribeGroupedMaliciousFilesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DescribeGroupedMaliciousFilesRequest::getRepoName() const {
  return repoName_;
}

void DescribeGroupedMaliciousFilesRequest::setRepoName(const std::string &repoName) {
  repoName_ = repoName;
  setParameter(std::string("RepoName"), repoName);
}

std::string DescribeGroupedMaliciousFilesRequest::getRepoInstanceId() const {
  return repoInstanceId_;
}

void DescribeGroupedMaliciousFilesRequest::setRepoInstanceId(const std::string &repoInstanceId) {
  repoInstanceId_ = repoInstanceId;
  setParameter(std::string("RepoInstanceId"), repoInstanceId);
}

std::string DescribeGroupedMaliciousFilesRequest::getImageLayer() const {
  return imageLayer_;
}

void DescribeGroupedMaliciousFilesRequest::setImageLayer(const std::string &imageLayer) {
  imageLayer_ = imageLayer;
  setParameter(std::string("ImageLayer"), imageLayer);
}

std::string DescribeGroupedMaliciousFilesRequest::getLevels() const {
  return levels_;
}

void DescribeGroupedMaliciousFilesRequest::setLevels(const std::string &levels) {
  levels_ = levels;
  setParameter(std::string("Levels"), levels);
}

std::string DescribeGroupedMaliciousFilesRequest::getRepoRegionId() const {
  return repoRegionId_;
}

void DescribeGroupedMaliciousFilesRequest::setRepoRegionId(const std::string &repoRegionId) {
  repoRegionId_ = repoRegionId;
  setParameter(std::string("RepoRegionId"), repoRegionId);
}

std::vector<std::string> DescribeGroupedMaliciousFilesRequest::getUuids() const {
  return uuids_;
}

void DescribeGroupedMaliciousFilesRequest::setUuids(const std::vector<std::string> &uuids) {
  uuids_ = uuids;
}

