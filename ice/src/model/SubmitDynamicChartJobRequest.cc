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

#include <alibabacloud/ice/model/SubmitDynamicChartJobRequest.h>

using AlibabaCloud::ICE::Model::SubmitDynamicChartJobRequest;

SubmitDynamicChartJobRequest::SubmitDynamicChartJobRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SubmitDynamicChartJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitDynamicChartJobRequest::~SubmitDynamicChartJobRequest() {}

std::string SubmitDynamicChartJobRequest::getOutputConfig() const {
  return outputConfig_;
}

void SubmitDynamicChartJobRequest::setOutputConfig(const std::string &outputConfig) {
  outputConfig_ = outputConfig;
  setParameter(std::string("OutputConfig"), outputConfig);
}

std::string SubmitDynamicChartJobRequest::getDescription() const {
  return description_;
}

void SubmitDynamicChartJobRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string SubmitDynamicChartJobRequest::getTitle() const {
  return title_;
}

void SubmitDynamicChartJobRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string SubmitDynamicChartJobRequest::getUserData() const {
  return userData_;
}

void SubmitDynamicChartJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitDynamicChartJobRequest::getChartType() const {
  return chartType_;
}

void SubmitDynamicChartJobRequest::setChartType(const std::string &chartType) {
  chartType_ = chartType;
  setParameter(std::string("ChartType"), chartType);
}

std::string SubmitDynamicChartJobRequest::getChartTitle() const {
  return chartTitle_;
}

void SubmitDynamicChartJobRequest::setChartTitle(const std::string &chartTitle) {
  chartTitle_ = chartTitle;
  setParameter(std::string("ChartTitle"), chartTitle);
}

std::string SubmitDynamicChartJobRequest::getChartConfig() const {
  return chartConfig_;
}

void SubmitDynamicChartJobRequest::setChartConfig(const std::string &chartConfig) {
  chartConfig_ = chartConfig;
  setParameter(std::string("ChartConfig"), chartConfig);
}

std::string SubmitDynamicChartJobRequest::getInput() const {
  return input_;
}

void SubmitDynamicChartJobRequest::setInput(const std::string &input) {
  input_ = input;
  setParameter(std::string("Input"), input);
}

std::string SubmitDynamicChartJobRequest::getUnit() const {
  return unit_;
}

void SubmitDynamicChartJobRequest::setUnit(const std::string &unit) {
  unit_ = unit;
  setParameter(std::string("Unit"), unit);
}

std::string SubmitDynamicChartJobRequest::getDataSource() const {
  return dataSource_;
}

void SubmitDynamicChartJobRequest::setDataSource(const std::string &dataSource) {
  dataSource_ = dataSource;
  setParameter(std::string("DataSource"), dataSource);
}

std::string SubmitDynamicChartJobRequest::getBackground() const {
  return background_;
}

void SubmitDynamicChartJobRequest::setBackground(const std::string &background) {
  background_ = background;
  setParameter(std::string("Background"), background);
}

std::string SubmitDynamicChartJobRequest::getSubtitle() const {
  return subtitle_;
}

void SubmitDynamicChartJobRequest::setSubtitle(const std::string &subtitle) {
  subtitle_ = subtitle;
  setParameter(std::string("Subtitle"), subtitle);
}

std::string SubmitDynamicChartJobRequest::getAxisParams() const {
  return axisParams_;
}

void SubmitDynamicChartJobRequest::setAxisParams(const std::string &axisParams) {
  axisParams_ = axisParams;
  setParameter(std::string("AxisParams"), axisParams);
}

