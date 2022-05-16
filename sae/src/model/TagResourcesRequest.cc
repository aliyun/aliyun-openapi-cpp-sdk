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

#include <alibabacloud/sae/model/TagResourcesRequest.h>

using AlibabaCloud::Sae::Model::TagResourcesRequest;

TagResourcesRequest::TagResourcesRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/tags"};
  setMethod(HttpRequest::Method::Post);
}

TagResourcesRequest::~TagResourcesRequest() {}

std::string TagResourcesRequest::getRegionId() const {
  return regionId_;
}

void TagResourcesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string TagResourcesRequest::getResourceType() const {
  return resourceType_;
}

void TagResourcesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setBodyParameter(std::string("ResourceType"), resourceType);
}

std::string TagResourcesRequest::getTags() const {
  return tags_;
}

void TagResourcesRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setBodyParameter(std::string("Tags"), tags);
}

std::string TagResourcesRequest::getResourceIds() const {
  return resourceIds_;
}

void TagResourcesRequest::setResourceIds(const std::string &resourceIds) {
  resourceIds_ = resourceIds;
  setBodyParameter(std::string("ResourceIds"), resourceIds);
}

