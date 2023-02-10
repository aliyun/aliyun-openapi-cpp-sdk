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

#include <alibabacloud/sas/model/ModifyInterceptionTargetRequest.h>

using AlibabaCloud::Sas::Model::ModifyInterceptionTargetRequest;

ModifyInterceptionTargetRequest::ModifyInterceptionTargetRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyInterceptionTarget") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInterceptionTargetRequest::~ModifyInterceptionTargetRequest() {}

long ModifyInterceptionTargetRequest::getTargetId() const {
  return targetId_;
}

void ModifyInterceptionTargetRequest::setTargetId(long targetId) {
  targetId_ = targetId;
  setParameter(std::string("TargetId"), std::to_string(targetId));
}

std::string ModifyInterceptionTargetRequest::getTargetType() const {
  return targetType_;
}

void ModifyInterceptionTargetRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::vector<std::string> ModifyInterceptionTargetRequest::getImageList() const {
  return imageList_;
}

void ModifyInterceptionTargetRequest::setImageList(const std::vector<std::string> &imageList) {
  imageList_ = imageList;
}

std::vector<std::string> ModifyInterceptionTargetRequest::getTagList() const {
  return tagList_;
}

void ModifyInterceptionTargetRequest::setTagList(const std::vector<std::string> &tagList) {
  tagList_ = tagList;
}

std::string ModifyInterceptionTargetRequest::getTargetName() const {
  return targetName_;
}

void ModifyInterceptionTargetRequest::setTargetName(const std::string &targetName) {
  targetName_ = targetName;
  setParameter(std::string("TargetName"), targetName);
}

std::string ModifyInterceptionTargetRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyInterceptionTargetRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyInterceptionTargetRequest::getAppName() const {
  return appName_;
}

void ModifyInterceptionTargetRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string ModifyInterceptionTargetRequest::get_Namespace() const {
  return _namespace_;
}

void ModifyInterceptionTargetRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

