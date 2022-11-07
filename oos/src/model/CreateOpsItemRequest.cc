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

#include <alibabacloud/oos/model/CreateOpsItemRequest.h>

using AlibabaCloud::Oos::Model::CreateOpsItemRequest;

CreateOpsItemRequest::CreateOpsItemRequest()
    : RpcServiceRequest("oos", "2019-06-01", "CreateOpsItem") {
  setMethod(HttpRequest::Method::Post);
}

CreateOpsItemRequest::~CreateOpsItemRequest() {}

std::string CreateOpsItemRequest::getClientToken() const {
  return clientToken_;
}

void CreateOpsItemRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateOpsItemRequest::getDescription() const {
  return description_;
}

void CreateOpsItemRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateOpsItemRequest::getSource() const {
  return source_;
}

void CreateOpsItemRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string CreateOpsItemRequest::getTitle() const {
  return title_;
}

void CreateOpsItemRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string CreateOpsItemRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateOpsItemRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateOpsItemRequest::getRegionId() const {
  return regionId_;
}

void CreateOpsItemRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateOpsItemRequest::getSeverity() const {
  return severity_;
}

void CreateOpsItemRequest::setSeverity(const std::string &severity) {
  severity_ = severity;
  setParameter(std::string("Severity"), severity);
}

std::string CreateOpsItemRequest::getSolutions() const {
  return solutions_;
}

void CreateOpsItemRequest::setSolutions(const std::string &solutions) {
  solutions_ = solutions;
  setParameter(std::string("Solutions"), solutions);
}

std::string CreateOpsItemRequest::getResources() const {
  return resources_;
}

void CreateOpsItemRequest::setResources(const std::string &resources) {
  resources_ = resources;
  setParameter(std::string("Resources"), resources);
}

int CreateOpsItemRequest::getPriority() const {
  return priority_;
}

void CreateOpsItemRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string CreateOpsItemRequest::getDedupString() const {
  return dedupString_;
}

void CreateOpsItemRequest::setDedupString(const std::string &dedupString) {
  dedupString_ = dedupString;
  setParameter(std::string("DedupString"), dedupString);
}

std::string CreateOpsItemRequest::getTags() const {
  return tags_;
}

void CreateOpsItemRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string CreateOpsItemRequest::getCategory() const {
  return category_;
}

void CreateOpsItemRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

