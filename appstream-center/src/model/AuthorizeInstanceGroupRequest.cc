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

#include <alibabacloud/appstream-center/model/AuthorizeInstanceGroupRequest.h>

using AlibabaCloud::Appstream_center::Model::AuthorizeInstanceGroupRequest;

AuthorizeInstanceGroupRequest::AuthorizeInstanceGroupRequest()
    : RpcServiceRequest("appstream-center", "2021-09-01", "AuthorizeInstanceGroup") {
  setMethod(HttpRequest::Method::Post);
}

AuthorizeInstanceGroupRequest::~AuthorizeInstanceGroupRequest() {}

std::string AuthorizeInstanceGroupRequest::getSpecId() const {
  return specId_;
}

void AuthorizeInstanceGroupRequest::setSpecId(const std::string &specId) {
  specId_ = specId;
  setBodyParameter(std::string("SpecId"), specId);
}

std::vector<std::string> AuthorizeInstanceGroupRequest::getUnAuthorizeUserIds() const {
  return unAuthorizeUserIds_;
}

void AuthorizeInstanceGroupRequest::setUnAuthorizeUserIds(const std::vector<std::string> &unAuthorizeUserIds) {
  unAuthorizeUserIds_ = unAuthorizeUserIds;
}

std::string AuthorizeInstanceGroupRequest::getProductType() const {
  return productType_;
}

void AuthorizeInstanceGroupRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setBodyParameter(std::string("ProductType"), productType);
}

std::string AuthorizeInstanceGroupRequest::getAppInstanceGroupId() const {
  return appInstanceGroupId_;
}

void AuthorizeInstanceGroupRequest::setAppInstanceGroupId(const std::string &appInstanceGroupId) {
  appInstanceGroupId_ = appInstanceGroupId;
  setBodyParameter(std::string("AppInstanceGroupId"), appInstanceGroupId);
}

std::vector<std::string> AuthorizeInstanceGroupRequest::getAuthorizeUserIds() const {
  return authorizeUserIds_;
}

void AuthorizeInstanceGroupRequest::setAuthorizeUserIds(const std::vector<std::string> &authorizeUserIds) {
  authorizeUserIds_ = authorizeUserIds;
}

