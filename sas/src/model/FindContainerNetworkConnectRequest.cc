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

#include <alibabacloud/sas/model/FindContainerNetworkConnectRequest.h>

using AlibabaCloud::Sas::Model::FindContainerNetworkConnectRequest;

FindContainerNetworkConnectRequest::FindContainerNetworkConnectRequest()
    : RpcServiceRequest("sas", "2018-12-03", "FindContainerNetworkConnect") {
  setMethod(HttpRequest::Method::Post);
}

FindContainerNetworkConnectRequest::~FindContainerNetworkConnectRequest() {}

FindContainerNetworkConnectRequest::DstNode FindContainerNetworkConnectRequest::getDstNode() const {
  return dstNode_;
}

void FindContainerNetworkConnectRequest::setDstNode(const FindContainerNetworkConnectRequest::DstNode &dstNode) {
  dstNode_ = dstNode;
  setParameter(std::string("DstNode") + ".NodeType", dstNode.nodeType);
  setParameter(std::string("DstNode") + ".AppName", dstNode.appName);
  setParameter(std::string("DstNode") + ".Namespace", dstNode._namespace);
  setParameter(std::string("DstNode") + ".PodName", dstNode.podName);
  setParameter(std::string("DstNode") + ".ClusterId", dstNode.clusterId);
  for(int dep1 = 0; dep1 != dstNode.nodeIds.size(); dep1++) {
    setParameter(std::string("DstNode") + ".NodeIds." + std::to_string(dep1 + 1), dstNode.nodeIds[dep1]);
  }
}

long FindContainerNetworkConnectRequest::getStartTime() const {
  return startTime_;
}

void FindContainerNetworkConnectRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

long FindContainerNetworkConnectRequest::getPageSize() const {
  return pageSize_;
}

void FindContainerNetworkConnectRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string FindContainerNetworkConnectRequest::getCriteriaType() const {
  return criteriaType_;
}

void FindContainerNetworkConnectRequest::setCriteriaType(const std::string &criteriaType) {
  criteriaType_ = criteriaType;
  setParameter(std::string("CriteriaType"), criteriaType);
}

long FindContainerNetworkConnectRequest::getEndTime() const {
  return endTime_;
}

void FindContainerNetworkConnectRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long FindContainerNetworkConnectRequest::getCurrentPage() const {
  return currentPage_;
}

void FindContainerNetworkConnectRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

FindContainerNetworkConnectRequest::SrcNode FindContainerNetworkConnectRequest::getSrcNode() const {
  return srcNode_;
}

void FindContainerNetworkConnectRequest::setSrcNode(const FindContainerNetworkConnectRequest::SrcNode &srcNode) {
  srcNode_ = srcNode;
  setParameter(std::string("SrcNode") + ".NodeType", srcNode.nodeType);
  setParameter(std::string("SrcNode") + ".AppName", srcNode.appName);
  setParameter(std::string("SrcNode") + ".Namespace", srcNode._namespace);
  setParameter(std::string("SrcNode") + ".PodName", srcNode.podName);
  setParameter(std::string("SrcNode") + ".ClusterId", srcNode.clusterId);
  for(int dep1 = 0; dep1 != srcNode.nodeIds.size(); dep1++) {
    setParameter(std::string("SrcNode") + ".NodeIds." + std::to_string(dep1 + 1), srcNode.nodeIds[dep1]);
  }
}

