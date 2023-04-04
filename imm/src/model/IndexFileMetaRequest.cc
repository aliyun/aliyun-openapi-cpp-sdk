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

#include <alibabacloud/imm/model/IndexFileMetaRequest.h>

using AlibabaCloud::Imm::Model::IndexFileMetaRequest;

IndexFileMetaRequest::IndexFileMetaRequest()
    : RpcServiceRequest("imm", "2020-09-30", "IndexFileMeta") {
  setMethod(HttpRequest::Method::Post);
}

IndexFileMetaRequest::~IndexFileMetaRequest() {}

IndexFileMetaRequest::Notification IndexFileMetaRequest::getNotification() const {
  return notification_;
}

void IndexFileMetaRequest::setNotification(const IndexFileMetaRequest::Notification &notification) {
  notification_ = notification;
  setParameter(std::string("Notification") + ".MNS.Endpoint", notification.mNS.endpoint);
  setParameter(std::string("Notification") + ".MNS.TopicName", notification.mNS.topicName);
  setParameter(std::string("Notification") + ".RocketMQ.Endpoint", notification.rocketMQ.endpoint);
  setParameter(std::string("Notification") + ".RocketMQ.InstanceId", notification.rocketMQ.instanceId);
  setParameter(std::string("Notification") + ".RocketMQ.TopicName", notification.rocketMQ.topicName);
}

IndexFileMetaRequest::File IndexFileMetaRequest::getFile() const {
  return file_;
}

void IndexFileMetaRequest::setFile(const IndexFileMetaRequest::File &file) {
  file_ = file;
  for(auto const &iter1 : file.customLabels) {
    setParameter(std::string("File") + ".CustomLabels." + iter1.first, iter1.second);
  }
  for(int dep1 = 0; dep1 != file.figures.size(); dep1++) {
    setParameter(std::string("File") + ".Figures." + std::to_string(dep1 + 1) + ".FigureId", file.figures[dep1].figureId);
    setParameter(std::string("File") + ".Figures." + std::to_string(dep1 + 1) + ".FigureClusterId", file.figures[dep1].figureClusterId);
    setParameter(std::string("File") + ".Figures." + std::to_string(dep1 + 1) + ".FigureType", file.figures[dep1].figureType);
  }
  setParameter(std::string("File") + ".OSSURI", file.oSSURI);
  setParameter(std::string("File") + ".FileHash", file.fileHash);
  setParameter(std::string("File") + ".URI", file.uRI);
  setParameter(std::string("File") + ".CustomId", file.customId);
  setParameter(std::string("File") + ".MediaType", file.mediaType);
  setParameter(std::string("File") + ".ContentType", file.contentType);
}

std::string IndexFileMetaRequest::getNotifyEndpoint() const {
  return notifyEndpoint_;
}

void IndexFileMetaRequest::setNotifyEndpoint(const std::string &notifyEndpoint) {
  notifyEndpoint_ = notifyEndpoint;
  setParameter(std::string("NotifyEndpoint"), notifyEndpoint);
}

std::string IndexFileMetaRequest::getDatasetName() const {
  return datasetName_;
}

void IndexFileMetaRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string IndexFileMetaRequest::getProjectName() const {
  return projectName_;
}

void IndexFileMetaRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string IndexFileMetaRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void IndexFileMetaRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setParameter(std::string("NotifyTopicName"), notifyTopicName);
}

