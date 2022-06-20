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

#include <alibabacloud/sas/model/PublicPreCheckImageScanTaskRequest.h>

using AlibabaCloud::Sas::Model::PublicPreCheckImageScanTaskRequest;

PublicPreCheckImageScanTaskRequest::PublicPreCheckImageScanTaskRequest()
    : RpcServiceRequest("sas", "2018-12-03", "PublicPreCheckImageScanTask") {
  setMethod(HttpRequest::Method::Post);
}

PublicPreCheckImageScanTaskRequest::~PublicPreCheckImageScanTaskRequest() {}

std::string PublicPreCheckImageScanTaskRequest::getSourceIp() const {
  return sourceIp_;
}

void PublicPreCheckImageScanTaskRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string PublicPreCheckImageScanTaskRequest::getDigests() const {
  return digests_;
}

void PublicPreCheckImageScanTaskRequest::setDigests(const std::string &digests) {
  digests_ = digests;
  setParameter(std::string("Digests"), digests);
}

std::string PublicPreCheckImageScanTaskRequest::getRegistryTypes() const {
  return registryTypes_;
}

void PublicPreCheckImageScanTaskRequest::setRegistryTypes(const std::string &registryTypes) {
  registryTypes_ = registryTypes;
  setParameter(std::string("RegistryTypes"), registryTypes);
}

std::string PublicPreCheckImageScanTaskRequest::getRegionIds() const {
  return regionIds_;
}

void PublicPreCheckImageScanTaskRequest::setRegionIds(const std::string &regionIds) {
  regionIds_ = regionIds;
  setParameter(std::string("RegionIds"), regionIds);
}

std::string PublicPreCheckImageScanTaskRequest::getTags() const {
  return tags_;
}

void PublicPreCheckImageScanTaskRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string PublicPreCheckImageScanTaskRequest::getRepoNamespaces() const {
  return repoNamespaces_;
}

void PublicPreCheckImageScanTaskRequest::setRepoNamespaces(const std::string &repoNamespaces) {
  repoNamespaces_ = repoNamespaces;
  setParameter(std::string("RepoNamespaces"), repoNamespaces);
}

std::string PublicPreCheckImageScanTaskRequest::getInstanceIds() const {
  return instanceIds_;
}

void PublicPreCheckImageScanTaskRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

std::string PublicPreCheckImageScanTaskRequest::getRepoIds() const {
  return repoIds_;
}

void PublicPreCheckImageScanTaskRequest::setRepoIds(const std::string &repoIds) {
  repoIds_ = repoIds;
  setParameter(std::string("RepoIds"), repoIds);
}

std::string PublicPreCheckImageScanTaskRequest::getRepoNames() const {
  return repoNames_;
}

void PublicPreCheckImageScanTaskRequest::setRepoNames(const std::string &repoNames) {
  repoNames_ = repoNames;
  setParameter(std::string("RepoNames"), repoNames);
}

