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

#include <alibabacloud/ddoscoo/model/DeleteTagResourcesRequest.h>

using AlibabaCloud::Ddoscoo::Model::DeleteTagResourcesRequest;

DeleteTagResourcesRequest::DeleteTagResourcesRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DeleteTagResources") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTagResourcesRequest::~DeleteTagResourcesRequest() {}

std::string DeleteTagResourcesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DeleteTagResourcesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DeleteTagResourcesRequest::getSourceIp() const {
  return sourceIp_;
}

void DeleteTagResourcesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DeleteTagResourcesRequest::getRegionId() const {
  return regionId_;
}

void DeleteTagResourcesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeleteTagResourcesRequest::getAll() const {
  return all_;
}

void DeleteTagResourcesRequest::setAll(bool all) {
  all_ = all;
  setParameter(std::string("All"), all ? "true" : "false");
}

std::string DeleteTagResourcesRequest::getResourceType() const {
  return resourceType_;
}

void DeleteTagResourcesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::vector<std::string> DeleteTagResourcesRequest::getTagKey() const {
  return tagKey_;
}

void DeleteTagResourcesRequest::setTagKey(const std::vector<std::string> &tagKey) {
  tagKey_ = tagKey;
}

std::vector<std::string> DeleteTagResourcesRequest::getResourceIds() const {
  return resourceIds_;
}

void DeleteTagResourcesRequest::setResourceIds(const std::vector<std::string> &resourceIds) {
  resourceIds_ = resourceIds;
}

