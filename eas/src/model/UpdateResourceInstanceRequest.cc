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

#include <alibabacloud/eas/model/UpdateResourceInstanceRequest.h>

using AlibabaCloud::Eas::Model::UpdateResourceInstanceRequest;

UpdateResourceInstanceRequest::UpdateResourceInstanceRequest()
    : RoaServiceRequest("eas", "2021-07-01") {
  setResourcePath("/api/v2/resources/[ClusterId]/[ResourceId]/instances/[InstanceId]"};
  setMethod(HttpRequest::Method::Put);
}

UpdateResourceInstanceRequest::~UpdateResourceInstanceRequest() {}

std::string UpdateResourceInstanceRequest::getResourceId() const {
  return resourceId_;
}

void UpdateResourceInstanceRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string UpdateResourceInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateResourceInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateResourceInstanceRequest::getClusterId() const {
  return clusterId_;
}

void UpdateResourceInstanceRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string UpdateResourceInstanceRequest::getBody() const {
  return body_;
}

void UpdateResourceInstanceRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

