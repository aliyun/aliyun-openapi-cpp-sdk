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

#include <alibabacloud/nas/model/ListDirectoriesAndFilesRequest.h>

using AlibabaCloud::NAS::Model::ListDirectoriesAndFilesRequest;

ListDirectoriesAndFilesRequest::ListDirectoriesAndFilesRequest()
    : RpcServiceRequest("nas", "2017-06-26", "ListDirectoriesAndFiles") {
  setMethod(HttpRequest::Method::Post);
}

ListDirectoriesAndFilesRequest::~ListDirectoriesAndFilesRequest() {}

bool ListDirectoriesAndFilesRequest::getDirectoryOnly() const {
  return directoryOnly_;
}

void ListDirectoriesAndFilesRequest::setDirectoryOnly(bool directoryOnly) {
  directoryOnly_ = directoryOnly;
  setParameter(std::string("DirectoryOnly"), directoryOnly ? "true" : "false");
}

std::string ListDirectoriesAndFilesRequest::getStorageType() const {
  return storageType_;
}

void ListDirectoriesAndFilesRequest::setStorageType(const std::string &storageType) {
  storageType_ = storageType;
  setParameter(std::string("StorageType"), storageType);
}

std::string ListDirectoriesAndFilesRequest::getPath() const {
  return path_;
}

void ListDirectoriesAndFilesRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

std::string ListDirectoriesAndFilesRequest::getNextToken() const {
  return nextToken_;
}

void ListDirectoriesAndFilesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListDirectoriesAndFilesRequest::getFileSystemId() const {
  return fileSystemId_;
}

void ListDirectoriesAndFilesRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

long ListDirectoriesAndFilesRequest::getMaxResults() const {
  return maxResults_;
}

void ListDirectoriesAndFilesRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

