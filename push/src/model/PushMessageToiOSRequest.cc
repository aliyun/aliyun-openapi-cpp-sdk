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

#include <alibabacloud/push/model/PushMessageToiOSRequest.h>

using AlibabaCloud::Push::Model::PushMessageToiOSRequest;

PushMessageToiOSRequest::PushMessageToiOSRequest()
    : RpcServiceRequest("push", "2016-08-01", "PushMessageToiOS") {
  setMethod(HttpRequest::Method::Post);
}

PushMessageToiOSRequest::~PushMessageToiOSRequest() {}

std::string PushMessageToiOSRequest::getTitle() const {
  return title_;
}

void PushMessageToiOSRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string PushMessageToiOSRequest::getBody() const {
  return body_;
}

void PushMessageToiOSRequest::setBody(const std::string &body) {
  body_ = body;
  setParameter(std::string("Body"), body);
}

bool PushMessageToiOSRequest::getStoreOffline() const {
  return storeOffline_;
}

void PushMessageToiOSRequest::setStoreOffline(bool storeOffline) {
  storeOffline_ = storeOffline;
  setParameter(std::string("StoreOffline"), storeOffline ? "true" : "false");
}

std::string PushMessageToiOSRequest::getJobKey() const {
  return jobKey_;
}

void PushMessageToiOSRequest::setJobKey(const std::string &jobKey) {
  jobKey_ = jobKey;
  setParameter(std::string("JobKey"), jobKey);
}

std::string PushMessageToiOSRequest::getTarget() const {
  return target_;
}

void PushMessageToiOSRequest::setTarget(const std::string &target) {
  target_ = target;
  setParameter(std::string("Target"), target);
}

long PushMessageToiOSRequest::getAppKey() const {
  return appKey_;
}

void PushMessageToiOSRequest::setAppKey(long appKey) {
  appKey_ = appKey;
  setParameter(std::string("AppKey"), std::to_string(appKey));
}

std::string PushMessageToiOSRequest::getTargetValue() const {
  return targetValue_;
}

void PushMessageToiOSRequest::setTargetValue(const std::string &targetValue) {
  targetValue_ = targetValue;
  setParameter(std::string("TargetValue"), targetValue);
}

