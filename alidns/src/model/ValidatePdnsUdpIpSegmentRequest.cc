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

#include <alibabacloud/alidns/model/ValidatePdnsUdpIpSegmentRequest.h>

using AlibabaCloud::Alidns::Model::ValidatePdnsUdpIpSegmentRequest;

ValidatePdnsUdpIpSegmentRequest::ValidatePdnsUdpIpSegmentRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "ValidatePdnsUdpIpSegment") {
  setMethod(HttpRequest::Method::Post);
}

ValidatePdnsUdpIpSegmentRequest::~ValidatePdnsUdpIpSegmentRequest() {}

std::string ValidatePdnsUdpIpSegmentRequest::getIp() const {
  return ip_;
}

void ValidatePdnsUdpIpSegmentRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

std::string ValidatePdnsUdpIpSegmentRequest::getLang() const {
  return lang_;
}

void ValidatePdnsUdpIpSegmentRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

