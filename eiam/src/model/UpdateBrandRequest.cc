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

#include <alibabacloud/eiam/model/UpdateBrandRequest.h>

using AlibabaCloud::Eiam::Model::UpdateBrandRequest;

UpdateBrandRequest::UpdateBrandRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "UpdateBrand") {
  setMethod(HttpRequest::Method::Post);
}

UpdateBrandRequest::~UpdateBrandRequest() {}

std::string UpdateBrandRequest::getBrandName() const {
  return brandName_;
}

void UpdateBrandRequest::setBrandName(const std::string &brandName) {
  brandName_ = brandName;
  setParameter(std::string("BrandName"), brandName);
}

std::string UpdateBrandRequest::getBrandId() const {
  return brandId_;
}

void UpdateBrandRequest::setBrandId(const std::string &brandId) {
  brandId_ = brandId;
  setParameter(std::string("BrandId"), brandId);
}

std::string UpdateBrandRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateBrandRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

