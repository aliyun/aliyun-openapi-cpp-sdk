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

#include <alibabacloud/opensearch/model/DescribeABTestExperimentRequest.h>

using AlibabaCloud::OpenSearch::Model::DescribeABTestExperimentRequest;

DescribeABTestExperimentRequest::DescribeABTestExperimentRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/app-groups/[appGroupIdentity]/scenes/[sceneId]/groups/[groupId]/experiments/[experimentId]"};
  setMethod(HttpRequest::Method::Get);
}

DescribeABTestExperimentRequest::~DescribeABTestExperimentRequest() {}

int DescribeABTestExperimentRequest::getGroupId() const {
  return groupId_;
}

void DescribeABTestExperimentRequest::setGroupId(int groupId) {
  groupId_ = groupId;
  setParameter(std::string("groupId"), std::to_string(groupId));
}

int DescribeABTestExperimentRequest::getSceneId() const {
  return sceneId_;
}

void DescribeABTestExperimentRequest::setSceneId(int sceneId) {
  sceneId_ = sceneId;
  setParameter(std::string("sceneId"), std::to_string(sceneId));
}

int DescribeABTestExperimentRequest::getExperimentId() const {
  return experimentId_;
}

void DescribeABTestExperimentRequest::setExperimentId(int experimentId) {
  experimentId_ = experimentId;
  setParameter(std::string("experimentId"), std::to_string(experimentId));
}

std::string DescribeABTestExperimentRequest::getAppGroupIdentity() const {
  return appGroupIdentity_;
}

void DescribeABTestExperimentRequest::setAppGroupIdentity(const std::string &appGroupIdentity) {
  appGroupIdentity_ = appGroupIdentity;
  setParameter(std::string("appGroupIdentity"), appGroupIdentity);
}

