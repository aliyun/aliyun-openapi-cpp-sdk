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

#include <alibabacloud/lto/model/AddDeviceGroupRequest.h>

using AlibabaCloud::Lto::Model::AddDeviceGroupRequest;

AddDeviceGroupRequest::AddDeviceGroupRequest()
    : RpcServiceRequest("lto", "2021-07-07", "AddDeviceGroup") {
  setMethod(HttpRequest::Method::Post);
}

AddDeviceGroupRequest::~AddDeviceGroupRequest() {}

std::string AddDeviceGroupRequest::getRemark() const {
  return remark_;
}

void AddDeviceGroupRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string AddDeviceGroupRequest::getProductKey() const {
  return productKey_;
}

void AddDeviceGroupRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string AddDeviceGroupRequest::getRegionId() const {
  return regionId_;
}

void AddDeviceGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int AddDeviceGroupRequest::getAuthorizedCount() const {
  return authorizedCount_;
}

void AddDeviceGroupRequest::setAuthorizedCount(int authorizedCount) {
  authorizedCount_ = authorizedCount;
  setParameter(std::string("AuthorizedCount"), std::to_string(authorizedCount));
}

