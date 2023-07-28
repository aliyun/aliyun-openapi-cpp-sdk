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

#include <alibabacloud/dts/model/DescribeSynchronizationJobStatusRequest.h>

using AlibabaCloud::Dts::Model::DescribeSynchronizationJobStatusRequest;

DescribeSynchronizationJobStatusRequest::DescribeSynchronizationJobStatusRequest()
    : RpcServiceRequest("dts", "2016-08-01", "DescribeSynchronizationJobStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSynchronizationJobStatusRequest::~DescribeSynchronizationJobStatusRequest() {}

std::string DescribeSynchronizationJobStatusRequest::getSynchronizationJobId() const {
  return synchronizationJobId_;
}

void DescribeSynchronizationJobStatusRequest::setSynchronizationJobId(const std::string &synchronizationJobId) {
  synchronizationJobId_ = synchronizationJobId;
  setParameter(std::string("SynchronizationJobId"), synchronizationJobId);
}

std::string DescribeSynchronizationJobStatusRequest::getClientToken() const {
  return clientToken_;
}

void DescribeSynchronizationJobStatusRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeSynchronizationJobStatusRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSynchronizationJobStatusRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

