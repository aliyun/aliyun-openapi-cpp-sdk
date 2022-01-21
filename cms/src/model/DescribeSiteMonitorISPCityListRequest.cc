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

#include <alibabacloud/cms/model/DescribeSiteMonitorISPCityListRequest.h>

using AlibabaCloud::Cms::Model::DescribeSiteMonitorISPCityListRequest;

DescribeSiteMonitorISPCityListRequest::DescribeSiteMonitorISPCityListRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeSiteMonitorISPCityList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSiteMonitorISPCityListRequest::~DescribeSiteMonitorISPCityListRequest() {}

std::string DescribeSiteMonitorISPCityListRequest::getCity() const {
  return city_;
}

void DescribeSiteMonitorISPCityListRequest::setCity(const std::string &city) {
  city_ = city;
  setParameter(std::string("City"), city);
}

std::string DescribeSiteMonitorISPCityListRequest::getIsp() const {
  return isp_;
}

void DescribeSiteMonitorISPCityListRequest::setIsp(const std::string &isp) {
  isp_ = isp;
  setParameter(std::string("Isp"), isp);
}

bool DescribeSiteMonitorISPCityListRequest::getAPIProbe() const {
  return aPIProbe_;
}

void DescribeSiteMonitorISPCityListRequest::setAPIProbe(bool aPIProbe) {
  aPIProbe_ = aPIProbe;
  setParameter(std::string("APIProbe"), aPIProbe ? "true" : "false");
}

bool DescribeSiteMonitorISPCityListRequest::getIPV4() const {
  return iPV4_;
}

void DescribeSiteMonitorISPCityListRequest::setIPV4(bool iPV4) {
  iPV4_ = iPV4;
  setParameter(std::string("IPV4"), iPV4 ? "true" : "false");
}

bool DescribeSiteMonitorISPCityListRequest::getIPV6() const {
  return iPV6_;
}

void DescribeSiteMonitorISPCityListRequest::setIPV6(bool iPV6) {
  iPV6_ = iPV6;
  setParameter(std::string("IPV6"), iPV6 ? "true" : "false");
}

