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

#include <alibabacloud/airegistry/model/GetSkillImportFileUrlRequest.h>

using AlibabaCloud::AIRegistry::Model::GetSkillImportFileUrlRequest;

GetSkillImportFileUrlRequest::GetSkillImportFileUrlRequest()
    : RpcServiceRequest("airegistry", "2026-03-17", "GetSkillImportFileUrl") {
  setMethod(HttpRequest::Method::Post);
}

GetSkillImportFileUrlRequest::~GetSkillImportFileUrlRequest() {}

std::string GetSkillImportFileUrlRequest::getNamespaceId() const {
  return namespaceId_;
}

void GetSkillImportFileUrlRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string GetSkillImportFileUrlRequest::getContentType() const {
  return contentType_;
}

void GetSkillImportFileUrlRequest::setContentType(const std::string &contentType) {
  contentType_ = contentType;
  setParameter(std::string("ContentType"), contentType);
}

