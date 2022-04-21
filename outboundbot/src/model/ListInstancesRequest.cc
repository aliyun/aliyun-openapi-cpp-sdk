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

#include <alibabacloud/outboundbot/model/ListInstancesRequest.h>

using AlibabaCloud::OutboundBot::Model::ListInstancesRequest;

ListInstancesRequest::ListInstancesRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ListInstances") {
  setMethod(HttpRequest::Method::Post);
}

ListInstancesRequest::~ListInstancesRequest() {}

std::string ListInstancesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListInstancesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::vector<ListInstancesRequest::Tag> ListInstancesRequest::getTag() const {
  return tag_;
}

void ListInstancesRequest::setTag(const std::vector<ListInstancesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

