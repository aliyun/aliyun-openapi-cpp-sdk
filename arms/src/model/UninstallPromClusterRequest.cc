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

#include <alibabacloud/arms/model/UninstallPromClusterRequest.h>

using AlibabaCloud::ARMS::Model::UninstallPromClusterRequest;

UninstallPromClusterRequest::UninstallPromClusterRequest()
    : RpcServiceRequest("arms", "2019-08-08", "UninstallPromCluster") {
  setMethod(HttpRequest::Method::Post);
}

UninstallPromClusterRequest::~UninstallPromClusterRequest() {}

std::string UninstallPromClusterRequest::getAliyunLang() const {
  return aliyunLang_;
}

void UninstallPromClusterRequest::setAliyunLang(const std::string &aliyunLang) {
  aliyunLang_ = aliyunLang;
  setParameter(std::string("AliyunLang"), aliyunLang);
}

std::string UninstallPromClusterRequest::getClusterId() const {
  return clusterId_;
}

void UninstallPromClusterRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string UninstallPromClusterRequest::getRegionId() const {
  return regionId_;
}

void UninstallPromClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

