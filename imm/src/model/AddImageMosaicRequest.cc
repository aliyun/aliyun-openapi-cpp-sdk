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

#include <alibabacloud/imm/model/AddImageMosaicRequest.h>

using AlibabaCloud::Imm::Model::AddImageMosaicRequest;

AddImageMosaicRequest::AddImageMosaicRequest()
    : RpcServiceRequest("imm", "2020-09-30", "AddImageMosaic") {
  setMethod(HttpRequest::Method::Post);
}

AddImageMosaicRequest::~AddImageMosaicRequest() {}

std::vector<AddImageMosaicRequest::Targets> AddImageMosaicRequest::getTargets() const {
  return targets_;
}

void AddImageMosaicRequest::setTargets(const std::vector<AddImageMosaicRequest::Targets> &targets) {
  targets_ = targets;
  for(int dep1 = 0; dep1 != targets.size(); dep1++) {
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Boundary.X", std::to_string(targets[dep1].boundary.x));
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Boundary.Width", std::to_string(targets[dep1].boundary.width));
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Boundary.Y", std::to_string(targets[dep1].boundary.y));
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Boundary.ReferPos", targets[dep1].boundary.referPos);
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Boundary.Height", std::to_string(targets[dep1].boundary.height));
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Sigma", std::to_string(targets[dep1].sigma));
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".BlurRadius", std::to_string(targets[dep1].blurRadius));
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Color", targets[dep1].color);
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".MosaicRadius", std::to_string(targets[dep1].mosaicRadius));
    setParameter(std::string("Targets") + "." + std::to_string(dep1 + 1) + ".Type", targets[dep1].type);
  }
}

std::string AddImageMosaicRequest::getTargetURI() const {
  return targetURI_;
}

void AddImageMosaicRequest::setTargetURI(const std::string &targetURI) {
  targetURI_ = targetURI;
  setParameter(std::string("TargetURI"), targetURI);
}

std::string AddImageMosaicRequest::getImageFormat() const {
  return imageFormat_;
}

void AddImageMosaicRequest::setImageFormat(const std::string &imageFormat) {
  imageFormat_ = imageFormat;
  setParameter(std::string("ImageFormat"), imageFormat);
}

std::string AddImageMosaicRequest::getProjectName() const {
  return projectName_;
}

void AddImageMosaicRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

AddImageMosaicRequest::CredentialConfig AddImageMosaicRequest::getCredentialConfig() const {
  return credentialConfig_;
}

void AddImageMosaicRequest::setCredentialConfig(const AddImageMosaicRequest::CredentialConfig &credentialConfig) {
  credentialConfig_ = credentialConfig;
  for(int dep1 = 0; dep1 != credentialConfig.chain.size(); dep1++) {
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".Role", credentialConfig.chain[dep1].role);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".RoleType", credentialConfig.chain[dep1].roleType);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".AssumeRoleFor", credentialConfig.chain[dep1].assumeRoleFor);
  }
  setParameter(std::string("CredentialConfig") + ".ServiceRole", credentialConfig.serviceRole);
  setParameter(std::string("CredentialConfig") + ".Policy", credentialConfig.policy);
}

int AddImageMosaicRequest::getQuality() const {
  return quality_;
}

void AddImageMosaicRequest::setQuality(int quality) {
  quality_ = quality;
  setParameter(std::string("Quality"), std::to_string(quality));
}

std::string AddImageMosaicRequest::getSourceURI() const {
  return sourceURI_;
}

void AddImageMosaicRequest::setSourceURI(const std::string &sourceURI) {
  sourceURI_ = sourceURI;
  setParameter(std::string("SourceURI"), sourceURI);
}

