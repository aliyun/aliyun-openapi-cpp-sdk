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

#include <alibabacloud/idaas-doraemon/model/ListOrderConsumeStatisticRecordsRequest.h>

using AlibabaCloud::Idaas_doraemon::Model::ListOrderConsumeStatisticRecordsRequest;

ListOrderConsumeStatisticRecordsRequest::ListOrderConsumeStatisticRecordsRequest()
    : RpcServiceRequest("idaas-doraemon", "2021-05-20", "ListOrderConsumeStatisticRecords") {
  setMethod(HttpRequest::Method::Post);
}

ListOrderConsumeStatisticRecordsRequest::~ListOrderConsumeStatisticRecordsRequest() {}

std::string ListOrderConsumeStatisticRecordsRequest::getStatisticTimeMin() const {
  return statisticTimeMin_;
}

void ListOrderConsumeStatisticRecordsRequest::setStatisticTimeMin(const std::string &statisticTimeMin) {
  statisticTimeMin_ = statisticTimeMin;
  setParameter(std::string("StatisticTimeMin"), statisticTimeMin);
}

std::string ListOrderConsumeStatisticRecordsRequest::getAliOrderCode() const {
  return aliOrderCode_;
}

void ListOrderConsumeStatisticRecordsRequest::setAliOrderCode(const std::string &aliOrderCode) {
  aliOrderCode_ = aliOrderCode;
  setParameter(std::string("AliOrderCode"), aliOrderCode);
}

int ListOrderConsumeStatisticRecordsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListOrderConsumeStatisticRecordsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListOrderConsumeStatisticRecordsRequest::getPageSize() const {
  return pageSize_;
}

void ListOrderConsumeStatisticRecordsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListOrderConsumeStatisticRecordsRequest::getServiceCode() const {
  return serviceCode_;
}

void ListOrderConsumeStatisticRecordsRequest::setServiceCode(const std::string &serviceCode) {
  serviceCode_ = serviceCode;
  setParameter(std::string("ServiceCode"), serviceCode);
}

std::string ListOrderConsumeStatisticRecordsRequest::getStatisticTimeMax() const {
  return statisticTimeMax_;
}

void ListOrderConsumeStatisticRecordsRequest::setStatisticTimeMax(const std::string &statisticTimeMax) {
  statisticTimeMax_ = statisticTimeMax;
  setParameter(std::string("StatisticTimeMax"), statisticTimeMax);
}

std::string ListOrderConsumeStatisticRecordsRequest::getApplicationExternalId() const {
  return applicationExternalId_;
}

void ListOrderConsumeStatisticRecordsRequest::setApplicationExternalId(const std::string &applicationExternalId) {
  applicationExternalId_ = applicationExternalId;
  setParameter(std::string("ApplicationExternalId"), applicationExternalId);
}

