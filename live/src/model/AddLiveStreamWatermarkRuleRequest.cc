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

#include <alibabacloud/live/model/AddLiveStreamWatermarkRuleRequest.h>

using AlibabaCloud::Live::Model::AddLiveStreamWatermarkRuleRequest;

AddLiveStreamWatermarkRuleRequest::AddLiveStreamWatermarkRuleRequest()
    : RpcServiceRequest("live", "2016-11-01", "AddLiveStreamWatermarkRule") {
  setMethod(HttpRequest::Method::Post);
}

AddLiveStreamWatermarkRuleRequest::~AddLiveStreamWatermarkRuleRequest() {}

std::string AddLiveStreamWatermarkRuleRequest::getDescription() const {
  return description_;
}

void AddLiveStreamWatermarkRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string AddLiveStreamWatermarkRuleRequest::getRegionId() const {
  return regionId_;
}

void AddLiveStreamWatermarkRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddLiveStreamWatermarkRuleRequest::getStream() const {
  return stream_;
}

void AddLiveStreamWatermarkRuleRequest::setStream(const std::string &stream) {
  stream_ = stream;
  setParameter(std::string("Stream"), stream);
}

std::string AddLiveStreamWatermarkRuleRequest::getApp() const {
  return app_;
}

void AddLiveStreamWatermarkRuleRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("App"), app);
}

long AddLiveStreamWatermarkRuleRequest::getOwnerId() const {
  return ownerId_;
}

void AddLiveStreamWatermarkRuleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddLiveStreamWatermarkRuleRequest::getTemplateId() const {
  return templateId_;
}

void AddLiveStreamWatermarkRuleRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string AddLiveStreamWatermarkRuleRequest::getDomain() const {
  return domain_;
}

void AddLiveStreamWatermarkRuleRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string AddLiveStreamWatermarkRuleRequest::getName() const {
  return name_;
}

void AddLiveStreamWatermarkRuleRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

