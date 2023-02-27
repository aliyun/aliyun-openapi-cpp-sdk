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

#include <alibabacloud/ice/model/DeletePipelineRequest.h>

using AlibabaCloud::ICE::Model::DeletePipelineRequest;

DeletePipelineRequest::DeletePipelineRequest()
    : RpcServiceRequest("ice", "2020-11-09", "DeletePipeline") {
  setMethod(HttpRequest::Method::Post);
}

DeletePipelineRequest::~DeletePipelineRequest() {}

std::string DeletePipelineRequest::getPipelineId() const {
  return pipelineId_;
}

void DeletePipelineRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

