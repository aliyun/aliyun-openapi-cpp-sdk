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

#include <alibabacloud/sas/model/PublicCreateImageScanTaskRequest.h>

using AlibabaCloud::Sas::Model::PublicCreateImageScanTaskRequest;

PublicCreateImageScanTaskRequest::PublicCreateImageScanTaskRequest()
    : RpcServiceRequest("sas", "2018-12-03", "PublicCreateImageScanTask") {
  setMethod(HttpRequest::Method::Post);
}

PublicCreateImageScanTaskRequest::~PublicCreateImageScanTaskRequest() {}

std::string PublicCreateImageScanTaskRequest::getSourceIp() const {
  return sourceIp_;
}

void PublicCreateImageScanTaskRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string PublicCreateImageScanTaskRequest::getDigests() const {
  return digests_;
}

void PublicCreateImageScanTaskRequest::setDigests(const std::string &digests) {
  digests_ = digests;
  setParameter(std::string("Digests"), digests);
}

std::string PublicCreateImageScanTaskRequest::getRegistryTypes() const {
  return registryTypes_;
}

void PublicCreateImageScanTaskRequest::setRegistryTypes(const std::string &registryTypes) {
  registryTypes_ = registryTypes;
  setParameter(std::string("RegistryTypes"), registryTypes);
}

std::string PublicCreateImageScanTaskRequest::getRegionIds() const {
  return regionIds_;
}

void PublicCreateImageScanTaskRequest::setRegionIds(const std::string &regionIds) {
  regionIds_ = regionIds;
  setParameter(std::string("RegionIds"), regionIds);
}

std::string PublicCreateImageScanTaskRequest::getTags() const {
  return tags_;
}

void PublicCreateImageScanTaskRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string PublicCreateImageScanTaskRequest::getRepoNamespaces() const {
  return repoNamespaces_;
}

void PublicCreateImageScanTaskRequest::setRepoNamespaces(const std::string &repoNamespaces) {
  repoNamespaces_ = repoNamespaces;
  setParameter(std::string("RepoNamespaces"), repoNamespaces);
}

std::string PublicCreateImageScanTaskRequest::getInstanceIds() const {
  return instanceIds_;
}

void PublicCreateImageScanTaskRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

std::string PublicCreateImageScanTaskRequest::getRepoIds() const {
  return repoIds_;
}

void PublicCreateImageScanTaskRequest::setRepoIds(const std::string &repoIds) {
  repoIds_ = repoIds;
  setParameter(std::string("RepoIds"), repoIds);
}

std::string PublicCreateImageScanTaskRequest::getRepoNames() const {
  return repoNames_;
}

void PublicCreateImageScanTaskRequest::setRepoNames(const std::string &repoNames) {
  repoNames_ = repoNames;
  setParameter(std::string("RepoNames"), repoNames);
}

