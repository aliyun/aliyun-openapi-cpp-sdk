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

#include <alibabacloud/eas/model/DeleteResourceInstancesRequest.h>

using AlibabaCloud::Eas::Model::DeleteResourceInstancesRequest;

DeleteResourceInstancesRequest::DeleteResourceInstancesRequest()
    : RoaServiceRequest("eas", "2021-07-01") {
  setResourcePath("/api/v2/resources/[ClusterId]/[ResourceId]/instances"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteResourceInstancesRequest::~DeleteResourceInstancesRequest() {}

string DeleteResourceInstancesRequest::getInstanceList() const {
  return instanceList_;
}

void DeleteResourceInstancesRequest::setInstanceList(string instanceList) {
  instanceList_ = instanceList;
  setParameter(std::string("InstanceList"), std::to_string(instanceList));
}

string DeleteResourceInstancesRequest::getResourceId() const {
  return resourceId_;
}

void DeleteResourceInstancesRequest::setResourceId(string resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), std::to_string(resourceId));
}

boolean DeleteResourceInstancesRequest::getAllFailed() const {
  return allFailed_;
}

void DeleteResourceInstancesRequest::setAllFailed(boolean allFailed) {
  allFailed_ = allFailed;
  setParameter(std::string("AllFailed"), std::to_string(allFailed));
}

string DeleteResourceInstancesRequest::getClusterId() const {
  return clusterId_;
}

void DeleteResourceInstancesRequest::setClusterId(string clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), std::to_string(clusterId));
}

