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

#include <alibabacloud/dts/model/DeleteSynchronizationJobRequest.h>

using AlibabaCloud::Dts::Model::DeleteSynchronizationJobRequest;

DeleteSynchronizationJobRequest::DeleteSynchronizationJobRequest()
    : RpcServiceRequest("dts", "2019-09-01", "DeleteSynchronizationJob") {
  setMethod(HttpRequest::Method::Post);
}

DeleteSynchronizationJobRequest::~DeleteSynchronizationJobRequest() {}

std::string DeleteSynchronizationJobRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteSynchronizationJobRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string DeleteSynchronizationJobRequest::getSynchronizationJobId() const {
  return synchronizationJobId_;
}

void DeleteSynchronizationJobRequest::setSynchronizationJobId(const std::string &synchronizationJobId) {
  synchronizationJobId_ = synchronizationJobId;
  setParameter(std::string("SynchronizationJobId"), synchronizationJobId);
}

