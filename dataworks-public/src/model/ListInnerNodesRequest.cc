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

#include <alibabacloud/dataworks-public/model/ListInnerNodesRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListInnerNodesRequest;

ListInnerNodesRequest::ListInnerNodesRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListInnerNodes") {
  setMethod(HttpRequest::Method::Post);
}

ListInnerNodesRequest::~ListInnerNodesRequest() {}

std::string ListInnerNodesRequest::getProjectEnv() const {
  return projectEnv_;
}

void ListInnerNodesRequest::setProjectEnv(const std::string &projectEnv) {
  projectEnv_ = projectEnv;
  setBodyParameter(std::string("ProjectEnv"), projectEnv);
}

long ListInnerNodesRequest::getOuterNodeId() const {
  return outerNodeId_;
}

void ListInnerNodesRequest::setOuterNodeId(long outerNodeId) {
  outerNodeId_ = outerNodeId;
  setBodyParameter(std::string("OuterNodeId"), std::to_string(outerNodeId));
}

int ListInnerNodesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListInnerNodesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListInnerNodesRequest::getNodeName() const {
  return nodeName_;
}

void ListInnerNodesRequest::setNodeName(const std::string &nodeName) {
  nodeName_ = nodeName;
  setBodyParameter(std::string("NodeName"), nodeName);
}

std::string ListInnerNodesRequest::getProgramType() const {
  return programType_;
}

void ListInnerNodesRequest::setProgramType(const std::string &programType) {
  programType_ = programType;
  setBodyParameter(std::string("ProgramType"), programType);
}

int ListInnerNodesRequest::getPageSize() const {
  return pageSize_;
}

void ListInnerNodesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListInnerNodesRequest::getProjectId() const {
  return projectId_;
}

void ListInnerNodesRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

