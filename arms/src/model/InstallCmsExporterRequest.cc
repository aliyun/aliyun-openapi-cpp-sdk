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

#include <alibabacloud/arms/model/InstallCmsExporterRequest.h>

using AlibabaCloud::ARMS::Model::InstallCmsExporterRequest;

InstallCmsExporterRequest::InstallCmsExporterRequest()
    : RpcServiceRequest("arms", "2019-08-08", "InstallCmsExporter") {
  setMethod(HttpRequest::Method::Post);
}

InstallCmsExporterRequest::~InstallCmsExporterRequest() {}

std::string InstallCmsExporterRequest::getRegionId() const {
  return regionId_;
}

void InstallCmsExporterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string InstallCmsExporterRequest::getClusterId() const {
  return clusterId_;
}

void InstallCmsExporterRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string InstallCmsExporterRequest::getDirectArgs() const {
  return directArgs_;
}

void InstallCmsExporterRequest::setDirectArgs(const std::string &directArgs) {
  directArgs_ = directArgs;
  setParameter(std::string("DirectArgs"), directArgs);
}

std::string InstallCmsExporterRequest::getCmsArgs() const {
  return cmsArgs_;
}

void InstallCmsExporterRequest::setCmsArgs(const std::string &cmsArgs) {
  cmsArgs_ = cmsArgs;
  setParameter(std::string("CmsArgs"), cmsArgs);
}

bool InstallCmsExporterRequest::getEnableTag() const {
  return enableTag_;
}

void InstallCmsExporterRequest::setEnableTag(bool enableTag) {
  enableTag_ = enableTag;
  setParameter(std::string("EnableTag"), enableTag ? "true" : "false");
}

