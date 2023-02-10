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

#include <alibabacloud/sas/model/CreateInterceptionTargetRequest.h>

using AlibabaCloud::Sas::Model::CreateInterceptionTargetRequest;

CreateInterceptionTargetRequest::CreateInterceptionTargetRequest()
    : RpcServiceRequest("sas", "2018-12-03", "CreateInterceptionTarget") {
  setMethod(HttpRequest::Method::Post);
}

CreateInterceptionTargetRequest::~CreateInterceptionTargetRequest() {}

std::string CreateInterceptionTargetRequest::getTargetType() const {
  return targetType_;
}

void CreateInterceptionTargetRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string CreateInterceptionTargetRequest::getClusterName() const {
  return clusterName_;
}

void CreateInterceptionTargetRequest::setClusterName(const std::string &clusterName) {
  clusterName_ = clusterName;
  setParameter(std::string("ClusterName"), clusterName);
}

std::vector<std::string> CreateInterceptionTargetRequest::getImageList() const {
  return imageList_;
}

void CreateInterceptionTargetRequest::setImageList(const std::vector<std::string> &imageList) {
  imageList_ = imageList;
}

std::vector<std::string> CreateInterceptionTargetRequest::getTagList() const {
  return tagList_;
}

void CreateInterceptionTargetRequest::setTagList(const std::vector<std::string> &tagList) {
  tagList_ = tagList;
}

std::string CreateInterceptionTargetRequest::getTargetName() const {
  return targetName_;
}

void CreateInterceptionTargetRequest::setTargetName(const std::string &targetName) {
  targetName_ = targetName;
  setParameter(std::string("TargetName"), targetName);
}

std::string CreateInterceptionTargetRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateInterceptionTargetRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreateInterceptionTargetRequest::getAppName() const {
  return appName_;
}

void CreateInterceptionTargetRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string CreateInterceptionTargetRequest::getClusterId() const {
  return clusterId_;
}

void CreateInterceptionTargetRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string CreateInterceptionTargetRequest::get_Namespace() const {
  return _namespace_;
}

void CreateInterceptionTargetRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

