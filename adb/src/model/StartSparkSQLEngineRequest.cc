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

#include <alibabacloud/adb/model/StartSparkSQLEngineRequest.h>

using AlibabaCloud::Adb::Model::StartSparkSQLEngineRequest;

StartSparkSQLEngineRequest::StartSparkSQLEngineRequest()
    : RpcServiceRequest("adb", "2021-12-01", "StartSparkSQLEngine") {
  setMethod(HttpRequest::Method::Post);
}

StartSparkSQLEngineRequest::~StartSparkSQLEngineRequest() {}

std::string StartSparkSQLEngineRequest::getResourceGroupName() const {
  return resourceGroupName_;
}

void StartSparkSQLEngineRequest::setResourceGroupName(const std::string &resourceGroupName) {
  resourceGroupName_ = resourceGroupName;
  setBodyParameter(std::string("ResourceGroupName"), resourceGroupName);
}

long StartSparkSQLEngineRequest::getSlotNum() const {
  return slotNum_;
}

void StartSparkSQLEngineRequest::setSlotNum(long slotNum) {
  slotNum_ = slotNum;
  setBodyParameter(std::string("SlotNum"), std::to_string(slotNum));
}

std::string StartSparkSQLEngineRequest::getDBClusterId() const {
  return dBClusterId_;
}

void StartSparkSQLEngineRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setBodyParameter(std::string("DBClusterId"), dBClusterId);
}

long StartSparkSQLEngineRequest::getMinExecutor() const {
  return minExecutor_;
}

void StartSparkSQLEngineRequest::setMinExecutor(long minExecutor) {
  minExecutor_ = minExecutor;
  setBodyParameter(std::string("MinExecutor"), std::to_string(minExecutor));
}

std::string StartSparkSQLEngineRequest::getJars() const {
  return jars_;
}

void StartSparkSQLEngineRequest::setJars(const std::string &jars) {
  jars_ = jars;
  setBodyParameter(std::string("Jars"), jars);
}

long StartSparkSQLEngineRequest::getMaxExecutor() const {
  return maxExecutor_;
}

void StartSparkSQLEngineRequest::setMaxExecutor(long maxExecutor) {
  maxExecutor_ = maxExecutor;
  setBodyParameter(std::string("MaxExecutor"), std::to_string(maxExecutor));
}

std::string StartSparkSQLEngineRequest::getConfig() const {
  return config_;
}

void StartSparkSQLEngineRequest::setConfig(const std::string &config) {
  config_ = config;
  setBodyParameter(std::string("Config"), config);
}

