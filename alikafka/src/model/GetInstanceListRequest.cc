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

#include <alibabacloud/alikafka/model/GetInstanceListRequest.h>

using AlibabaCloud::Alikafka::Model::GetInstanceListRequest;

GetInstanceListRequest::GetInstanceListRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "GetInstanceList") {
  setMethod(HttpRequest::Method::Post);
}

GetInstanceListRequest::~GetInstanceListRequest() {}

std::string GetInstanceListRequest::getOrderId() const {
  return orderId_;
}

void GetInstanceListRequest::setOrderId(const std::string &orderId) {
  orderId_ = orderId;
  setParameter(std::string("OrderId"), orderId);
}

std::string GetInstanceListRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void GetInstanceListRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::vector<std::string> GetInstanceListRequest::getInstanceId() const {
  return instanceId_;
}

void GetInstanceListRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

std::string GetInstanceListRequest::getRegionId() const {
  return regionId_;
}

void GetInstanceListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<GetInstanceListRequest::Tag> GetInstanceListRequest::getTag() const {
  return tag_;
}

void GetInstanceListRequest::setTag(const std::vector<GetInstanceListRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

