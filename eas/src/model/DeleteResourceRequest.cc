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

#include <alibabacloud/eas/model/DeleteResourceRequest.h>

using AlibabaCloud::Eas::Model::DeleteResourceRequest;

DeleteResourceRequest::DeleteResourceRequest()
    : RoaServiceRequest("eas", "2021-07-01") {
  setResourcePath("/api/v2/resources/[ClusterId]/[ResourceId]"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteResourceRequest::~DeleteResourceRequest() {}

std::string DeleteResourceRequest::getResourceId() const {
  return resourceId_;
}

void DeleteResourceRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string DeleteResourceRequest::getClusterId() const {
  return clusterId_;
}

void DeleteResourceRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

