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

#include <alibabacloud/live/model/DescribeAutoShowListTasksRequest.h>

using AlibabaCloud::Live::Model::DescribeAutoShowListTasksRequest;

DescribeAutoShowListTasksRequest::DescribeAutoShowListTasksRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeAutoShowListTasks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAutoShowListTasksRequest::~DescribeAutoShowListTasksRequest() {}

std::string DescribeAutoShowListTasksRequest::getRegionId() const {
  return regionId_;
}

void DescribeAutoShowListTasksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeAutoShowListTasksRequest::getCasterId() const {
  return casterId_;
}

void DescribeAutoShowListTasksRequest::setCasterId(const std::string &casterId) {
  casterId_ = casterId;
  setParameter(std::string("CasterId"), casterId);
}

long DescribeAutoShowListTasksRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAutoShowListTasksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

