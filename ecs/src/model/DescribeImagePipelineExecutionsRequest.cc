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

#include <alibabacloud/ecs/model/DescribeImagePipelineExecutionsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeImagePipelineExecutionsRequest;

DescribeImagePipelineExecutionsRequest::DescribeImagePipelineExecutionsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeImagePipelineExecutions") {
  setMethod(HttpRequest::Method::Post);
}

DescribeImagePipelineExecutionsRequest::~DescribeImagePipelineExecutionsRequest() {}

std::string DescribeImagePipelineExecutionsRequest::getImagePipelineId() const {
  return imagePipelineId_;
}

void DescribeImagePipelineExecutionsRequest::setImagePipelineId(const std::string &imagePipelineId) {
  imagePipelineId_ = imagePipelineId;
  setParameter(std::string("ImagePipelineId"), imagePipelineId);
}

long DescribeImagePipelineExecutionsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeImagePipelineExecutionsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeImagePipelineExecutionsRequest::getExecutionId() const {
  return executionId_;
}

void DescribeImagePipelineExecutionsRequest::setExecutionId(const std::string &executionId) {
  executionId_ = executionId;
  setParameter(std::string("ExecutionId"), executionId);
}

std::string DescribeImagePipelineExecutionsRequest::getRegionId() const {
  return regionId_;
}

void DescribeImagePipelineExecutionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeImagePipelineExecutionsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeImagePipelineExecutionsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<DescribeImagePipelineExecutionsRequest::Tag> DescribeImagePipelineExecutionsRequest::getTag() const {
  return tag_;
}

void DescribeImagePipelineExecutionsRequest::setTag(const std::vector<DescribeImagePipelineExecutionsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string DescribeImagePipelineExecutionsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeImagePipelineExecutionsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeImagePipelineExecutionsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeImagePipelineExecutionsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeImagePipelineExecutionsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeImagePipelineExecutionsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int DescribeImagePipelineExecutionsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeImagePipelineExecutionsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeImagePipelineExecutionsRequest::getStatus() const {
  return status_;
}

void DescribeImagePipelineExecutionsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

