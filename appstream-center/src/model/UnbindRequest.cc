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

#include <alibabacloud/appstream-center/model/UnbindRequest.h>

using AlibabaCloud::Appstream_center::Model::UnbindRequest;

UnbindRequest::UnbindRequest()
    : RpcServiceRequest("appstream-center", "2021-09-01", "Unbind") {
  setMethod(HttpRequest::Method::Post);
}

UnbindRequest::~UnbindRequest() {}

std::string UnbindRequest::getProductType() const {
  return productType_;
}

void UnbindRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setBodyParameter(std::string("ProductType"), productType);
}

std::string UnbindRequest::getAppInstanceGroupId() const {
  return appInstanceGroupId_;
}

void UnbindRequest::setAppInstanceGroupId(const std::string &appInstanceGroupId) {
  appInstanceGroupId_ = appInstanceGroupId;
  setBodyParameter(std::string("AppInstanceGroupId"), appInstanceGroupId);
}

std::string UnbindRequest::getEndUserId() const {
  return endUserId_;
}

void UnbindRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setBodyParameter(std::string("EndUserId"), endUserId);
}

std::string UnbindRequest::getAppInstanceId() const {
  return appInstanceId_;
}

void UnbindRequest::setAppInstanceId(const std::string &appInstanceId) {
  appInstanceId_ = appInstanceId;
  setBodyParameter(std::string("AppInstanceId"), appInstanceId);
}

