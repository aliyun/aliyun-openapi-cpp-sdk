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

#include <alibabacloud/elasticsearch/model/DescribePipelineRequest.h>

using AlibabaCloud::Elasticsearch::Model::DescribePipelineRequest;

DescribePipelineRequest::DescribePipelineRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/logstashes/[InstanceId]/pipelines/[PipelineId]"};
  setMethod(HttpRequest::Method::Get);
}

DescribePipelineRequest::~DescribePipelineRequest() {}

std::string DescribePipelineRequest::getInstanceId() const {
  return instanceId_;
}

void DescribePipelineRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribePipelineRequest::getPipelineId() const {
  return pipelineId_;
}

void DescribePipelineRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

