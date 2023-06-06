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

#include <alibabacloud/sas/model/UpdateHoneypotPresetRequest.h>

using AlibabaCloud::Sas::Model::UpdateHoneypotPresetRequest;

UpdateHoneypotPresetRequest::UpdateHoneypotPresetRequest()
    : RpcServiceRequest("sas", "2018-12-03", "UpdateHoneypotPreset") {
  setMethod(HttpRequest::Method::Post);
}

UpdateHoneypotPresetRequest::~UpdateHoneypotPresetRequest() {}

std::string UpdateHoneypotPresetRequest::getLang() const {
  return lang_;
}

void UpdateHoneypotPresetRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string UpdateHoneypotPresetRequest::getHoneypotPresetId() const {
  return honeypotPresetId_;
}

void UpdateHoneypotPresetRequest::setHoneypotPresetId(const std::string &honeypotPresetId) {
  honeypotPresetId_ = honeypotPresetId;
  setParameter(std::string("HoneypotPresetId"), honeypotPresetId);
}

std::string UpdateHoneypotPresetRequest::getPresetName() const {
  return presetName_;
}

void UpdateHoneypotPresetRequest::setPresetName(const std::string &presetName) {
  presetName_ = presetName;
  setParameter(std::string("PresetName"), presetName);
}

std::string UpdateHoneypotPresetRequest::getMeta() const {
  return meta_;
}

void UpdateHoneypotPresetRequest::setMeta(const std::string &meta) {
  meta_ = meta;
  setParameter(std::string("Meta"), meta);
}

std::string UpdateHoneypotPresetRequest::getHoneypotImageName() const {
  return honeypotImageName_;
}

void UpdateHoneypotPresetRequest::setHoneypotImageName(const std::string &honeypotImageName) {
  honeypotImageName_ = honeypotImageName;
  setParameter(std::string("HoneypotImageName"), honeypotImageName);
}

