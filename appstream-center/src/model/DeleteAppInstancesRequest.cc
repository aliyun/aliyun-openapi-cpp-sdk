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

#include <alibabacloud/appstream-center/model/DeleteAppInstancesRequest.h>

using AlibabaCloud::Appstream_center::Model::DeleteAppInstancesRequest;

DeleteAppInstancesRequest::DeleteAppInstancesRequest()
    : RpcServiceRequest("appstream-center", "2021-09-01", "DeleteAppInstances") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAppInstancesRequest::~DeleteAppInstancesRequest() {}

std::vector<std::string> DeleteAppInstancesRequest::getAppInstanceIds() const {
  return appInstanceIds_;
}

void DeleteAppInstancesRequest::setAppInstanceIds(const std::vector<std::string> &appInstanceIds) {
  appInstanceIds_ = appInstanceIds;
}

std::string DeleteAppInstancesRequest::getProductType() const {
  return productType_;
}

void DeleteAppInstancesRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setBodyParameter(std::string("ProductType"), productType);
}

std::string DeleteAppInstancesRequest::getAppInstanceGroupId() const {
  return appInstanceGroupId_;
}

void DeleteAppInstancesRequest::setAppInstanceGroupId(const std::string &appInstanceGroupId) {
  appInstanceGroupId_ = appInstanceGroupId;
  setBodyParameter(std::string("AppInstanceGroupId"), appInstanceGroupId);
}

