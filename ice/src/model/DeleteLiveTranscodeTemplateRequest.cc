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

#include <alibabacloud/ice/model/DeleteLiveTranscodeTemplateRequest.h>

using AlibabaCloud::ICE::Model::DeleteLiveTranscodeTemplateRequest;

DeleteLiveTranscodeTemplateRequest::DeleteLiveTranscodeTemplateRequest()
    : RpcServiceRequest("ice", "2020-11-09", "DeleteLiveTranscodeTemplate") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLiveTranscodeTemplateRequest::~DeleteLiveTranscodeTemplateRequest() {}

std::string DeleteLiveTranscodeTemplateRequest::getTemplateId() const {
  return templateId_;
}

void DeleteLiveTranscodeTemplateRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

