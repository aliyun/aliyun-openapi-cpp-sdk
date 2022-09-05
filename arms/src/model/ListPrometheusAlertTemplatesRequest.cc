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

#include <alibabacloud/arms/model/ListPrometheusAlertTemplatesRequest.h>

using AlibabaCloud::ARMS::Model::ListPrometheusAlertTemplatesRequest;

ListPrometheusAlertTemplatesRequest::ListPrometheusAlertTemplatesRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListPrometheusAlertTemplates") {
  setMethod(HttpRequest::Method::Post);
}

ListPrometheusAlertTemplatesRequest::~ListPrometheusAlertTemplatesRequest() {}

std::string ListPrometheusAlertTemplatesRequest::getProductCode() const {
  return productCode_;
}

void ListPrometheusAlertTemplatesRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string ListPrometheusAlertTemplatesRequest::getRegionId() const {
  return regionId_;
}

void ListPrometheusAlertTemplatesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListPrometheusAlertTemplatesRequest::getClusterId() const {
  return clusterId_;
}

void ListPrometheusAlertTemplatesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ListPrometheusAlertTemplatesRequest::getProxyUserId() const {
  return proxyUserId_;
}

void ListPrometheusAlertTemplatesRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

