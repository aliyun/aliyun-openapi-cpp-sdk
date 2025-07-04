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

#include <alibabacloud/rds/model/DescribeRCInvocationResultsRequest.h>

using AlibabaCloud::Rds::Model::DescribeRCInvocationResultsRequest;

DescribeRCInvocationResultsRequest::DescribeRCInvocationResultsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeRCInvocationResults") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRCInvocationResultsRequest::~DescribeRCInvocationResultsRequest() {}

std::string DescribeRCInvocationResultsRequest::getCommandId() const {
  return commandId_;
}

void DescribeRCInvocationResultsRequest::setCommandId(const std::string &commandId) {
  commandId_ = commandId;
  setParameter(std::string("CommandId"), commandId);
}

int DescribeRCInvocationResultsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeRCInvocationResultsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeRCInvocationResultsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeRCInvocationResultsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeRCInvocationResultsRequest::getRegionId() const {
  return regionId_;
}

void DescribeRCInvocationResultsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeRCInvocationResultsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeRCInvocationResultsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeRCInvocationResultsRequest::getContentEncoding() const {
  return contentEncoding_;
}

void DescribeRCInvocationResultsRequest::setContentEncoding(const std::string &contentEncoding) {
  contentEncoding_ = contentEncoding;
  setParameter(std::string("ContentEncoding"), contentEncoding);
}

int DescribeRCInvocationResultsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRCInvocationResultsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeRCInvocationResultsRequest::Tag> DescribeRCInvocationResultsRequest::getTag() const {
  return tag_;
}

void DescribeRCInvocationResultsRequest::setTag(const std::vector<DescribeRCInvocationResultsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

std::string DescribeRCInvocationResultsRequest::getInvokeId() const {
  return invokeId_;
}

void DescribeRCInvocationResultsRequest::setInvokeId(const std::string &invokeId) {
  invokeId_ = invokeId;
  setParameter(std::string("InvokeId"), invokeId);
}

std::string DescribeRCInvocationResultsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeRCInvocationResultsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeRCInvocationResultsRequest::getInvokeRecordStatus() const {
  return invokeRecordStatus_;
}

void DescribeRCInvocationResultsRequest::setInvokeRecordStatus(const std::string &invokeRecordStatus) {
  invokeRecordStatus_ = invokeRecordStatus;
  setParameter(std::string("InvokeRecordStatus"), invokeRecordStatus);
}

bool DescribeRCInvocationResultsRequest::getIncludeHistory() const {
  return includeHistory_;
}

void DescribeRCInvocationResultsRequest::setIncludeHistory(bool includeHistory) {
  includeHistory_ = includeHistory;
  setParameter(std::string("IncludeHistory"), includeHistory ? "true" : "false");
}

int DescribeRCInvocationResultsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeRCInvocationResultsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

