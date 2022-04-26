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

#include <alibabacloud/ccc/model/DeleteCallTagRequest.h>

using AlibabaCloud::CCC::Model::DeleteCallTagRequest;

DeleteCallTagRequest::DeleteCallTagRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "DeleteCallTag") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCallTagRequest::~DeleteCallTagRequest() {}

std::string DeleteCallTagRequest::getTagName() const {
  return tagName_;
}

void DeleteCallTagRequest::setTagName(const std::string &tagName) {
  tagName_ = tagName;
  setParameter(std::string("TagName"), tagName);
}

std::string DeleteCallTagRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteCallTagRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

