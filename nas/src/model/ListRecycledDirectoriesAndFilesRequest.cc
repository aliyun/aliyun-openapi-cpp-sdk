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

#include <alibabacloud/nas/model/ListRecycledDirectoriesAndFilesRequest.h>

using AlibabaCloud::NAS::Model::ListRecycledDirectoriesAndFilesRequest;

ListRecycledDirectoriesAndFilesRequest::ListRecycledDirectoriesAndFilesRequest()
    : RpcServiceRequest("nas", "2017-06-26", "ListRecycledDirectoriesAndFiles") {
  setMethod(HttpRequest::Method::Get);
}

ListRecycledDirectoriesAndFilesRequest::~ListRecycledDirectoriesAndFilesRequest() {}

std::string ListRecycledDirectoriesAndFilesRequest::getNextToken() const {
  return nextToken_;
}

void ListRecycledDirectoriesAndFilesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListRecycledDirectoriesAndFilesRequest::getFileSystemId() const {
  return fileSystemId_;
}

void ListRecycledDirectoriesAndFilesRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

std::string ListRecycledDirectoriesAndFilesRequest::getFileId() const {
  return fileId_;
}

void ListRecycledDirectoriesAndFilesRequest::setFileId(const std::string &fileId) {
  fileId_ = fileId;
  setParameter(std::string("FileId"), fileId);
}

long ListRecycledDirectoriesAndFilesRequest::getMaxResults() const {
  return maxResults_;
}

void ListRecycledDirectoriesAndFilesRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

