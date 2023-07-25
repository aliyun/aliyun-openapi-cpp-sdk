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

#include <alibabacloud/rds/model/DeleteGadInstanceRequest.h>

using AlibabaCloud::Rds::Model::DeleteGadInstanceRequest;

DeleteGadInstanceRequest::DeleteGadInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DeleteGadInstance") {
  setMethod(HttpRequest::Method::Post);
}

DeleteGadInstanceRequest::~DeleteGadInstanceRequest() {}

std::string DeleteGadInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DeleteGadInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DeleteGadInstanceRequest::getRegionId() const {
  return regionId_;
}

void DeleteGadInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteGadInstanceRequest::getGadInstanceName() const {
  return gadInstanceName_;
}

void DeleteGadInstanceRequest::setGadInstanceName(const std::string &gadInstanceName) {
  gadInstanceName_ = gadInstanceName;
  setParameter(std::string("GadInstanceName"), gadInstanceName);
}

