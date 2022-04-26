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

#include <alibabacloud/ccc/model/CreateCallTagsRequest.h>

using AlibabaCloud::CCC::Model::CreateCallTagsRequest;

CreateCallTagsRequest::CreateCallTagsRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "CreateCallTags") {
  setMethod(HttpRequest::Method::Post);
}

CreateCallTagsRequest::~CreateCallTagsRequest() {}

std::string CreateCallTagsRequest::getInstanceId() const {
  return instanceId_;
}

void CreateCallTagsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateCallTagsRequest::getCallTagNameList() const {
  return callTagNameList_;
}

void CreateCallTagsRequest::setCallTagNameList(const std::string &callTagNameList) {
  callTagNameList_ = callTagNameList;
  setParameter(std::string("CallTagNameList"), callTagNameList);
}

