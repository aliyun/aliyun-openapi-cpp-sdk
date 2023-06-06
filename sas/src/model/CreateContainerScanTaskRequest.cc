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

#include <alibabacloud/sas/model/CreateContainerScanTaskRequest.h>

using AlibabaCloud::Sas::Model::CreateContainerScanTaskRequest;

CreateContainerScanTaskRequest::CreateContainerScanTaskRequest()
    : RpcServiceRequest("sas", "2018-12-03", "CreateContainerScanTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateContainerScanTaskRequest::~CreateContainerScanTaskRequest() {}

std::string CreateContainerScanTaskRequest::getLang() const {
  return lang_;
}

void CreateContainerScanTaskRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string CreateContainerScanTaskRequest::getClusterId() const {
  return clusterId_;
}

void CreateContainerScanTaskRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string CreateContainerScanTaskRequest::getContainerIds() const {
  return containerIds_;
}

void CreateContainerScanTaskRequest::setContainerIds(const std::string &containerIds) {
  containerIds_ = containerIds;
  setParameter(std::string("ContainerIds"), containerIds);
}

