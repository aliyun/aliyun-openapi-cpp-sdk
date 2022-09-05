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

#include <alibabacloud/arms/model/ManageGetRecordingRuleRequest.h>

using AlibabaCloud::ARMS::Model::ManageGetRecordingRuleRequest;

ManageGetRecordingRuleRequest::ManageGetRecordingRuleRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ManageGetRecordingRule") {
  setMethod(HttpRequest::Method::Post);
}

ManageGetRecordingRuleRequest::~ManageGetRecordingRuleRequest() {}

std::string ManageGetRecordingRuleRequest::getRegionId() const {
  return regionId_;
}

void ManageGetRecordingRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ManageGetRecordingRuleRequest::getQueryUserId() const {
  return queryUserId_;
}

void ManageGetRecordingRuleRequest::setQueryUserId(const std::string &queryUserId) {
  queryUserId_ = queryUserId;
  setParameter(std::string("QueryUserId"), queryUserId);
}

std::string ManageGetRecordingRuleRequest::getClusterId() const {
  return clusterId_;
}

void ManageGetRecordingRuleRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

