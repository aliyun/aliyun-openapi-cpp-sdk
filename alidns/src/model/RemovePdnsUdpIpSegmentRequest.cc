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

#include <alibabacloud/alidns/model/RemovePdnsUdpIpSegmentRequest.h>

using AlibabaCloud::Alidns::Model::RemovePdnsUdpIpSegmentRequest;

RemovePdnsUdpIpSegmentRequest::RemovePdnsUdpIpSegmentRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "RemovePdnsUdpIpSegment") {
  setMethod(HttpRequest::Method::Post);
}

RemovePdnsUdpIpSegmentRequest::~RemovePdnsUdpIpSegmentRequest() {}

std::string RemovePdnsUdpIpSegmentRequest::getIp() const {
  return ip_;
}

void RemovePdnsUdpIpSegmentRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

std::string RemovePdnsUdpIpSegmentRequest::getLang() const {
  return lang_;
}

void RemovePdnsUdpIpSegmentRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

