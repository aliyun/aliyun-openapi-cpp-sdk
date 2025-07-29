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

#include <alibabacloud/live/model/DescribeStreamLocationBlockRequest.h>

using AlibabaCloud::Live::Model::DescribeStreamLocationBlockRequest;

DescribeStreamLocationBlockRequest::DescribeStreamLocationBlockRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeStreamLocationBlock") {
  setMethod(HttpRequest::Method::Post);
}

DescribeStreamLocationBlockRequest::~DescribeStreamLocationBlockRequest() {}

std::string DescribeStreamLocationBlockRequest::getBlockType() const {
  return blockType_;
}

void DescribeStreamLocationBlockRequest::setBlockType(const std::string &blockType) {
  blockType_ = blockType;
  setParameter(std::string("BlockType"), blockType);
}

int DescribeStreamLocationBlockRequest::getPageNum() const {
  return pageNum_;
}

void DescribeStreamLocationBlockRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string DescribeStreamLocationBlockRequest::getAppName() const {
  return appName_;
}

void DescribeStreamLocationBlockRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string DescribeStreamLocationBlockRequest::getRegionId() const {
  return regionId_;
}

void DescribeStreamLocationBlockRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeStreamLocationBlockRequest::getPageSize() const {
  return pageSize_;
}

void DescribeStreamLocationBlockRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeStreamLocationBlockRequest::getStreamName() const {
  return streamName_;
}

void DescribeStreamLocationBlockRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string DescribeStreamLocationBlockRequest::getDomainName() const {
  return domainName_;
}

void DescribeStreamLocationBlockRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeStreamLocationBlockRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeStreamLocationBlockRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

