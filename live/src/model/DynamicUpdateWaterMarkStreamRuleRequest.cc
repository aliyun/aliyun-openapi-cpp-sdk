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

#include <alibabacloud/live/model/DynamicUpdateWaterMarkStreamRuleRequest.h>

using AlibabaCloud::Live::Model::DynamicUpdateWaterMarkStreamRuleRequest;

DynamicUpdateWaterMarkStreamRuleRequest::DynamicUpdateWaterMarkStreamRuleRequest()
    : RpcServiceRequest("live", "2016-11-01", "DynamicUpdateWaterMarkStreamRule") {
  setMethod(HttpRequest::Method::Post);
}

DynamicUpdateWaterMarkStreamRuleRequest::~DynamicUpdateWaterMarkStreamRuleRequest() {}

std::string DynamicUpdateWaterMarkStreamRuleRequest::getRegionId() const {
  return regionId_;
}

void DynamicUpdateWaterMarkStreamRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DynamicUpdateWaterMarkStreamRuleRequest::getStream() const {
  return stream_;
}

void DynamicUpdateWaterMarkStreamRuleRequest::setStream(const std::string &stream) {
  stream_ = stream;
  setParameter(std::string("Stream"), stream);
}

std::string DynamicUpdateWaterMarkStreamRuleRequest::getApp() const {
  return app_;
}

void DynamicUpdateWaterMarkStreamRuleRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("App"), app);
}

long DynamicUpdateWaterMarkStreamRuleRequest::getOwnerId() const {
  return ownerId_;
}

void DynamicUpdateWaterMarkStreamRuleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DynamicUpdateWaterMarkStreamRuleRequest::getTemplateId() const {
  return templateId_;
}

void DynamicUpdateWaterMarkStreamRuleRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string DynamicUpdateWaterMarkStreamRuleRequest::getDomain() const {
  return domain_;
}

void DynamicUpdateWaterMarkStreamRuleRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

