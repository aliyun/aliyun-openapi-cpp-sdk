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

#include <alibabacloud/dataworks-public/model/AddRecognizeRuleRequest.h>

using AlibabaCloud::Dataworks_public::Model::AddRecognizeRuleRequest;

AddRecognizeRuleRequest::AddRecognizeRuleRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "AddRecognizeRule") {
  setMethod(HttpRequest::Method::Post);
}

AddRecognizeRuleRequest::~AddRecognizeRuleRequest() {}

std::string AddRecognizeRuleRequest::getLevel() const {
  return level_;
}

void AddRecognizeRuleRequest::setLevel(const std::string &level) {
  level_ = level;
  setBodyParameter(std::string("Level"), level);
}

std::string AddRecognizeRuleRequest::getColScan() const {
  return colScan_;
}

void AddRecognizeRuleRequest::setColScan(const std::string &colScan) {
  colScan_ = colScan;
  setBodyParameter(std::string("ColScan"), colScan);
}

std::string AddRecognizeRuleRequest::getColExclude() const {
  return colExclude_;
}

void AddRecognizeRuleRequest::setColExclude(const std::string &colExclude) {
  colExclude_ = colExclude;
  setBodyParameter(std::string("ColExclude"), colExclude);
}

std::string AddRecognizeRuleRequest::getContentScan() const {
  return contentScan_;
}

void AddRecognizeRuleRequest::setContentScan(const std::string &contentScan) {
  contentScan_ = contentScan;
  setBodyParameter(std::string("ContentScan"), contentScan);
}

int AddRecognizeRuleRequest::getOperationType() const {
  return operationType_;
}

void AddRecognizeRuleRequest::setOperationType(int operationType) {
  operationType_ = operationType;
  setBodyParameter(std::string("OperationType"), std::to_string(operationType));
}

std::string AddRecognizeRuleRequest::getTemplateId() const {
  return templateId_;
}

void AddRecognizeRuleRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setBodyParameter(std::string("TemplateId"), templateId);
}

std::string AddRecognizeRuleRequest::getRecognizeRulesType() const {
  return recognizeRulesType_;
}

void AddRecognizeRuleRequest::setRecognizeRulesType(const std::string &recognizeRulesType) {
  recognizeRulesType_ = recognizeRulesType;
  setBodyParameter(std::string("RecognizeRulesType"), recognizeRulesType);
}

std::string AddRecognizeRuleRequest::getCommentScan() const {
  return commentScan_;
}

void AddRecognizeRuleRequest::setCommentScan(const std::string &commentScan) {
  commentScan_ = commentScan;
  setBodyParameter(std::string("CommentScan"), commentScan);
}

std::string AddRecognizeRuleRequest::getAccountName() const {
  return accountName_;
}

void AddRecognizeRuleRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setBodyParameter(std::string("AccountName"), accountName);
}

std::string AddRecognizeRuleRequest::getSensitiveDescription() const {
  return sensitiveDescription_;
}

void AddRecognizeRuleRequest::setSensitiveDescription(const std::string &sensitiveDescription) {
  sensitiveDescription_ = sensitiveDescription;
  setBodyParameter(std::string("SensitiveDescription"), sensitiveDescription);
}

std::string AddRecognizeRuleRequest::getTenantId() const {
  return tenantId_;
}

void AddRecognizeRuleRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string AddRecognizeRuleRequest::getRecognizeRules() const {
  return recognizeRules_;
}

void AddRecognizeRuleRequest::setRecognizeRules(const std::string &recognizeRules) {
  recognizeRules_ = recognizeRules;
  setBodyParameter(std::string("RecognizeRules"), recognizeRules);
}

int AddRecognizeRuleRequest::getHitThreshold() const {
  return hitThreshold_;
}

void AddRecognizeRuleRequest::setHitThreshold(int hitThreshold) {
  hitThreshold_ = hitThreshold;
  setBodyParameter(std::string("HitThreshold"), std::to_string(hitThreshold));
}

std::string AddRecognizeRuleRequest::getSensitiveName() const {
  return sensitiveName_;
}

void AddRecognizeRuleRequest::setSensitiveName(const std::string &sensitiveName) {
  sensitiveName_ = sensitiveName;
  setBodyParameter(std::string("SensitiveName"), sensitiveName);
}

std::string AddRecognizeRuleRequest::getNodeParent() const {
  return nodeParent_;
}

void AddRecognizeRuleRequest::setNodeParent(const std::string &nodeParent) {
  nodeParent_ = nodeParent;
  setBodyParameter(std::string("NodeParent"), nodeParent);
}

std::string AddRecognizeRuleRequest::getLevelName() const {
  return levelName_;
}

void AddRecognizeRuleRequest::setLevelName(const std::string &levelName) {
  levelName_ = levelName;
  setBodyParameter(std::string("LevelName"), levelName);
}

std::string AddRecognizeRuleRequest::getNodeId() const {
  return nodeId_;
}

void AddRecognizeRuleRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setBodyParameter(std::string("NodeId"), nodeId);
}

int AddRecognizeRuleRequest::getStatus() const {
  return status_;
}

void AddRecognizeRuleRequest::setStatus(int status) {
  status_ = status;
  setBodyParameter(std::string("Status"), std::to_string(status));
}

