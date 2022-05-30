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

#include <alibabacloud/dataworks-public/model/GetFileRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetFileRequest;

GetFileRequest::GetFileRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetFile") {
  setMethod(HttpRequest::Method::Post);
}

GetFileRequest::~GetFileRequest() {}

long GetFileRequest::getProjectId() const {
  return projectId_;
}

void GetFileRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

long GetFileRequest::getNodeId() const {
  return nodeId_;
}

void GetFileRequest::setNodeId(long nodeId) {
  nodeId_ = nodeId;
  setBodyParameter(std::string("NodeId"), std::to_string(nodeId));
}

std::string GetFileRequest::getProjectIdentifier() const {
  return projectIdentifier_;
}

void GetFileRequest::setProjectIdentifier(const std::string &projectIdentifier) {
  projectIdentifier_ = projectIdentifier;
  setBodyParameter(std::string("ProjectIdentifier"), projectIdentifier);
}

long GetFileRequest::getFileId() const {
  return fileId_;
}

void GetFileRequest::setFileId(long fileId) {
  fileId_ = fileId;
  setBodyParameter(std::string("FileId"), std::to_string(fileId));
}

