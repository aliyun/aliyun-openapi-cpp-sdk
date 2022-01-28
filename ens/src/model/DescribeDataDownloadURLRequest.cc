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

#include <alibabacloud/ens/model/DescribeDataDownloadURLRequest.h>

using AlibabaCloud::Ens::Model::DescribeDataDownloadURLRequest;

DescribeDataDownloadURLRequest::DescribeDataDownloadURLRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeDataDownloadURL") {
  setMethod(HttpRequest::Method::Get);
}

DescribeDataDownloadURLRequest::~DescribeDataDownloadURLRequest() {}

long DescribeDataDownloadURLRequest::getExpireTimeout() const {
  return expireTimeout_;
}

void DescribeDataDownloadURLRequest::setExpireTimeout(long expireTimeout) {
  expireTimeout_ = expireTimeout;
  setParameter(std::string("ExpireTimeout"), std::to_string(expireTimeout));
}

std::string DescribeDataDownloadURLRequest::getServerFilterStrategy() const {
  return serverFilterStrategy_;
}

void DescribeDataDownloadURLRequest::setServerFilterStrategy(const std::string &serverFilterStrategy) {
  serverFilterStrategy_ = serverFilterStrategy;
  setParameter(std::string("ServerFilterStrategy"), serverFilterStrategy);
}

std::string DescribeDataDownloadURLRequest::getDataName() const {
  return dataName_;
}

void DescribeDataDownloadURLRequest::setDataName(const std::string &dataName) {
  dataName_ = dataName;
  setParameter(std::string("DataName"), dataName);
}

std::string DescribeDataDownloadURLRequest::getDataVersion() const {
  return dataVersion_;
}

void DescribeDataDownloadURLRequest::setDataVersion(const std::string &dataVersion) {
  dataVersion_ = dataVersion;
  setParameter(std::string("DataVersion"), dataVersion);
}

std::string DescribeDataDownloadURLRequest::getAppId() const {
  return appId_;
}

void DescribeDataDownloadURLRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

