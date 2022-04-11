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

#include <alibabacloud/vod/model/DeleteTranscodeTemplateGroupRequest.h>

using AlibabaCloud::Vod::Model::DeleteTranscodeTemplateGroupRequest;

DeleteTranscodeTemplateGroupRequest::DeleteTranscodeTemplateGroupRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DeleteTranscodeTemplateGroup") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTranscodeTemplateGroupRequest::~DeleteTranscodeTemplateGroupRequest() {}

std::string DeleteTranscodeTemplateGroupRequest::getTranscodeTemplateIds() const {
  return transcodeTemplateIds_;
}

void DeleteTranscodeTemplateGroupRequest::setTranscodeTemplateIds(const std::string &transcodeTemplateIds) {
  transcodeTemplateIds_ = transcodeTemplateIds;
  setParameter(std::string("TranscodeTemplateIds"), transcodeTemplateIds);
}

std::string DeleteTranscodeTemplateGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteTranscodeTemplateGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteTranscodeTemplateGroupRequest::getTranscodeTemplateGroupId() const {
  return transcodeTemplateGroupId_;
}

void DeleteTranscodeTemplateGroupRequest::setTranscodeTemplateGroupId(const std::string &transcodeTemplateGroupId) {
  transcodeTemplateGroupId_ = transcodeTemplateGroupId;
  setParameter(std::string("TranscodeTemplateGroupId"), transcodeTemplateGroupId);
}

std::string DeleteTranscodeTemplateGroupRequest::getForceDelGroup() const {
  return forceDelGroup_;
}

void DeleteTranscodeTemplateGroupRequest::setForceDelGroup(const std::string &forceDelGroup) {
  forceDelGroup_ = forceDelGroup;
  setParameter(std::string("ForceDelGroup"), forceDelGroup);
}

