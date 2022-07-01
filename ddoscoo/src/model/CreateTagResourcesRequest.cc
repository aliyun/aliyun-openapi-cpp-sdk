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

#include <alibabacloud/ddoscoo/model/CreateTagResourcesRequest.h>

using AlibabaCloud::Ddoscoo::Model::CreateTagResourcesRequest;

CreateTagResourcesRequest::CreateTagResourcesRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "CreateTagResources") {
  setMethod(HttpRequest::Method::Post);
}

CreateTagResourcesRequest::~CreateTagResourcesRequest() {}

std::string CreateTagResourcesRequest::getResourceType() const {
  return resourceType_;
}

void CreateTagResourcesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::vector<CreateTagResourcesRequest::Tags> CreateTagResourcesRequest::getTags() const {
  return tags_;
}

void CreateTagResourcesRequest::setTags(const std::vector<CreateTagResourcesRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
  }
}

std::string CreateTagResourcesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateTagResourcesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateTagResourcesRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateTagResourcesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreateTagResourcesRequest::getRegionId() const {
  return regionId_;
}

void CreateTagResourcesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> CreateTagResourcesRequest::getResourceIds() const {
  return resourceIds_;
}

void CreateTagResourcesRequest::setResourceIds(const std::vector<std::string> &resourceIds) {
  resourceIds_ = resourceIds;
}

