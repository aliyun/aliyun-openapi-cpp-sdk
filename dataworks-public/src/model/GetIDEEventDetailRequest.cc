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

#include <alibabacloud/dataworks-public/model/GetIDEEventDetailRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetIDEEventDetailRequest;

GetIDEEventDetailRequest::GetIDEEventDetailRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetIDEEventDetail") {
  setMethod(HttpRequest::Method::Post);
}

GetIDEEventDetailRequest::~GetIDEEventDetailRequest() {}

std::string GetIDEEventDetailRequest::getMessageId() const {
  return messageId_;
}

void GetIDEEventDetailRequest::setMessageId(const std::string &messageId) {
  messageId_ = messageId;
  setBodyParameter(std::string("MessageId"), messageId);
}

long GetIDEEventDetailRequest::getProjectId() const {
  return projectId_;
}

void GetIDEEventDetailRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

