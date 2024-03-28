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

#include <alibabacloud/devops/model/GetCompareDetailRequest.h>

using AlibabaCloud::Devops::Model::GetCompareDetailRequest;

GetCompareDetailRequest::GetCompareDetailRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/commits/compare/detail"};
  setMethod(HttpRequest::Method::Get);
}

GetCompareDetailRequest::~GetCompareDetailRequest() {}

int GetCompareDetailRequest::getMaxDiffFile() const {
  return maxDiffFile_;
}

void GetCompareDetailRequest::setMaxDiffFile(int maxDiffFile) {
  maxDiffFile_ = maxDiffFile;
  setParameter(std::string("maxDiffFile"), std::to_string(maxDiffFile));
}

bool GetCompareDetailRequest::getMergeBase() const {
  return mergeBase_;
}

void GetCompareDetailRequest::setMergeBase(bool mergeBase) {
  mergeBase_ = mergeBase;
  setParameter(std::string("mergeBase"), mergeBase ? "true" : "false");
}

std::string GetCompareDetailRequest::getOrganizationId() const {
  return organizationId_;
}

void GetCompareDetailRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

int GetCompareDetailRequest::getMaxDiffByte() const {
  return maxDiffByte_;
}

void GetCompareDetailRequest::setMaxDiffByte(int maxDiffByte) {
  maxDiffByte_ = maxDiffByte;
  setParameter(std::string("maxDiffByte"), std::to_string(maxDiffByte));
}

long GetCompareDetailRequest::getRepositoryId() const {
  return repositoryId_;
}

void GetCompareDetailRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string GetCompareDetailRequest::getFrom() const {
  return from_;
}

void GetCompareDetailRequest::setFrom(const std::string &from) {
  from_ = from;
  setParameter(std::string("from"), from);
}

std::string GetCompareDetailRequest::getTo() const {
  return to_;
}

void GetCompareDetailRequest::setTo(const std::string &to) {
  to_ = to;
  setParameter(std::string("to"), to);
}

