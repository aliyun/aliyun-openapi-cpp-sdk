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

#include <alibabacloud/ecs/model/DisableDiskEncryptionByDefaultRequest.h>

using AlibabaCloud::Ecs::Model::DisableDiskEncryptionByDefaultRequest;

DisableDiskEncryptionByDefaultRequest::DisableDiskEncryptionByDefaultRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DisableDiskEncryptionByDefault") {
  setMethod(HttpRequest::Method::Post);
}

DisableDiskEncryptionByDefaultRequest::~DisableDiskEncryptionByDefaultRequest() {}

long DisableDiskEncryptionByDefaultRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DisableDiskEncryptionByDefaultRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DisableDiskEncryptionByDefaultRequest::getRegionId() const {
  return regionId_;
}

void DisableDiskEncryptionByDefaultRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

