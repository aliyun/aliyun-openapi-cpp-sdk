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

#include <alibabacloud/sas/model/DescribeAffectedMaliciousFileImagesRequest.h>

using AlibabaCloud::Sas::Model::DescribeAffectedMaliciousFileImagesRequest;

DescribeAffectedMaliciousFileImagesRequest::DescribeAffectedMaliciousFileImagesRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeAffectedMaliciousFileImages") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAffectedMaliciousFileImagesRequest::~DescribeAffectedMaliciousFileImagesRequest() {}

std::string DescribeAffectedMaliciousFileImagesRequest::getRepoId() const {
  return repoId_;
}

void DescribeAffectedMaliciousFileImagesRequest::setRepoId(const std::string &repoId) {
  repoId_ = repoId;
  setParameter(std::string("RepoId"), repoId);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getPod() const {
  return pod_;
}

void DescribeAffectedMaliciousFileImagesRequest::setPod(const std::string &pod) {
  pod_ = pod;
  setParameter(std::string("Pod"), pod);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getClusterName() const {
  return clusterName_;
}

void DescribeAffectedMaliciousFileImagesRequest::setClusterName(const std::string &clusterName) {
  clusterName_ = clusterName;
  setParameter(std::string("ClusterName"), clusterName);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getRepoNamespace() const {
  return repoNamespace_;
}

void DescribeAffectedMaliciousFileImagesRequest::setRepoNamespace(const std::string &repoNamespace) {
  repoNamespace_ = repoNamespace;
  setParameter(std::string("RepoNamespace"), repoNamespace);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeAffectedMaliciousFileImagesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getImageDigest() const {
  return imageDigest_;
}

void DescribeAffectedMaliciousFileImagesRequest::setImageDigest(const std::string &imageDigest) {
  imageDigest_ = imageDigest;
  setParameter(std::string("ImageDigest"), imageDigest);
}

std::vector<std::string> DescribeAffectedMaliciousFileImagesRequest::getScanRange() const {
  return scanRange_;
}

void DescribeAffectedMaliciousFileImagesRequest::setScanRange(const std::vector<std::string> &scanRange) {
  scanRange_ = scanRange;
}

std::string DescribeAffectedMaliciousFileImagesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAffectedMaliciousFileImagesRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getLang() const {
  return lang_;
}

void DescribeAffectedMaliciousFileImagesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getImageTag() const {
  return imageTag_;
}

void DescribeAffectedMaliciousFileImagesRequest::setImageTag(const std::string &imageTag) {
  imageTag_ = imageTag;
  setParameter(std::string("ImageTag"), imageTag);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getImage() const {
  return image_;
}

void DescribeAffectedMaliciousFileImagesRequest::setImage(const std::string &image) {
  image_ = image;
  setParameter(std::string("Image"), image);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getMaliciousMd5() const {
  return maliciousMd5_;
}

void DescribeAffectedMaliciousFileImagesRequest::setMaliciousMd5(const std::string &maliciousMd5) {
  maliciousMd5_ = maliciousMd5;
  setParameter(std::string("MaliciousMd5"), maliciousMd5);
}

int DescribeAffectedMaliciousFileImagesRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeAffectedMaliciousFileImagesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeAffectedMaliciousFileImagesRequest::getClusterId() const {
  return clusterId_;
}

void DescribeAffectedMaliciousFileImagesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getRepoName() const {
  return repoName_;
}

void DescribeAffectedMaliciousFileImagesRequest::setRepoName(const std::string &repoName) {
  repoName_ = repoName;
  setParameter(std::string("RepoName"), repoName);
}

std::string DescribeAffectedMaliciousFileImagesRequest::get_Namespace() const {
  return _namespace_;
}

void DescribeAffectedMaliciousFileImagesRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getRepoInstanceId() const {
  return repoInstanceId_;
}

void DescribeAffectedMaliciousFileImagesRequest::setRepoInstanceId(const std::string &repoInstanceId) {
  repoInstanceId_ = repoInstanceId;
  setParameter(std::string("RepoInstanceId"), repoInstanceId);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getImageLayer() const {
  return imageLayer_;
}

void DescribeAffectedMaliciousFileImagesRequest::setImageLayer(const std::string &imageLayer) {
  imageLayer_ = imageLayer;
  setParameter(std::string("ImageLayer"), imageLayer);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getContainerId() const {
  return containerId_;
}

void DescribeAffectedMaliciousFileImagesRequest::setContainerId(const std::string &containerId) {
  containerId_ = containerId;
  setParameter(std::string("ContainerId"), containerId);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getLevels() const {
  return levels_;
}

void DescribeAffectedMaliciousFileImagesRequest::setLevels(const std::string &levels) {
  levels_ = levels;
  setParameter(std::string("Levels"), levels);
}

std::string DescribeAffectedMaliciousFileImagesRequest::getRepoRegionId() const {
  return repoRegionId_;
}

void DescribeAffectedMaliciousFileImagesRequest::setRepoRegionId(const std::string &repoRegionId) {
  repoRegionId_ = repoRegionId;
  setParameter(std::string("RepoRegionId"), repoRegionId);
}

std::vector<std::string> DescribeAffectedMaliciousFileImagesRequest::getUuids() const {
  return uuids_;
}

void DescribeAffectedMaliciousFileImagesRequest::setUuids(const std::vector<std::string> &uuids) {
  uuids_ = uuids;
}

