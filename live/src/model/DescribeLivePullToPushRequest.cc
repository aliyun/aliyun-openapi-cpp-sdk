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

#include <alibabacloud/live/model/DescribeLivePullToPushRequest.h>

using AlibabaCloud::Live::Model::DescribeLivePullToPushRequest;

DescribeLivePullToPushRequest::DescribeLivePullToPushRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLivePullToPush") {
  setMethod(HttpRequest::Method::Get);
}

DescribeLivePullToPushRequest::~DescribeLivePullToPushRequest() {}

std::string DescribeLivePullToPushRequest::getTaskId() const {
  return taskId_;
}

void DescribeLivePullToPushRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

long DescribeLivePullToPushRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLivePullToPushRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLivePullToPushRequest::getRegion() const {
  return region_;
}

void DescribeLivePullToPushRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

