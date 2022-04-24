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

#include <alibabacloud/bssopenapi/model/AllocateCostUnitResourceRequest.h>

using AlibabaCloud::BssOpenApi::Model::AllocateCostUnitResourceRequest;

AllocateCostUnitResourceRequest::AllocateCostUnitResourceRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "AllocateCostUnitResource") {
  setMethod(HttpRequest::Method::Post);
}

AllocateCostUnitResourceRequest::~AllocateCostUnitResourceRequest() {}

std::vector<AllocateCostUnitResourceRequest::ResourceInstanceList> AllocateCostUnitResourceRequest::getResourceInstanceList() const {
  return resourceInstanceList_;
}

void AllocateCostUnitResourceRequest::setResourceInstanceList(const std::vector<AllocateCostUnitResourceRequest::ResourceInstanceList> &resourceInstanceList) {
  resourceInstanceList_ = resourceInstanceList;
  for(int dep1 = 0; dep1 != resourceInstanceList.size(); dep1++) {
  auto resourceInstanceListObj = resourceInstanceList.at(dep1);
  std::string resourceInstanceListObjStr = std::string("ResourceInstanceList") + "." + std::to_string(dep1 + 1);
    setParameter(resourceInstanceListObjStr + ".ResourceId", resourceInstanceListObj.resourceId);
    setParameter(resourceInstanceListObjStr + ".CommodityCode", resourceInstanceListObj.commodityCode);
    setParameter(resourceInstanceListObjStr + ".ApportionCode", resourceInstanceListObj.apportionCode);
    setParameter(resourceInstanceListObjStr + ".ResourceUserId", std::to_string(resourceInstanceListObj.resourceUserId));
  }
}

long AllocateCostUnitResourceRequest::getFromUnitId() const {
  return fromUnitId_;
}

void AllocateCostUnitResourceRequest::setFromUnitId(long fromUnitId) {
  fromUnitId_ = fromUnitId;
  setParameter(std::string("FromUnitId"), std::to_string(fromUnitId));
}

long AllocateCostUnitResourceRequest::getToUnitId() const {
  return toUnitId_;
}

void AllocateCostUnitResourceRequest::setToUnitId(long toUnitId) {
  toUnitId_ = toUnitId;
  setParameter(std::string("ToUnitId"), std::to_string(toUnitId));
}

long AllocateCostUnitResourceRequest::getFromUnitUserId() const {
  return fromUnitUserId_;
}

void AllocateCostUnitResourceRequest::setFromUnitUserId(long fromUnitUserId) {
  fromUnitUserId_ = fromUnitUserId;
  setParameter(std::string("FromUnitUserId"), std::to_string(fromUnitUserId));
}

long AllocateCostUnitResourceRequest::getToUnitUserId() const {
  return toUnitUserId_;
}

void AllocateCostUnitResourceRequest::setToUnitUserId(long toUnitUserId) {
  toUnitUserId_ = toUnitUserId;
  setParameter(std::string("ToUnitUserId"), std::to_string(toUnitUserId));
}

