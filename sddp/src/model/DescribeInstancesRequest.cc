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

#include <alibabacloud/sddp/model/DescribeInstancesRequest.h>

using AlibabaCloud::Sddp::Model::DescribeInstancesRequest;

DescribeInstancesRequest::DescribeInstancesRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "DescribeInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstancesRequest::~DescribeInstancesRequest() {}

std::string DescribeInstancesRequest::getProductCode() const {
  return productCode_;
}

void DescribeInstancesRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

long DescribeInstancesRequest::getProductId() const {
  return productId_;
}

void DescribeInstancesRequest::setProductId(long productId) {
  productId_ = productId;
  setParameter(std::string("ProductId"), std::to_string(productId));
}

std::string DescribeInstancesRequest::getRiskLevels() const {
  return riskLevels_;
}

void DescribeInstancesRequest::setRiskLevels(const std::string &riskLevels) {
  riskLevels_ = riskLevels;
  setParameter(std::string("RiskLevels"), riskLevels);
}

std::string DescribeInstancesRequest::getQueryName() const {
  return queryName_;
}

void DescribeInstancesRequest::setQueryName(const std::string &queryName) {
  queryName_ = queryName;
  setParameter(std::string("QueryName"), queryName);
}

long DescribeInstancesRequest::getRiskLevelId() const {
  return riskLevelId_;
}

void DescribeInstancesRequest::setRiskLevelId(long riskLevelId) {
  riskLevelId_ = riskLevelId;
  setParameter(std::string("RiskLevelId"), std::to_string(riskLevelId));
}

std::string DescribeInstancesRequest::getSource() const {
  return source_;
}

void DescribeInstancesRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

long DescribeInstancesRequest::getStartTime() const {
  return startTime_;
}

void DescribeInstancesRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

long DescribeInstancesRequest::getUserId() const {
  return userId_;
}

void DescribeInstancesRequest::setUserId(long userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), std::to_string(userId));
}

std::string DescribeInstancesRequest::getNameAccurate() const {
  return nameAccurate_;
}

void DescribeInstancesRequest::setNameAccurate(const std::string &nameAccurate) {
  nameAccurate_ = nameAccurate;
  setParameter(std::string("NameAccurate"), nameAccurate);
}

std::string DescribeInstancesRequest::getSensLevelName() const {
  return sensLevelName_;
}

void DescribeInstancesRequest::setSensLevelName(const std::string &sensLevelName) {
  sensLevelName_ = sensLevelName;
  setParameter(std::string("SensLevelName"), sensLevelName);
}

std::string DescribeInstancesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeInstancesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long DescribeInstancesRequest::getLastFinishTimeStart() const {
  return lastFinishTimeStart_;
}

void DescribeInstancesRequest::setLastFinishTimeStart(long lastFinishTimeStart) {
  lastFinishTimeStart_ = lastFinishTimeStart;
  setParameter(std::string("LastFinishTimeStart"), std::to_string(lastFinishTimeStart));
}

int DescribeInstancesRequest::getDataType() const {
  return dataType_;
}

void DescribeInstancesRequest::setDataType(int dataType) {
  dataType_ = dataType;
  setParameter(std::string("DataType"), std::to_string(dataType));
}

int DescribeInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeInstancesRequest::getCheckStatus() const {
  return checkStatus_;
}

void DescribeInstancesRequest::setCheckStatus(int checkStatus) {
  checkStatus_ = checkStatus;
  setParameter(std::string("CheckStatus"), std::to_string(checkStatus));
}

std::string DescribeInstancesRequest::getLang() const {
  return lang_;
}

void DescribeInstancesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int DescribeInstancesRequest::getQueryType() const {
  return queryType_;
}

void DescribeInstancesRequest::setQueryType(int queryType) {
  queryType_ = queryType;
  setParameter(std::string("QueryType"), std::to_string(queryType));
}

std::string DescribeInstancesRequest::getServiceRegionId() const {
  return serviceRegionId_;
}

void DescribeInstancesRequest::setServiceRegionId(const std::string &serviceRegionId) {
  serviceRegionId_ = serviceRegionId;
  setParameter(std::string("ServiceRegionId"), serviceRegionId);
}

std::string DescribeInstancesRequest::getEngineType() const {
  return engineType_;
}

void DescribeInstancesRequest::setEngineType(const std::string &engineType) {
  engineType_ = engineType;
  setParameter(std::string("EngineType"), engineType);
}

int DescribeInstancesRequest::getFeatureType() const {
  return featureType_;
}

void DescribeInstancesRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

std::string DescribeInstancesRequest::getOrderBy() const {
  return orderBy_;
}

void DescribeInstancesRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

int DescribeInstancesRequest::getUserType() const {
  return userType_;
}

void DescribeInstancesRequest::setUserType(int userType) {
  userType_ = userType;
  setParameter(std::string("UserType"), std::to_string(userType));
}

long DescribeInstancesRequest::getEndTime() const {
  return endTime_;
}

void DescribeInstancesRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

int DescribeInstancesRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeInstancesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeInstancesRequest::getName() const {
  return name_;
}

void DescribeInstancesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

bool DescribeInstancesRequest::getNeedModelTag() const {
  return needModelTag_;
}

void DescribeInstancesRequest::setNeedModelTag(bool needModelTag) {
  needModelTag_ = needModelTag;
  setParameter(std::string("NeedModelTag"), needModelTag ? "true" : "false");
}

long DescribeInstancesRequest::getRuleId() const {
  return ruleId_;
}

void DescribeInstancesRequest::setRuleId(long ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), std::to_string(ruleId));
}

long DescribeInstancesRequest::getLastFinishTimeEnd() const {
  return lastFinishTimeEnd_;
}

void DescribeInstancesRequest::setLastFinishTimeEnd(long lastFinishTimeEnd) {
  lastFinishTimeEnd_ = lastFinishTimeEnd;
  setParameter(std::string("LastFinishTimeEnd"), std::to_string(lastFinishTimeEnd));
}

