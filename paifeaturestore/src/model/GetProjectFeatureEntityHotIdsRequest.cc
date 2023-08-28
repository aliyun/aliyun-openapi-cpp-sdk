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

#include <alibabacloud/paifeaturestore/model/GetProjectFeatureEntityHotIdsRequest.h>

using AlibabaCloud::PaiFeatureStore::Model::GetProjectFeatureEntityHotIdsRequest;

GetProjectFeatureEntityHotIdsRequest::GetProjectFeatureEntityHotIdsRequest()
    : RoaServiceRequest("paifeaturestore", "2023-06-21") {
  setResourcePath("/api/v1/instances/[InstanceId]/projects/[ProjectId]/featureentities/[FeatureEntityName]/hotids/[NextSeqNumber]"};
  setMethod(HttpRequest::Method::Get);
}

GetProjectFeatureEntityHotIdsRequest::~GetProjectFeatureEntityHotIdsRequest() {}

std::string GetProjectFeatureEntityHotIdsRequest::getInstanceId() const {
  return instanceId_;
}

void GetProjectFeatureEntityHotIdsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetProjectFeatureEntityHotIdsRequest::getFeatureEntityName() const {
  return featureEntityName_;
}

void GetProjectFeatureEntityHotIdsRequest::setFeatureEntityName(const std::string &featureEntityName) {
  featureEntityName_ = featureEntityName;
  setParameter(std::string("FeatureEntityName"), featureEntityName);
}

std::string GetProjectFeatureEntityHotIdsRequest::getProjectId() const {
  return projectId_;
}

void GetProjectFeatureEntityHotIdsRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

std::string GetProjectFeatureEntityHotIdsRequest::getNextSeqNumber() const {
  return nextSeqNumber_;
}

void GetProjectFeatureEntityHotIdsRequest::setNextSeqNumber(const std::string &nextSeqNumber) {
  nextSeqNumber_ = nextSeqNumber;
  setParameter(std::string("NextSeqNumber"), nextSeqNumber);
}

