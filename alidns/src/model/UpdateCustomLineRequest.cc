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

#include <alibabacloud/alidns/model/UpdateCustomLineRequest.h>

using AlibabaCloud::Alidns::Model::UpdateCustomLineRequest;

UpdateCustomLineRequest::UpdateCustomLineRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "UpdateCustomLine") {
  setMethod(HttpRequest::Method::Post);
}

UpdateCustomLineRequest::~UpdateCustomLineRequest() {}

long UpdateCustomLineRequest::getLineId() const {
  return lineId_;
}

void UpdateCustomLineRequest::setLineId(long lineId) {
  lineId_ = lineId;
  setParameter(std::string("LineId"), std::to_string(lineId));
}

std::vector<UpdateCustomLineRequest::IpSegment> UpdateCustomLineRequest::getIpSegment() const {
  return ipSegment_;
}

void UpdateCustomLineRequest::setIpSegment(const std::vector<UpdateCustomLineRequest::IpSegment> &ipSegment) {
  ipSegment_ = ipSegment;
  for(int dep1 = 0; dep1 != ipSegment.size(); dep1++) {
  auto ipSegmentObj = ipSegment.at(dep1);
  std::string ipSegmentObjStr = std::string("IpSegment") + "." + std::to_string(dep1 + 1);
    setParameter(ipSegmentObjStr + ".EndIp", ipSegmentObj.endIp);
    setParameter(ipSegmentObjStr + ".StartIp", ipSegmentObj.startIp);
  }
}

std::string UpdateCustomLineRequest::getUserClientIp() const {
  return userClientIp_;
}

void UpdateCustomLineRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string UpdateCustomLineRequest::getLineName() const {
  return lineName_;
}

void UpdateCustomLineRequest::setLineName(const std::string &lineName) {
  lineName_ = lineName;
  setParameter(std::string("LineName"), lineName);
}

std::string UpdateCustomLineRequest::getLang() const {
  return lang_;
}

void UpdateCustomLineRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

