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

#include <alibabacloud/dysmsapi/model/SmsConversionRequest.h>

using AlibabaCloud::Dysmsapi::Model::SmsConversionRequest;

SmsConversionRequest::SmsConversionRequest()
    : RpcServiceRequest("dysmsapi", "2018-05-01", "SmsConversion") {
  setMethod(HttpRequest::Method::Post);
}

SmsConversionRequest::~SmsConversionRequest() {}

long SmsConversionRequest::getConversionTime() const {
  return conversionTime_;
}

void SmsConversionRequest::setConversionTime(long conversionTime) {
  conversionTime_ = conversionTime;
  setParameter(std::string("ConversionTime"), std::to_string(conversionTime));
}

std::string SmsConversionRequest::getMessageId() const {
  return messageId_;
}

void SmsConversionRequest::setMessageId(const std::string &messageId) {
  messageId_ = messageId;
  setParameter(std::string("MessageId"), messageId);
}

bool SmsConversionRequest::getDelivered() const {
  return delivered_;
}

void SmsConversionRequest::setDelivered(bool delivered) {
  delivered_ = delivered;
  setParameter(std::string("Delivered"), delivered ? "true" : "false");
}

std::string SmsConversionRequest::getTo() const {
  return to_;
}

void SmsConversionRequest::setTo(const std::string &to) {
  to_ = to;
  setParameter(std::string("To"), to);
}

