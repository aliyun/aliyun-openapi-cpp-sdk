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

#include <alibabacloud/paifeaturestore/model/GetProjectFeatureViewResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

GetProjectFeatureViewResult::GetProjectFeatureViewResult() :
	ServiceResult()
{}

GetProjectFeatureViewResult::GetProjectFeatureViewResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetProjectFeatureViewResult::~GetProjectFeatureViewResult()
{}

void GetProjectFeatureViewResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFieldsNode = value["Fields"]["FieldsItem"];
	for (auto valueFieldsFieldsItem : allFieldsNode)
	{
		FieldsItem fieldsObject;
		if(!valueFieldsFieldsItem["Name"].isNull())
			fieldsObject.name = valueFieldsFieldsItem["Name"].asString();
		if(!valueFieldsFieldsItem["Type"].isNull())
			fieldsObject.type = valueFieldsFieldsItem["Type"].asString();
		auto allAttributes = value["Attributes"]["Attributes"];
		for (auto value : allAttributes)
			fieldsObject.attributes.push_back(value.asString());
		fields_.push_back(fieldsObject);
	}
	auto allTags = value["Tags"]["Tags"];
	for (const auto &item : allTags)
		tags_.push_back(item.asString());
	if(!value["FeatureViewId"].isNull())
		featureViewId_ = value["FeatureViewId"].asString();
	if(!value["ProjectId"].isNull())
		projectId_ = value["ProjectId"].asString();
	if(!value["ProjectName"].isNull())
		projectName_ = value["ProjectName"].asString();
	if(!value["FeatureEntityId"].isNull())
		featureEntityId_ = value["FeatureEntityId"].asString();
	if(!value["FeatureEntityName"].isNull())
		featureEntityName_ = value["FeatureEntityName"].asString();
	if(!value["JoinId"].isNull())
		joinId_ = value["JoinId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Owner"].isNull())
		owner_ = value["Owner"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["WriteMethod"].isNull())
		writeMethod_ = value["WriteMethod"].asString();
	if(!value["RegisterTable"].isNull())
		registerTable_ = value["RegisterTable"].asString();
	if(!value["RegisterDatasourceId"].isNull())
		registerDatasourceId_ = value["RegisterDatasourceId"].asString();
	if(!value["SyncOnlineTable"].isNull())
		syncOnlineTable_ = value["SyncOnlineTable"].asString() == "true";
	if(!value["TTL"].isNull())
		tTL_ = std::stoi(value["TTL"].asString());
	if(!value["Config"].isNull())
		config_ = value["Config"].asString();
	if(!value["GmtSyncTime"].isNull())
		gmtSyncTime_ = value["GmtSyncTime"].asString();
	if(!value["LastSyncConfig"].isNull())
		lastSyncConfig_ = value["LastSyncConfig"].asString();

}

std::string GetProjectFeatureViewResult::getFeatureEntityName()const
{
	return featureEntityName_;
}

std::string GetProjectFeatureViewResult::getOwner()const
{
	return owner_;
}

std::string GetProjectFeatureViewResult::getFeatureViewId()const
{
	return featureViewId_;
}

std::string GetProjectFeatureViewResult::getProjectName()const
{
	return projectName_;
}

std::string GetProjectFeatureViewResult::getConfig()const
{
	return config_;
}

std::string GetProjectFeatureViewResult::getWriteMethod()const
{
	return writeMethod_;
}

bool GetProjectFeatureViewResult::getSyncOnlineTable()const
{
	return syncOnlineTable_;
}

std::string GetProjectFeatureViewResult::getProjectId()const
{
	return projectId_;
}

std::string GetProjectFeatureViewResult::getRegisterTable()const
{
	return registerTable_;
}

int GetProjectFeatureViewResult::getTTL()const
{
	return tTL_;
}

std::string GetProjectFeatureViewResult::getGmtSyncTime()const
{
	return gmtSyncTime_;
}

std::string GetProjectFeatureViewResult::getName()const
{
	return name_;
}

std::string GetProjectFeatureViewResult::getJoinId()const
{
	return joinId_;
}

std::string GetProjectFeatureViewResult::getLastSyncConfig()const
{
	return lastSyncConfig_;
}

std::string GetProjectFeatureViewResult::getType()const
{
	return type_;
}

std::vector<GetProjectFeatureViewResult::FieldsItem> GetProjectFeatureViewResult::getFields()const
{
	return fields_;
}

std::string GetProjectFeatureViewResult::getFeatureEntityId()const
{
	return featureEntityId_;
}

std::vector<std::string> GetProjectFeatureViewResult::getTags()const
{
	return tags_;
}

std::string GetProjectFeatureViewResult::getRegisterDatasourceId()const
{
	return registerDatasourceId_;
}

