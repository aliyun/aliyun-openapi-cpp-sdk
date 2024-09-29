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

#include <alibabacloud/dataworks-public/model/SubmitFileRequest.h>

using AlibabaCloud::Dataworks_public::Model::SubmitFileRequest;

SubmitFileRequest::SubmitFileRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "SubmitFile") {
  setMethod(HttpRequest::Method::Post);
}

SubmitFileRequest::~SubmitFileRequest() {}

std::string SubmitFileRequest::getProjectIdentifier() const {
  return projectIdentifier_;
}

void SubmitFileRequest::setProjectIdentifier(const std::string &projectIdentifier) {
  projectIdentifier_ = projectIdentifier;
  setBodyParameter(std::string("ProjectIdentifier"), projectIdentifier);
}

bool SubmitFileRequest::getSkipAllDeployFileExtensions() const {
  return skipAllDeployFileExtensions_;
}

void SubmitFileRequest::setSkipAllDeployFileExtensions(bool skipAllDeployFileExtensions) {
  skipAllDeployFileExtensions_ = skipAllDeployFileExtensions;
  setBodyParameter(std::string("SkipAllDeployFileExtensions"), skipAllDeployFileExtensions ? "true" : "false");
}

std::string SubmitFileRequest::getComment() const {
  return comment_;
}

void SubmitFileRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setBodyParameter(std::string("Comment"), comment);
}

long SubmitFileRequest::getProjectId() const {
  return projectId_;
}

void SubmitFileRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

long SubmitFileRequest::getFileId() const {
  return fileId_;
}

void SubmitFileRequest::setFileId(long fileId) {
  fileId_ = fileId;
  setBodyParameter(std::string("FileId"), std::to_string(fileId));
}

