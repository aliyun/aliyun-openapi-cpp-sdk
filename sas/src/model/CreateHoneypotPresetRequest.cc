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

#include <alibabacloud/sas/model/CreateHoneypotPresetRequest.h>

using AlibabaCloud::Sas::Model::CreateHoneypotPresetRequest;

CreateHoneypotPresetRequest::CreateHoneypotPresetRequest()
    : RpcServiceRequest("sas", "2018-12-03", "CreateHoneypotPreset") {
  setMethod(HttpRequest::Method::Post);
}

CreateHoneypotPresetRequest::~CreateHoneypotPresetRequest() {}

std::string CreateHoneypotPresetRequest::getLang() const {
  return lang_;
}

void CreateHoneypotPresetRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string CreateHoneypotPresetRequest::getNodeId() const {
  return nodeId_;
}

void CreateHoneypotPresetRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string CreateHoneypotPresetRequest::getPresetName() const {
  return presetName_;
}

void CreateHoneypotPresetRequest::setPresetName(const std::string &presetName) {
  presetName_ = presetName;
  setParameter(std::string("PresetName"), presetName);
}

std::string CreateHoneypotPresetRequest::getMeta() const {
  return meta_;
}

void CreateHoneypotPresetRequest::setMeta(const std::string &meta) {
  meta_ = meta;
  setParameter(std::string("Meta"), meta);
}

std::string CreateHoneypotPresetRequest::getHoneypotImageName() const {
  return honeypotImageName_;
}

void CreateHoneypotPresetRequest::setHoneypotImageName(const std::string &honeypotImageName) {
  honeypotImageName_ = honeypotImageName;
  setParameter(std::string("HoneypotImageName"), honeypotImageName);
}

