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

#include <alibabacloud/live/model/UpdateLiveAudioAuditNotifyConfigRequest.h>

using AlibabaCloud::Live::Model::UpdateLiveAudioAuditNotifyConfigRequest;

UpdateLiveAudioAuditNotifyConfigRequest::UpdateLiveAudioAuditNotifyConfigRequest()
    : RpcServiceRequest("live", "2016-11-01", "UpdateLiveAudioAuditNotifyConfig") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLiveAudioAuditNotifyConfigRequest::~UpdateLiveAudioAuditNotifyConfigRequest() {}

std::string UpdateLiveAudioAuditNotifyConfigRequest::getDomainName() const {
  return domainName_;
}

void UpdateLiveAudioAuditNotifyConfigRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long UpdateLiveAudioAuditNotifyConfigRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateLiveAudioAuditNotifyConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateLiveAudioAuditNotifyConfigRequest::getCallbackTemplate() const {
  return callbackTemplate_;
}

void UpdateLiveAudioAuditNotifyConfigRequest::setCallbackTemplate(const std::string &callbackTemplate) {
  callbackTemplate_ = callbackTemplate;
  setParameter(std::string("CallbackTemplate"), callbackTemplate);
}

std::string UpdateLiveAudioAuditNotifyConfigRequest::getCallback() const {
  return callback_;
}

void UpdateLiveAudioAuditNotifyConfigRequest::setCallback(const std::string &callback) {
  callback_ = callback;
  setParameter(std::string("Callback"), callback);
}

