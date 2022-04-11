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

#include <alibabacloud/vod/model/GetAITemplateRequest.h>

using AlibabaCloud::Vod::Model::GetAITemplateRequest;

GetAITemplateRequest::GetAITemplateRequest()
    : RpcServiceRequest("vod", "2017-03-21", "GetAITemplate") {
  setMethod(HttpRequest::Method::Post);
}

GetAITemplateRequest::~GetAITemplateRequest() {}

std::string GetAITemplateRequest::getTemplateId() const {
  return templateId_;
}

void GetAITemplateRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

