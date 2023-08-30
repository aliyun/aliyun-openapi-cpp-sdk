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

#include <alibabacloud/swas-open/model/DescribeCommandInvocationsRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::DescribeCommandInvocationsRequest;

DescribeCommandInvocationsRequest::DescribeCommandInvocationsRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "DescribeCommandInvocations") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCommandInvocationsRequest::~DescribeCommandInvocationsRequest() {}

std::string DescribeCommandInvocationsRequest::getCommandId() const {
  return commandId_;
}

void DescribeCommandInvocationsRequest::setCommandId(const std::string &commandId) {
  commandId_ = commandId;
  setParameter(std::string("CommandId"), commandId);
}

std::string DescribeCommandInvocationsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCommandInvocationsRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeCommandInvocationsRequest::getRegionId() const {
  return regionId_;
}

void DescribeCommandInvocationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeCommandInvocationsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCommandInvocationsRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeCommandInvocationsRequest::getInvokeId() const {
  return invokeId_;
}

void DescribeCommandInvocationsRequest::setInvokeId(const std::string &invokeId) {
  invokeId_ = invokeId;
  setParameter(std::string("InvokeId"), invokeId);
}

std::string DescribeCommandInvocationsRequest::getCommandName() const {
  return commandName_;
}

void DescribeCommandInvocationsRequest::setCommandName(const std::string &commandName) {
  commandName_ = commandName;
  setParameter(std::string("CommandName"), commandName);
}

std::string DescribeCommandInvocationsRequest::getCommandType() const {
  return commandType_;
}

void DescribeCommandInvocationsRequest::setCommandType(const std::string &commandType) {
  commandType_ = commandType;
  setParameter(std::string("CommandType"), commandType);
}

std::string DescribeCommandInvocationsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeCommandInvocationsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeCommandInvocationsRequest::getInvocationStatus() const {
  return invocationStatus_;
}

void DescribeCommandInvocationsRequest::setInvocationStatus(const std::string &invocationStatus) {
  invocationStatus_ = invocationStatus;
  setParameter(std::string("InvocationStatus"), invocationStatus);
}

