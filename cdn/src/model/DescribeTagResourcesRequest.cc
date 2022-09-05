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

#include <alibabacloud/cdn/model/DescribeTagResourcesRequest.h>

using AlibabaCloud::Cdn::Model::DescribeTagResourcesRequest;

DescribeTagResourcesRequest::DescribeTagResourcesRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeTagResources") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTagResourcesRequest::~DescribeTagResourcesRequest() {}

std::string DescribeTagResourcesRequest::getScope() const {
  return scope_;
}

void DescribeTagResourcesRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

std::vector<DescribeTagResourcesRequest::Tag> DescribeTagResourcesRequest::getTag() const {
  return tag_;
}

void DescribeTagResourcesRequest::setTag(const std::vector<DescribeTagResourcesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::vector<std::string> DescribeTagResourcesRequest::getResourceId() const {
  return resourceId_;
}

void DescribeTagResourcesRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

long DescribeTagResourcesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeTagResourcesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeTagResourcesRequest::getResourceType() const {
  return resourceType_;
}

void DescribeTagResourcesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

