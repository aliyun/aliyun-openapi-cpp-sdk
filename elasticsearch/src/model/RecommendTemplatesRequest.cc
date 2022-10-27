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

#include <alibabacloud/elasticsearch/model/RecommendTemplatesRequest.h>

using AlibabaCloud::Elasticsearch::Model::RecommendTemplatesRequest;

RecommendTemplatesRequest::RecommendTemplatesRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/recommended-templates"};
  setMethod(HttpRequest::Method::Get);
}

RecommendTemplatesRequest::~RecommendTemplatesRequest() {}

string RecommendTemplatesRequest::getInstanceId() const {
  return instanceId_;
}

void RecommendTemplatesRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

string RecommendTemplatesRequest::getUsageScenario() const {
  return usageScenario_;
}

void RecommendTemplatesRequest::setUsageScenario(string usageScenario) {
  usageScenario_ = usageScenario;
  setParameter(std::string("usageScenario"), std::to_string(usageScenario));
}

