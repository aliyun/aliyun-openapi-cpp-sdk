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

#include <alibabacloud/ice/model/GetPipelineRequest.h>

using AlibabaCloud::ICE::Model::GetPipelineRequest;

GetPipelineRequest::GetPipelineRequest()
    : RpcServiceRequest("ice", "2020-11-09", "GetPipeline") {
  setMethod(HttpRequest::Method::Post);
}

GetPipelineRequest::~GetPipelineRequest() {}

long GetPipelineRequest::getResourceRealOwnerId() const {
  return resourceRealOwnerId_;
}

void GetPipelineRequest::setResourceRealOwnerId(long resourceRealOwnerId) {
  resourceRealOwnerId_ = resourceRealOwnerId;
  setParameter(std::string("ResourceRealOwnerId"), std::to_string(resourceRealOwnerId));
}

std::string GetPipelineRequest::getPipelineId() const {
  return pipelineId_;
}

void GetPipelineRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

