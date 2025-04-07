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

#include <alibabacloud/dataworks-public/model/ListFilesRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListFilesRequest;

ListFilesRequest::ListFilesRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListFiles") {
  setMethod(HttpRequest::Method::Post);
}

ListFilesRequest::~ListFilesRequest() {}

std::string ListFilesRequest::getOwner() const {
  return owner_;
}

void ListFilesRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setBodyParameter(std::string("Owner"), owner);
}

std::string ListFilesRequest::getFileTypes() const {
  return fileTypes_;
}

void ListFilesRequest::setFileTypes(const std::string &fileTypes) {
  fileTypes_ = fileTypes;
  setBodyParameter(std::string("FileTypes"), fileTypes);
}

bool ListFilesRequest::getNeedContent() const {
  return needContent_;
}

void ListFilesRequest::setNeedContent(bool needContent) {
  needContent_ = needContent;
  setBodyParameter(std::string("NeedContent"), needContent ? "true" : "false");
}

int ListFilesRequest::getCommitStatus() const {
  return commitStatus_;
}

void ListFilesRequest::setCommitStatus(int commitStatus) {
  commitStatus_ = commitStatus;
  setBodyParameter(std::string("CommitStatus"), std::to_string(commitStatus));
}

bool ListFilesRequest::getNeedAbsoluteFolderPath() const {
  return needAbsoluteFolderPath_;
}

void ListFilesRequest::setNeedAbsoluteFolderPath(bool needAbsoluteFolderPath) {
  needAbsoluteFolderPath_ = needAbsoluteFolderPath;
  setBodyParameter(std::string("NeedAbsoluteFolderPath"), needAbsoluteFolderPath ? "true" : "false");
}

std::string ListFilesRequest::getProjectIdentifier() const {
  return projectIdentifier_;
}

void ListFilesRequest::setProjectIdentifier(const std::string &projectIdentifier) {
  projectIdentifier_ = projectIdentifier;
  setBodyParameter(std::string("ProjectIdentifier"), projectIdentifier);
}

int ListFilesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListFilesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListFilesRequest::getFileIdIn() const {
  return fileIdIn_;
}

void ListFilesRequest::setFileIdIn(const std::string &fileIdIn) {
  fileIdIn_ = fileIdIn;
  setBodyParameter(std::string("FileIdIn"), fileIdIn);
}

std::string ListFilesRequest::getLastEditUser() const {
  return lastEditUser_;
}

void ListFilesRequest::setLastEditUser(const std::string &lastEditUser) {
  lastEditUser_ = lastEditUser;
  setBodyParameter(std::string("LastEditUser"), lastEditUser);
}

std::string ListFilesRequest::getFileFolderPath() const {
  return fileFolderPath_;
}

void ListFilesRequest::setFileFolderPath(const std::string &fileFolderPath) {
  fileFolderPath_ = fileFolderPath;
  setBodyParameter(std::string("FileFolderPath"), fileFolderPath);
}

int ListFilesRequest::getPageSize() const {
  return pageSize_;
}

void ListFilesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListFilesRequest::getExactFileName() const {
  return exactFileName_;
}

void ListFilesRequest::setExactFileName(const std::string &exactFileName) {
  exactFileName_ = exactFileName;
  setBodyParameter(std::string("ExactFileName"), exactFileName);
}

std::string ListFilesRequest::getKeyword() const {
  return keyword_;
}

void ListFilesRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setBodyParameter(std::string("Keyword"), keyword);
}

long ListFilesRequest::getProjectId() const {
  return projectId_;
}

void ListFilesRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string ListFilesRequest::getUseType() const {
  return useType_;
}

void ListFilesRequest::setUseType(const std::string &useType) {
  useType_ = useType;
  setBodyParameter(std::string("UseType"), useType);
}

long ListFilesRequest::getNodeId() const {
  return nodeId_;
}

void ListFilesRequest::setNodeId(long nodeId) {
  nodeId_ = nodeId;
  setBodyParameter(std::string("NodeId"), std::to_string(nodeId));
}

