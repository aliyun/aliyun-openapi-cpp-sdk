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

#include <alibabacloud/devops/model/GetFileBlobsRequest.h>

using AlibabaCloud::Devops::Model::GetFileBlobsRequest;

GetFileBlobsRequest::GetFileBlobsRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/files/blobs"};
  setMethod(HttpRequest::Method::Get);
}

GetFileBlobsRequest::~GetFileBlobsRequest() {}

std::string GetFileBlobsRequest::getAccessToken() const {
  return accessToken_;
}

void GetFileBlobsRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

std::string GetFileBlobsRequest::getOrganizationId() const {
  return organizationId_;
}

void GetFileBlobsRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string GetFileBlobsRequest::getRef() const {
  return ref_;
}

void GetFileBlobsRequest::setRef(const std::string &ref) {
  ref_ = ref;
  setParameter(std::string("ref"), ref);
}

std::string GetFileBlobsRequest::getFilePath() const {
  return filePath_;
}

void GetFileBlobsRequest::setFilePath(const std::string &filePath) {
  filePath_ = filePath;
  setParameter(std::string("filePath"), filePath);
}

long GetFileBlobsRequest::getRepositoryId() const {
  return repositoryId_;
}

void GetFileBlobsRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

long GetFileBlobsRequest::getFrom() const {
  return from_;
}

void GetFileBlobsRequest::setFrom(long from) {
  from_ = from;
  setParameter(std::string("from"), std::to_string(from));
}

long GetFileBlobsRequest::getTo() const {
  return to_;
}

void GetFileBlobsRequest::setTo(long to) {
  to_ = to;
  setParameter(std::string("to"), std::to_string(to));
}

