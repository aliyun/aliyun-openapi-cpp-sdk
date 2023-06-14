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

#include <alibabacloud/ga/model/TagResourcesRequest.h>

using AlibabaCloud::Ga::Model::TagResourcesRequest;

TagResourcesRequest::TagResourcesRequest()
    : RpcServiceRequest("ga", "2019-11-20", "TagResources") {
  setMethod(HttpRequest::Method::Post);
}

TagResourcesRequest::~TagResourcesRequest() {}

std::vector<std::string> TagResourcesRequest::getResourceId() const {
  return resourceId_;
}

void TagResourcesRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

std::string TagResourcesRequest::getClientToken() const {
  return clientToken_;
}

void TagResourcesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string TagResourcesRequest::getResourceType() const {
  return resourceType_;
}

void TagResourcesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string TagResourcesRequest::getRegionId() const {
  return regionId_;
}

void TagResourcesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<TagResourcesRequest::Tag> TagResourcesRequest::getTag() const {
  return tag_;
}

void TagResourcesRequest::setTag(const std::vector<TagResourcesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

