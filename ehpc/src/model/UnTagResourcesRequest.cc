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

#include <alibabacloud/ehpc/model/UnTagResourcesRequest.h>

using AlibabaCloud::EHPC::Model::UnTagResourcesRequest;

UnTagResourcesRequest::UnTagResourcesRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "UnTagResources") {
  setMethod(HttpRequest::Method::Post);
}

UnTagResourcesRequest::~UnTagResourcesRequest() {}

bool UnTagResourcesRequest::getAll() const {
  return all_;
}

void UnTagResourcesRequest::setAll(bool all) {
  all_ = all;
  setParameter(std::string("All"), all ? "true" : "false");
}

std::vector<std::string> UnTagResourcesRequest::getResourceId() const {
  return resourceId_;
}

void UnTagResourcesRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

std::string UnTagResourcesRequest::getResourceType() const {
  return resourceType_;
}

void UnTagResourcesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string UnTagResourcesRequest::getRegionId() const {
  return regionId_;
}

void UnTagResourcesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> UnTagResourcesRequest::getTagKey() const {
  return tagKey_;
}

void UnTagResourcesRequest::setTagKey(const std::vector<std::string> &tagKey) {
  tagKey_ = tagKey;
}

