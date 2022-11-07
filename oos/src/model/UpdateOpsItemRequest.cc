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

#include <alibabacloud/oos/model/UpdateOpsItemRequest.h>

using AlibabaCloud::Oos::Model::UpdateOpsItemRequest;

UpdateOpsItemRequest::UpdateOpsItemRequest()
    : RpcServiceRequest("oos", "2019-06-01", "UpdateOpsItem") {
  setMethod(HttpRequest::Method::Post);
}

UpdateOpsItemRequest::~UpdateOpsItemRequest() {}

std::string UpdateOpsItemRequest::getClientToken() const {
  return clientToken_;
}

void UpdateOpsItemRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateOpsItemRequest::getDescription() const {
  return description_;
}

void UpdateOpsItemRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateOpsItemRequest::getSource() const {
  return source_;
}

void UpdateOpsItemRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string UpdateOpsItemRequest::getTitle() const {
  return title_;
}

void UpdateOpsItemRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string UpdateOpsItemRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void UpdateOpsItemRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string UpdateOpsItemRequest::getRegionId() const {
  return regionId_;
}

void UpdateOpsItemRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateOpsItemRequest::getSeverity() const {
  return severity_;
}

void UpdateOpsItemRequest::setSeverity(const std::string &severity) {
  severity_ = severity;
  setParameter(std::string("Severity"), severity);
}

std::string UpdateOpsItemRequest::getSolutions() const {
  return solutions_;
}

void UpdateOpsItemRequest::setSolutions(const std::string &solutions) {
  solutions_ = solutions;
  setParameter(std::string("Solutions"), solutions);
}

std::string UpdateOpsItemRequest::getResources() const {
  return resources_;
}

void UpdateOpsItemRequest::setResources(const std::string &resources) {
  resources_ = resources;
  setParameter(std::string("Resources"), resources);
}

int UpdateOpsItemRequest::getPriority() const {
  return priority_;
}

void UpdateOpsItemRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string UpdateOpsItemRequest::getDedupString() const {
  return dedupString_;
}

void UpdateOpsItemRequest::setDedupString(const std::string &dedupString) {
  dedupString_ = dedupString;
  setParameter(std::string("DedupString"), dedupString);
}

std::string UpdateOpsItemRequest::getTags() const {
  return tags_;
}

void UpdateOpsItemRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string UpdateOpsItemRequest::getOpsItemId() const {
  return opsItemId_;
}

void UpdateOpsItemRequest::setOpsItemId(const std::string &opsItemId) {
  opsItemId_ = opsItemId;
  setParameter(std::string("OpsItemId"), opsItemId);
}

std::string UpdateOpsItemRequest::getCategory() const {
  return category_;
}

void UpdateOpsItemRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

std::string UpdateOpsItemRequest::getStatus() const {
  return status_;
}

void UpdateOpsItemRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

