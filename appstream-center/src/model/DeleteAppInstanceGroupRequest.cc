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

#include <alibabacloud/appstream-center/model/DeleteAppInstanceGroupRequest.h>

using AlibabaCloud::Appstream_center::Model::DeleteAppInstanceGroupRequest;

DeleteAppInstanceGroupRequest::DeleteAppInstanceGroupRequest()
    : RpcServiceRequest("appstream-center", "2021-09-01", "DeleteAppInstanceGroup") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAppInstanceGroupRequest::~DeleteAppInstanceGroupRequest() {}

std::string DeleteAppInstanceGroupRequest::getProductType() const {
  return productType_;
}

void DeleteAppInstanceGroupRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setBodyParameter(std::string("ProductType"), productType);
}

std::string DeleteAppInstanceGroupRequest::getAppInstanceGroupId() const {
  return appInstanceGroupId_;
}

void DeleteAppInstanceGroupRequest::setAppInstanceGroupId(const std::string &appInstanceGroupId) {
  appInstanceGroupId_ = appInstanceGroupId;
  setBodyParameter(std::string("AppInstanceGroupId"), appInstanceGroupId);
}

