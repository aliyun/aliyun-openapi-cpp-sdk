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

#include <alibabacloud/eiam/model/ListEiamInstancesRequest.h>

using AlibabaCloud::Eiam::Model::ListEiamInstancesRequest;

ListEiamInstancesRequest::ListEiamInstancesRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListEiamInstances") {
  setMethod(HttpRequest::Method::Post);
}

ListEiamInstancesRequest::~ListEiamInstancesRequest() {}

std::string ListEiamInstancesRequest::getInstanceRegionId() const {
  return instanceRegionId_;
}

void ListEiamInstancesRequest::setInstanceRegionId(const std::string &instanceRegionId) {
  instanceRegionId_ = instanceRegionId;
  setParameter(std::string("InstanceRegionId"), instanceRegionId);
}

std::vector<ListEiamInstancesRequest::std::string> ListEiamInstancesRequest::getInstanceIds() const {
  return instanceIds_;
}

void ListEiamInstancesRequest::setInstanceIds(const std::vector<ListEiamInstancesRequest::std::string> &instanceIds) {
  instanceIds_ = instanceIds;
  for(int dep1 = 0; dep1 != instanceIds.size(); dep1++) {
    setParameter(std::string("InstanceIds") + "." + std::to_string(dep1 + 1), instanceIds[dep1]);
  }
}

