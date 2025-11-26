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

#include <alibabacloud/outboundbot/model/ListFlashSmsTemplatesRequest.h>

using AlibabaCloud::OutboundBot::Model::ListFlashSmsTemplatesRequest;

ListFlashSmsTemplatesRequest::ListFlashSmsTemplatesRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ListFlashSmsTemplates") {
  setMethod(HttpRequest::Method::Get);
}

ListFlashSmsTemplatesRequest::~ListFlashSmsTemplatesRequest() {}

std::string ListFlashSmsTemplatesRequest::getInstanceId() const {
  return instanceId_;
}

void ListFlashSmsTemplatesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListFlashSmsTemplatesRequest::getProviderId() const {
  return providerId_;
}

void ListFlashSmsTemplatesRequest::setProviderId(const std::string &providerId) {
  providerId_ = providerId;
  setParameter(std::string("ProviderId"), providerId);
}

std::string ListFlashSmsTemplatesRequest::getConfigId() const {
  return configId_;
}

void ListFlashSmsTemplatesRequest::setConfigId(const std::string &configId) {
  configId_ = configId;
  setParameter(std::string("ConfigId"), configId);
}

