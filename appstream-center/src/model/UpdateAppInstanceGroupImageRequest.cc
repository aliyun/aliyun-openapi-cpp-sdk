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

#include <alibabacloud/appstream-center/model/UpdateAppInstanceGroupImageRequest.h>

using AlibabaCloud::Appstream_center::Model::UpdateAppInstanceGroupImageRequest;

UpdateAppInstanceGroupImageRequest::UpdateAppInstanceGroupImageRequest()
    : RpcServiceRequest("appstream-center", "2021-09-01", "UpdateAppInstanceGroupImage") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAppInstanceGroupImageRequest::~UpdateAppInstanceGroupImageRequest() {}

std::string UpdateAppInstanceGroupImageRequest::getBizRegionId() const {
  return bizRegionId_;
}

void UpdateAppInstanceGroupImageRequest::setBizRegionId(const std::string &bizRegionId) {
  bizRegionId_ = bizRegionId;
  setParameter(std::string("BizRegionId"), bizRegionId);
}

std::string UpdateAppInstanceGroupImageRequest::getUpdateMode() const {
  return updateMode_;
}

void UpdateAppInstanceGroupImageRequest::setUpdateMode(const std::string &updateMode) {
  updateMode_ = updateMode;
  setParameter(std::string("UpdateMode"), updateMode);
}

std::string UpdateAppInstanceGroupImageRequest::getProductType() const {
  return productType_;
}

void UpdateAppInstanceGroupImageRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string UpdateAppInstanceGroupImageRequest::getAppInstanceGroupId() const {
  return appInstanceGroupId_;
}

void UpdateAppInstanceGroupImageRequest::setAppInstanceGroupId(const std::string &appInstanceGroupId) {
  appInstanceGroupId_ = appInstanceGroupId;
  setParameter(std::string("AppInstanceGroupId"), appInstanceGroupId);
}

std::string UpdateAppInstanceGroupImageRequest::getAppCenterImageId() const {
  return appCenterImageId_;
}

void UpdateAppInstanceGroupImageRequest::setAppCenterImageId(const std::string &appCenterImageId) {
  appCenterImageId_ = appCenterImageId;
  setParameter(std::string("AppCenterImageId"), appCenterImageId);
}

