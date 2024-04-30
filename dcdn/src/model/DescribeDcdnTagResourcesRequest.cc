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

#include <alibabacloud/dcdn/model/DescribeDcdnTagResourcesRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnTagResourcesRequest;

DescribeDcdnTagResourcesRequest::DescribeDcdnTagResourcesRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnTagResources") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnTagResourcesRequest::~DescribeDcdnTagResourcesRequest() {}

std::vector<std::string> DescribeDcdnTagResourcesRequest::getResourceId() const {
  return resourceId_;
}

void DescribeDcdnTagResourcesRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

std::string DescribeDcdnTagResourcesRequest::getScope() const {
  return scope_;
}

void DescribeDcdnTagResourcesRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

std::vector<DescribeDcdnTagResourcesRequest::Tag> DescribeDcdnTagResourcesRequest::getTag() const {
  return tag_;
}

void DescribeDcdnTagResourcesRequest::setTag(const std::vector<DescribeDcdnTagResourcesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string DescribeDcdnTagResourcesRequest::getResourceType() const {
  return resourceType_;
}

void DescribeDcdnTagResourcesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

