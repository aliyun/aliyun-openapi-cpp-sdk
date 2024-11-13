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

#include <alibabacloud/push/model/PushNoticeToiOSRequest.h>

using AlibabaCloud::Push::Model::PushNoticeToiOSRequest;

PushNoticeToiOSRequest::PushNoticeToiOSRequest()
    : RpcServiceRequest("push", "2016-08-01", "PushNoticeToiOS") {
  setMethod(HttpRequest::Method::Post);
}

PushNoticeToiOSRequest::~PushNoticeToiOSRequest() {}

std::string PushNoticeToiOSRequest::getTitle() const {
  return title_;
}

void PushNoticeToiOSRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string PushNoticeToiOSRequest::getBody() const {
  return body_;
}

void PushNoticeToiOSRequest::setBody(const std::string &body) {
  body_ = body;
  setParameter(std::string("Body"), body);
}

std::string PushNoticeToiOSRequest::getExtParameters() const {
  return extParameters_;
}

void PushNoticeToiOSRequest::setExtParameters(const std::string &extParameters) {
  extParameters_ = extParameters;
  setParameter(std::string("ExtParameters"), extParameters);
}

std::string PushNoticeToiOSRequest::getApnsEnv() const {
  return apnsEnv_;
}

void PushNoticeToiOSRequest::setApnsEnv(const std::string &apnsEnv) {
  apnsEnv_ = apnsEnv;
  setParameter(std::string("ApnsEnv"), apnsEnv);
}

std::string PushNoticeToiOSRequest::getJobKey() const {
  return jobKey_;
}

void PushNoticeToiOSRequest::setJobKey(const std::string &jobKey) {
  jobKey_ = jobKey;
  setParameter(std::string("JobKey"), jobKey);
}

std::string PushNoticeToiOSRequest::getTarget() const {
  return target_;
}

void PushNoticeToiOSRequest::setTarget(const std::string &target) {
  target_ = target;
  setParameter(std::string("Target"), target);
}

long PushNoticeToiOSRequest::getAppKey() const {
  return appKey_;
}

void PushNoticeToiOSRequest::setAppKey(long appKey) {
  appKey_ = appKey;
  setParameter(std::string("AppKey"), std::to_string(appKey));
}

std::string PushNoticeToiOSRequest::getTargetValue() const {
  return targetValue_;
}

void PushNoticeToiOSRequest::setTargetValue(const std::string &targetValue) {
  targetValue_ = targetValue;
  setParameter(std::string("TargetValue"), targetValue);
}

