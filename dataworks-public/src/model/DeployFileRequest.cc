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

#include <alibabacloud/dataworks-public/model/DeployFileRequest.h>

using AlibabaCloud::Dataworks_public::Model::DeployFileRequest;

DeployFileRequest::DeployFileRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "DeployFile") {
  setMethod(HttpRequest::Method::Post);
}

DeployFileRequest::~DeployFileRequest() {}

std::string DeployFileRequest::getProjectIdentifier() const {
  return projectIdentifier_;
}

void DeployFileRequest::setProjectIdentifier(const std::string &projectIdentifier) {
  projectIdentifier_ = projectIdentifier;
  setBodyParameter(std::string("ProjectIdentifier"), projectIdentifier);
}

std::string DeployFileRequest::getComment() const {
  return comment_;
}

void DeployFileRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setBodyParameter(std::string("Comment"), comment);
}

long DeployFileRequest::getProjectId() const {
  return projectId_;
}

void DeployFileRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

long DeployFileRequest::getNodeId() const {
  return nodeId_;
}

void DeployFileRequest::setNodeId(long nodeId) {
  nodeId_ = nodeId;
  setBodyParameter(std::string("NodeId"), std::to_string(nodeId));
}

long DeployFileRequest::getFileId() const {
  return fileId_;
}

void DeployFileRequest::setFileId(long fileId) {
  fileId_ = fileId;
  setBodyParameter(std::string("FileId"), std::to_string(fileId));
}

