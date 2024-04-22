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

#include <alibabacloud/sae/model/BatchStopApplicationsRequest.h>

using AlibabaCloud::Sae::Model::BatchStopApplicationsRequest;

BatchStopApplicationsRequest::BatchStopApplicationsRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/app/batchStopApplications"};
  setMethod(HttpRequest::Method::Put);
}

BatchStopApplicationsRequest::~BatchStopApplicationsRequest() {}

std::string BatchStopApplicationsRequest::getAppIds() const {
  return appIds_;
}

void BatchStopApplicationsRequest::setAppIds(const std::string &appIds) {
  appIds_ = appIds;
  setParameter(std::string("AppIds"), appIds);
}

std::string BatchStopApplicationsRequest::getNamespaceId() const {
  return namespaceId_;
}

void BatchStopApplicationsRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string BatchStopApplicationsRequest::getVersion() const {
  return version_;
}

void BatchStopApplicationsRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

