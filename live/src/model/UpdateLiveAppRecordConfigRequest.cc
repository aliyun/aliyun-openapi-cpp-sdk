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

#include <alibabacloud/live/model/UpdateLiveAppRecordConfigRequest.h>

using AlibabaCloud::Live::Model::UpdateLiveAppRecordConfigRequest;

UpdateLiveAppRecordConfigRequest::UpdateLiveAppRecordConfigRequest()
    : RpcServiceRequest("live", "2016-11-01", "UpdateLiveAppRecordConfig") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLiveAppRecordConfigRequest::~UpdateLiveAppRecordConfigRequest() {}

std::string UpdateLiveAppRecordConfigRequest::getOssEndpoint() const {
  return ossEndpoint_;
}

void UpdateLiveAppRecordConfigRequest::setOssEndpoint(const std::string &ossEndpoint) {
  ossEndpoint_ = ossEndpoint;
  setParameter(std::string("OssEndpoint"), ossEndpoint);
}

int UpdateLiveAppRecordConfigRequest::getDelayTime() const {
  return delayTime_;
}

void UpdateLiveAppRecordConfigRequest::setDelayTime(int delayTime) {
  delayTime_ = delayTime;
  setParameter(std::string("DelayTime"), std::to_string(delayTime));
}

std::vector<std::string> UpdateLiveAppRecordConfigRequest::getTranscodeTemplates() const {
  return transcodeTemplates_;
}

void UpdateLiveAppRecordConfigRequest::setTranscodeTemplates(const std::vector<std::string> &transcodeTemplates) {
  transcodeTemplates_ = transcodeTemplates;
}

std::string UpdateLiveAppRecordConfigRequest::getStartTime() const {
  return startTime_;
}

void UpdateLiveAppRecordConfigRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string UpdateLiveAppRecordConfigRequest::getAppName() const {
  return appName_;
}

void UpdateLiveAppRecordConfigRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string UpdateLiveAppRecordConfigRequest::getSecurityToken() const {
  return securityToken_;
}

void UpdateLiveAppRecordConfigRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::vector<UpdateLiveAppRecordConfigRequest::TranscodeRecordFormat> UpdateLiveAppRecordConfigRequest::getTranscodeRecordFormat() const {
  return transcodeRecordFormat_;
}

void UpdateLiveAppRecordConfigRequest::setTranscodeRecordFormat(const std::vector<UpdateLiveAppRecordConfigRequest::TranscodeRecordFormat> &transcodeRecordFormat) {
  transcodeRecordFormat_ = transcodeRecordFormat;
  for(int dep1 = 0; dep1 != transcodeRecordFormat.size(); dep1++) {
  auto transcodeRecordFormatObj = transcodeRecordFormat.at(dep1);
  std::string transcodeRecordFormatObjStr = std::string("TranscodeRecordFormat") + "." + std::to_string(dep1 + 1);
    setParameter(transcodeRecordFormatObjStr + ".SliceDuration", std::to_string(transcodeRecordFormatObj.sliceDuration));
    setParameter(transcodeRecordFormatObjStr + ".Format", transcodeRecordFormatObj.format);
    setParameter(transcodeRecordFormatObjStr + ".CycleDuration", std::to_string(transcodeRecordFormatObj.cycleDuration));
  }
}

int UpdateLiveAppRecordConfigRequest::getOnDemand() const {
  return onDemand_;
}

void UpdateLiveAppRecordConfigRequest::setOnDemand(int onDemand) {
  onDemand_ = onDemand;
  setParameter(std::string("OnDemand"), std::to_string(onDemand));
}

std::string UpdateLiveAppRecordConfigRequest::getStreamName() const {
  return streamName_;
}

void UpdateLiveAppRecordConfigRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string UpdateLiveAppRecordConfigRequest::getDomainName() const {
  return domainName_;
}

void UpdateLiveAppRecordConfigRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string UpdateLiveAppRecordConfigRequest::getEndTime() const {
  return endTime_;
}

void UpdateLiveAppRecordConfigRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long UpdateLiveAppRecordConfigRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateLiveAppRecordConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<UpdateLiveAppRecordConfigRequest::RecordFormat> UpdateLiveAppRecordConfigRequest::getRecordFormat() const {
  return recordFormat_;
}

void UpdateLiveAppRecordConfigRequest::setRecordFormat(const std::vector<UpdateLiveAppRecordConfigRequest::RecordFormat> &recordFormat) {
  recordFormat_ = recordFormat;
  for(int dep1 = 0; dep1 != recordFormat.size(); dep1++) {
  auto recordFormatObj = recordFormat.at(dep1);
  std::string recordFormatObjStr = std::string("RecordFormat") + "." + std::to_string(dep1 + 1);
    setParameter(recordFormatObjStr + ".SliceDuration", std::to_string(recordFormatObj.sliceDuration));
    setParameter(recordFormatObjStr + ".Format", recordFormatObj.format);
    setParameter(recordFormatObjStr + ".CycleDuration", std::to_string(recordFormatObj.cycleDuration));
  }
}

