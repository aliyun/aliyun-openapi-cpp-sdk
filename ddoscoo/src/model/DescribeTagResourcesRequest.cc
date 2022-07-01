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

#include <alibabacloud/ddoscoo/model/DescribeTagResourcesRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeTagResourcesRequest;

DescribeTagResourcesRequest::DescribeTagResourcesRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeTagResources") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTagResourcesRequest::~DescribeTagResourcesRequest() {}

std::string DescribeTagResourcesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeTagResourcesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeTagResourcesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeTagResourcesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeTagResourcesRequest::getRegionId() const {
  return regionId_;
}

void DescribeTagResourcesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeTagResourcesRequest::getNextToken() const {
  return nextToken_;
}

void DescribeTagResourcesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeTagResourcesRequest::getResourceType() const {
  return resourceType_;
}

void DescribeTagResourcesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::vector<DescribeTagResourcesRequest::Tags> DescribeTagResourcesRequest::getTags() const {
  return tags_;
}

void DescribeTagResourcesRequest::setTags(const std::vector<DescribeTagResourcesRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
  }
}

std::vector<std::string> DescribeTagResourcesRequest::getResourceIds() const {
  return resourceIds_;
}

void DescribeTagResourcesRequest::setResourceIds(const std::vector<std::string> &resourceIds) {
  resourceIds_ = resourceIds;
}

