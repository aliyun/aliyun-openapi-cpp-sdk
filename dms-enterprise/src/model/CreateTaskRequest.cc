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

#include <alibabacloud/dms-enterprise/model/CreateTaskRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateTaskRequest;

CreateTaskRequest::CreateTaskRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateTaskRequest::~CreateTaskRequest() {}

std::string CreateTaskRequest::getNodeType() const {
  return nodeType_;
}

void CreateTaskRequest::setNodeType(const std::string &nodeType) {
  nodeType_ = nodeType;
  setParameter(std::string("NodeType"), nodeType);
}

long CreateTaskRequest::getDagId() const {
  return dagId_;
}

void CreateTaskRequest::setDagId(long dagId) {
  dagId_ = dagId;
  setParameter(std::string("DagId"), std::to_string(dagId));
}

long CreateTaskRequest::getTid() const {
  return tid_;
}

void CreateTaskRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string CreateTaskRequest::getNodeContent() const {
  return nodeContent_;
}

void CreateTaskRequest::setNodeContent(const std::string &nodeContent) {
  nodeContent_ = nodeContent;
  setParameter(std::string("NodeContent"), nodeContent);
}

std::string CreateTaskRequest::getNodeOutput() const {
  return nodeOutput_;
}

void CreateTaskRequest::setNodeOutput(const std::string &nodeOutput) {
  nodeOutput_ = nodeOutput;
  setParameter(std::string("NodeOutput"), nodeOutput);
}

std::string CreateTaskRequest::getGraphParam() const {
  return graphParam_;
}

void CreateTaskRequest::setGraphParam(const std::string &graphParam) {
  graphParam_ = graphParam;
  setParameter(std::string("GraphParam"), graphParam);
}

std::string CreateTaskRequest::getTimeVariables() const {
  return timeVariables_;
}

void CreateTaskRequest::setTimeVariables(const std::string &timeVariables) {
  timeVariables_ = timeVariables;
  setParameter(std::string("TimeVariables"), timeVariables);
}

std::string CreateTaskRequest::getNodeName() const {
  return nodeName_;
}

void CreateTaskRequest::setNodeName(const std::string &nodeName) {
  nodeName_ = nodeName;
  setParameter(std::string("NodeName"), nodeName);
}

