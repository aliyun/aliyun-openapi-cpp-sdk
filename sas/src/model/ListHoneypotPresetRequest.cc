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

#include <alibabacloud/sas/model/ListHoneypotPresetRequest.h>

using AlibabaCloud::Sas::Model::ListHoneypotPresetRequest;

ListHoneypotPresetRequest::ListHoneypotPresetRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListHoneypotPreset") {
  setMethod(HttpRequest::Method::Post);
}

ListHoneypotPresetRequest::~ListHoneypotPresetRequest() {}

int ListHoneypotPresetRequest::getPageSize() const {
  return pageSize_;
}

void ListHoneypotPresetRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListHoneypotPresetRequest::getLang() const {
  return lang_;
}

void ListHoneypotPresetRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string ListHoneypotPresetRequest::getNodeId() const {
  return nodeId_;
}

void ListHoneypotPresetRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string ListHoneypotPresetRequest::getPresetName() const {
  return presetName_;
}

void ListHoneypotPresetRequest::setPresetName(const std::string &presetName) {
  presetName_ = presetName;
  setParameter(std::string("PresetName"), presetName);
}

int ListHoneypotPresetRequest::getCurrentPage() const {
  return currentPage_;
}

void ListHoneypotPresetRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListHoneypotPresetRequest::getNodeName() const {
  return nodeName_;
}

void ListHoneypotPresetRequest::setNodeName(const std::string &nodeName) {
  nodeName_ = nodeName;
  setParameter(std::string("NodeName"), nodeName);
}

std::string ListHoneypotPresetRequest::getHoneypotImageName() const {
  return honeypotImageName_;
}

void ListHoneypotPresetRequest::setHoneypotImageName(const std::string &honeypotImageName) {
  honeypotImageName_ = honeypotImageName;
  setParameter(std::string("HoneypotImageName"), honeypotImageName);
}

