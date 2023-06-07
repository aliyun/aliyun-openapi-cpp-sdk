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

#include <alibabacloud/swas-open/model/UpdateDiskAttributeRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::UpdateDiskAttributeRequest;

UpdateDiskAttributeRequest::UpdateDiskAttributeRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "UpdateDiskAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDiskAttributeRequest::~UpdateDiskAttributeRequest() {}

std::string UpdateDiskAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateDiskAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateDiskAttributeRequest::getRemark() const {
  return remark_;
}

void UpdateDiskAttributeRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string UpdateDiskAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateDiskAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateDiskAttributeRequest::getDiskId() const {
  return diskId_;
}

void UpdateDiskAttributeRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

