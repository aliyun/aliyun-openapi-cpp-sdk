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

#include <alibabacloud/sas/model/ModifyClientConfStrategyRequest.h>

using AlibabaCloud::Sas::Model::ModifyClientConfStrategyRequest;

ModifyClientConfStrategyRequest::ModifyClientConfStrategyRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyClientConfStrategy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyClientConfStrategyRequest::~ModifyClientConfStrategyRequest() {}

std::string ModifyClientConfStrategyRequest::getUuid() const {
  return uuid_;
}

void ModifyClientConfStrategyRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string ModifyClientConfStrategyRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyClientConfStrategyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyClientConfStrategyRequest::getTag() const {
  return tag_;
}

void ModifyClientConfStrategyRequest::setTag(const std::string &tag) {
  tag_ = tag;
  setParameter(std::string("Tag"), tag);
}

std::string ModifyClientConfStrategyRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void ModifyClientConfStrategyRequest::setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), resourceDirectoryAccountId);
}

std::string ModifyClientConfStrategyRequest::getTagValue() const {
  return tagValue_;
}

void ModifyClientConfStrategyRequest::setTagValue(const std::string &tagValue) {
  tagValue_ = tagValue;
  setParameter(std::string("TagValue"), tagValue);
}

std::string ModifyClientConfStrategyRequest::getTagExt() const {
  return tagExt_;
}

void ModifyClientConfStrategyRequest::setTagExt(const std::string &tagExt) {
  tagExt_ = tagExt;
  setParameter(std::string("TagExt"), tagExt);
}

std::vector<std::string> ModifyClientConfStrategyRequest::getUuids() const {
  return uuids_;
}

void ModifyClientConfStrategyRequest::setUuids(const std::vector<std::string> &uuids) {
  uuids_ = uuids;
}

