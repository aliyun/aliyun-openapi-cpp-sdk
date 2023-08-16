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

#include <alibabacloud/csas/model/DeletePrivateAccessTagRequest.h>

using AlibabaCloud::Csas::Model::DeletePrivateAccessTagRequest;

DeletePrivateAccessTagRequest::DeletePrivateAccessTagRequest()
    : RpcServiceRequest("csas", "2023-01-20", "DeletePrivateAccessTag") {
  setMethod(HttpRequest::Method::Post);
}

DeletePrivateAccessTagRequest::~DeletePrivateAccessTagRequest() {}

std::string DeletePrivateAccessTagRequest::getTagId() const {
  return tagId_;
}

void DeletePrivateAccessTagRequest::setTagId(const std::string &tagId) {
  tagId_ = tagId;
  setBodyParameter(std::string("TagId"), tagId);
}

std::string DeletePrivateAccessTagRequest::getSourceIp() const {
  return sourceIp_;
}

void DeletePrivateAccessTagRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

