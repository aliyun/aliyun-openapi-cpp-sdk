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

#include <alibabacloud/dts/model/DescribeSynchronizationObjectModifyStatusRequest.h>

using AlibabaCloud::Dts::Model::DescribeSynchronizationObjectModifyStatusRequest;

DescribeSynchronizationObjectModifyStatusRequest::DescribeSynchronizationObjectModifyStatusRequest()
    : RpcServiceRequest("dts", "2016-08-01", "DescribeSynchronizationObjectModifyStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSynchronizationObjectModifyStatusRequest::~DescribeSynchronizationObjectModifyStatusRequest() {}

std::string DescribeSynchronizationObjectModifyStatusRequest::getClientToken() const {
  return clientToken_;
}

void DescribeSynchronizationObjectModifyStatusRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeSynchronizationObjectModifyStatusRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSynchronizationObjectModifyStatusRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string DescribeSynchronizationObjectModifyStatusRequest::getTaskId() const {
  return taskId_;
}

void DescribeSynchronizationObjectModifyStatusRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

