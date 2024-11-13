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

#include <alibabacloud/push/model/ContinuouslyPushRequest.h>

using AlibabaCloud::Push::Model::ContinuouslyPushRequest;

ContinuouslyPushRequest::ContinuouslyPushRequest()
    : RpcServiceRequest("push", "2016-08-01", "ContinuouslyPush") {
  setMethod(HttpRequest::Method::Post);
}

ContinuouslyPushRequest::~ContinuouslyPushRequest() {}

std::string ContinuouslyPushRequest::getMessageId() const {
  return messageId_;
}

void ContinuouslyPushRequest::setMessageId(const std::string &messageId) {
  messageId_ = messageId;
  setParameter(std::string("MessageId"), messageId);
}

std::string ContinuouslyPushRequest::getTarget() const {
  return target_;
}

void ContinuouslyPushRequest::setTarget(const std::string &target) {
  target_ = target;
  setParameter(std::string("Target"), target);
}

long ContinuouslyPushRequest::getAppKey() const {
  return appKey_;
}

void ContinuouslyPushRequest::setAppKey(long appKey) {
  appKey_ = appKey;
  setParameter(std::string("AppKey"), std::to_string(appKey));
}

std::string ContinuouslyPushRequest::getTargetValue() const {
  return targetValue_;
}

void ContinuouslyPushRequest::setTargetValue(const std::string &targetValue) {
  targetValue_ = targetValue;
  setParameter(std::string("TargetValue"), targetValue);
}

