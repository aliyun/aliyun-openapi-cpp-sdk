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

#include <alibabacloud/vod/model/SubmitWorkflowJobRequest.h>

using AlibabaCloud::Vod::Model::SubmitWorkflowJobRequest;

SubmitWorkflowJobRequest::SubmitWorkflowJobRequest()
    : RpcServiceRequest("vod", "2017-03-21", "SubmitWorkflowJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitWorkflowJobRequest::~SubmitWorkflowJobRequest() {}

std::string SubmitWorkflowJobRequest::getMediaId() const {
  return mediaId_;
}

void SubmitWorkflowJobRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

std::string SubmitWorkflowJobRequest::getFileUrl() const {
  return fileUrl_;
}

void SubmitWorkflowJobRequest::setFileUrl(const std::string &fileUrl) {
  fileUrl_ = fileUrl;
  setParameter(std::string("FileUrl"), fileUrl);
}

std::string SubmitWorkflowJobRequest::getWorkflowId() const {
  return workflowId_;
}

void SubmitWorkflowJobRequest::setWorkflowId(const std::string &workflowId) {
  workflowId_ = workflowId;
  setParameter(std::string("WorkflowId"), workflowId);
}

