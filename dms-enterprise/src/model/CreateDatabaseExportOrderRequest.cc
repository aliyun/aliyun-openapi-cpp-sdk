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

#include <alibabacloud/dms-enterprise/model/CreateDatabaseExportOrderRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateDatabaseExportOrderRequest;

CreateDatabaseExportOrderRequest::CreateDatabaseExportOrderRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateDatabaseExportOrder") {
  setMethod(HttpRequest::Method::Post);
}

CreateDatabaseExportOrderRequest::~CreateDatabaseExportOrderRequest() {}

long CreateDatabaseExportOrderRequest::getParentId() const {
  return parentId_;
}

void CreateDatabaseExportOrderRequest::setParentId(long parentId) {
  parentId_ = parentId;
  setParameter(std::string("ParentId"), std::to_string(parentId));
}

long CreateDatabaseExportOrderRequest::getTid() const {
  return tid_;
}

void CreateDatabaseExportOrderRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::vector<CreateDatabaseExportOrderRequest::long> CreateDatabaseExportOrderRequest::getRelatedUserList() const {
  return relatedUserList_;
}

void CreateDatabaseExportOrderRequest::setRelatedUserList(const std::vector<CreateDatabaseExportOrderRequest::long> &relatedUserList) {
  relatedUserList_ = relatedUserList;
  for(int dep1 = 0; dep1 != relatedUserList.size(); dep1++) {
    setParameter(std::string("RelatedUserList") + "." + std::to_string(dep1 + 1), std::to_string(relatedUserList[dep1]));
  }
}

CreateDatabaseExportOrderRequest::PluginParam CreateDatabaseExportOrderRequest::getPluginParam() const {
  return pluginParam_;
}

void CreateDatabaseExportOrderRequest::setPluginParam(const CreateDatabaseExportOrderRequest::PluginParam &pluginParam) {
  pluginParam_ = pluginParam;
  setParameter(std::string("PluginParam") + ".Classify", pluginParam.classify);
  setParameter(std::string("PluginParam") + ".SearchName", pluginParam.searchName);
  setParameter(std::string("PluginParam") + ".InstanceId", std::to_string(pluginParam.instanceId));
  setParameter(std::string("PluginParam") + ".DbId", std::to_string(pluginParam.dbId));
  setParameter(std::string("PluginParam") + ".Logic", pluginParam.logic ? "true" : "false");
  setParameter(std::string("PluginParam") + ".Config.TargetOption", pluginParam.config.targetOption);
  for(int dep1 = 0; dep1 != pluginParam.config.dataOption.size(); dep1++) {
    setParameter(std::string("PluginParam") + ".Config.DataOption." + std::to_string(dep1 + 1), pluginParam.config.dataOption[dep1]);
  }
  for(auto const &iter1 : pluginParam.config.tables) {
    setParameter(std::string("PluginParam") + ".Config.Tables." + iter1.first, iter1.second);
  }
  setParameter(std::string("PluginParam") + ".Config.ExportContent", pluginParam.config.exportContent);
  for(int dep1 = 0; dep1 != pluginParam.config.selectedTables.size(); dep1++) {
    setParameter(std::string("PluginParam") + ".Config.SelectedTables." + std::to_string(dep1 + 1), pluginParam.config.selectedTables[dep1]);
  }
  for(int dep1 = 0; dep1 != pluginParam.config.exportTypes.size(); dep1++) {
    setParameter(std::string("PluginParam") + ".Config.ExportTypes." + std::to_string(dep1 + 1), pluginParam.config.exportTypes[dep1]);
  }
  for(int dep1 = 0; dep1 != pluginParam.config.sQLExtOption.size(); dep1++) {
    setParameter(std::string("PluginParam") + ".Config.SQLExtOption." + std::to_string(dep1 + 1), pluginParam.config.sQLExtOption[dep1]);
  }
}

std::string CreateDatabaseExportOrderRequest::getAttachmentKey() const {
  return attachmentKey_;
}

void CreateDatabaseExportOrderRequest::setAttachmentKey(const std::string &attachmentKey) {
  attachmentKey_ = attachmentKey;
  setParameter(std::string("AttachmentKey"), attachmentKey);
}

std::string CreateDatabaseExportOrderRequest::getComment() const {
  return comment_;
}

void CreateDatabaseExportOrderRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setParameter(std::string("Comment"), comment);
}

