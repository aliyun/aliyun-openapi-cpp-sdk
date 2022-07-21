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

#include <alibabacloud/imm/model/MergeFigureClustersRequest.h>

using AlibabaCloud::Imm::Model::MergeFigureClustersRequest;

MergeFigureClustersRequest::MergeFigureClustersRequest()
    : RpcServiceRequest("imm", "2020-09-30", "MergeFigureClusters") {
  setMethod(HttpRequest::Method::Post);
}

MergeFigureClustersRequest::~MergeFigureClustersRequest() {}

std::string MergeFigureClustersRequest::getCustomMessage() const {
  return customMessage_;
}

void MergeFigureClustersRequest::setCustomMessage(const std::string &customMessage) {
  customMessage_ = customMessage;
  setParameter(std::string("CustomMessage"), customMessage);
}

std::string MergeFigureClustersRequest::getClusterIdFrom() const {
  return clusterIdFrom_;
}

void MergeFigureClustersRequest::setClusterIdFrom(const std::string &clusterIdFrom) {
  clusterIdFrom_ = clusterIdFrom;
  setParameter(std::string("ClusterIdFrom"), clusterIdFrom);
}

std::string MergeFigureClustersRequest::getProjectName() const {
  return projectName_;
}

void MergeFigureClustersRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string MergeFigureClustersRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void MergeFigureClustersRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setParameter(std::string("NotifyTopicName"), notifyTopicName);
}

std::string MergeFigureClustersRequest::getDatasetName() const {
  return datasetName_;
}

void MergeFigureClustersRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string MergeFigureClustersRequest::getFigureType() const {
  return figureType_;
}

void MergeFigureClustersRequest::setFigureType(const std::string &figureType) {
  figureType_ = figureType;
  setParameter(std::string("FigureType"), figureType);
}

std::string MergeFigureClustersRequest::getClusterIdTo() const {
  return clusterIdTo_;
}

void MergeFigureClustersRequest::setClusterIdTo(const std::string &clusterIdTo) {
  clusterIdTo_ = clusterIdTo;
  setParameter(std::string("ClusterIdTo"), clusterIdTo);
}

std::string MergeFigureClustersRequest::getNotifyTopicEndpoint() const {
  return notifyTopicEndpoint_;
}

void MergeFigureClustersRequest::setNotifyTopicEndpoint(const std::string &notifyTopicEndpoint) {
  notifyTopicEndpoint_ = notifyTopicEndpoint;
  setParameter(std::string("NotifyTopicEndpoint"), notifyTopicEndpoint);
}

