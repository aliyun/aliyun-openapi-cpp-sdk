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

#include <alibabacloud/vod/model/GetTranscodeTemplateGroupRequest.h>

using AlibabaCloud::Vod::Model::GetTranscodeTemplateGroupRequest;

GetTranscodeTemplateGroupRequest::GetTranscodeTemplateGroupRequest()
    : RpcServiceRequest("vod", "2017-03-21", "GetTranscodeTemplateGroup") {
  setMethod(HttpRequest::Method::Post);
}

GetTranscodeTemplateGroupRequest::~GetTranscodeTemplateGroupRequest() {}

std::string GetTranscodeTemplateGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetTranscodeTemplateGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetTranscodeTemplateGroupRequest::getTranscodeTemplateGroupId() const {
  return transcodeTemplateGroupId_;
}

void GetTranscodeTemplateGroupRequest::setTranscodeTemplateGroupId(const std::string &transcodeTemplateGroupId) {
  transcodeTemplateGroupId_ = transcodeTemplateGroupId;
  setParameter(std::string("TranscodeTemplateGroupId"), transcodeTemplateGroupId);
}

