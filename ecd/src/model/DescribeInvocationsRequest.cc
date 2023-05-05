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

#include <alibabacloud/ecd/model/DescribeInvocationsRequest.h>

using AlibabaCloud::Ecd::Model::DescribeInvocationsRequest;

DescribeInvocationsRequest::DescribeInvocationsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeInvocations") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInvocationsRequest::~DescribeInvocationsRequest() {}

std::string DescribeInvocationsRequest::getInvokeStatus() const {
  return invokeStatus_;
}

void DescribeInvocationsRequest::setInvokeStatus(const std::string &invokeStatus) {
  invokeStatus_ = invokeStatus;
  setParameter(std::string("InvokeStatus"), invokeStatus);
}

std::vector<std::string> DescribeInvocationsRequest::getDesktopIds() const {
  return desktopIds_;
}

void DescribeInvocationsRequest::setDesktopIds(const std::vector<std::string> &desktopIds) {
  desktopIds_ = desktopIds;
}

bool DescribeInvocationsRequest::getIncludeOutput() const {
  return includeOutput_;
}

void DescribeInvocationsRequest::setIncludeOutput(bool includeOutput) {
  includeOutput_ = includeOutput;
  setParameter(std::string("IncludeOutput"), includeOutput ? "true" : "false");
}

std::string DescribeInvocationsRequest::getRegionId() const {
  return regionId_;
}

void DescribeInvocationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeInvocationsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeInvocationsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeInvocationsRequest::getContentEncoding() const {
  return contentEncoding_;
}

void DescribeInvocationsRequest::setContentEncoding(const std::string &contentEncoding) {
  contentEncoding_ = contentEncoding;
  setParameter(std::string("ContentEncoding"), contentEncoding);
}

std::string DescribeInvocationsRequest::getEndUserId() const {
  return endUserId_;
}

void DescribeInvocationsRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

std::string DescribeInvocationsRequest::getDesktopId() const {
  return desktopId_;
}

void DescribeInvocationsRequest::setDesktopId(const std::string &desktopId) {
  desktopId_ = desktopId;
  setParameter(std::string("DesktopId"), desktopId);
}

std::string DescribeInvocationsRequest::getInvokeId() const {
  return invokeId_;
}

void DescribeInvocationsRequest::setInvokeId(const std::string &invokeId) {
  invokeId_ = invokeId;
  setParameter(std::string("InvokeId"), invokeId);
}

std::string DescribeInvocationsRequest::getCommandType() const {
  return commandType_;
}

void DescribeInvocationsRequest::setCommandType(const std::string &commandType) {
  commandType_ = commandType;
  setParameter(std::string("CommandType"), commandType);
}

int DescribeInvocationsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeInvocationsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

