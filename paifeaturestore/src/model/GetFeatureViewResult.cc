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

#include <alibabacloud/paifeaturestore/model/GetFeatureViewResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

GetFeatureViewResult::GetFeatureViewResult() :
	ServiceResult()
{}

GetFeatureViewResult::GetFeatureViewResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFeatureViewResult::~GetFeatureViewResult()
{}

void GetFeatureViewResult::parse(const std::string &payload)
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
		auto allTransformNode = valueFieldsFieldsItem["Transform"]["TransformItem"];
		for (auto valueFieldsFieldsItemTransformTransformItem : allTransformNode)
		{
			FieldsItem::TransformItem transformObject;
			if(!valueFieldsFieldsItemTransformTransformItem["Type"].isNull())
				transformObject.type = valueFieldsFieldsItemTransformTransformItem["Type"].asString();
			if(!valueFieldsFieldsItemTransformTransformItem["LLMConfigId"].isNull())
				transformObject.lLMConfigId = std::stoi(valueFieldsFieldsItemTransformTransformItem["LLMConfigId"].asString());
			auto allInputNode = valueFieldsFieldsItemTransformTransformItem["Input"]["InputItem"];
			for (auto valueFieldsFieldsItemTransformTransformItemInputInputItem : allInputNode)
			{
				FieldsItem::TransformItem::InputItem inputObject;
				if(!valueFieldsFieldsItemTransformTransformItemInputInputItem["Name"].isNull())
					inputObject.name = valueFieldsFieldsItemTransformTransformItemInputInputItem["Name"].asString();
				if(!valueFieldsFieldsItemTransformTransformItemInputInputItem["Type"].isNull())
					inputObject.type = valueFieldsFieldsItemTransformTransformItemInputInputItem["Type"].asString();
				transformObject.input.push_back(inputObject);
			}
			fieldsObject.transform.push_back(transformObject);
		}
		auto allAttributes = value["Attributes"]["Attributes"];
		for (auto value : allAttributes)
			fieldsObject.attributes.push_back(value.asString());
		fields_.push_back(fieldsObject);
	}
	auto allTags = value["Tags"]["Tags"];
	for (const auto &item : allTags)
		tags_.push_back(item.asString());
	if(!value["ProjectId"].isNull())
		projectId_ = value["ProjectId"].asString();
	if(!value["ProjectName"].isNull())
		projectName_ = value["ProjectName"].asString();
	if(!value["FeatureEntityName"].isNull())
		featureEntityName_ = value["FeatureEntityName"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Owner"].isNull())
		owner_ = value["Owner"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["GmtCreateTime"].isNull())
		gmtCreateTime_ = value["GmtCreateTime"].asString();
	if(!value["GmtModifiedTime"].isNull())
		gmtModifiedTime_ = value["GmtModifiedTime"].asString();
	if(!value["FeatureEntityId"].isNull())
		featureEntityId_ = value["FeatureEntityId"].asString();
	if(!value["JoinId"].isNull())
		joinId_ = value["JoinId"].asString();
	if(!value["WriteMethod"].isNull())
		writeMethod_ = value["WriteMethod"].asString();
	if(!value["RegisterTable"].isNull())
		registerTable_ = value["RegisterTable"].asString();
	if(!value["RegisterDatasourceId"].isNull())
		registerDatasourceId_ = value["RegisterDatasourceId"].asString();
	if(!value["RegisterDatasourceName"].isNull())
		registerDatasourceName_ = value["RegisterDatasourceName"].asString();
	if(!value["WriteToFeatureDB"].isNull())
		writeToFeatureDB_ = value["WriteToFeatureDB"].asString() == "true";
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
	if(!value["PublishTableScript"].isNull())
		publishTableScript_ = value["PublishTableScript"].asString();
	if(!value["MockTableName"].isNull())
		mockTableName_ = value["MockTableName"].asString();

}

std::string GetFeatureViewResult::getFeatureEntityName()const
{
	return featureEntityName_;
}

std::string GetFeatureViewResult::getOwner()const
{
	return owner_;
}

bool GetFeatureViewResult::getWriteToFeatureDB()const
{
	return writeToFeatureDB_;
}

std::string GetFeatureViewResult::getProjectName()const
{
	return projectName_;
}

std::string GetFeatureViewResult::getPublishTableScript()const
{
	return publishTableScript_;
}

std::string GetFeatureViewResult::getConfig()const
{
	return config_;
}

std::string GetFeatureViewResult::getWriteMethod()const
{
	return writeMethod_;
}

bool GetFeatureViewResult::getSyncOnlineTable()const
{
	return syncOnlineTable_;
}

std::string GetFeatureViewResult::getProjectId()const
{
	return projectId_;
}

std::string GetFeatureViewResult::getRegisterTable()const
{
	return registerTable_;
}

int GetFeatureViewResult::getTTL()const
{
	return tTL_;
}

std::string GetFeatureViewResult::getGmtModifiedTime()const
{
	return gmtModifiedTime_;
}

std::string GetFeatureViewResult::getGmtSyncTime()const
{
	return gmtSyncTime_;
}

std::string GetFeatureViewResult::getName()const
{
	return name_;
}

std::string GetFeatureViewResult::getJoinId()const
{
	return joinId_;
}

std::string GetFeatureViewResult::getLastSyncConfig()const
{
	return lastSyncConfig_;
}

std::string GetFeatureViewResult::getType()const
{
	return type_;
}

std::vector<GetFeatureViewResult::FieldsItem> GetFeatureViewResult::getFields()const
{
	return fields_;
}

std::string GetFeatureViewResult::getMockTableName()const
{
	return mockTableName_;
}

std::string GetFeatureViewResult::getRegisterDatasourceName()const
{
	return registerDatasourceName_;
}

std::string GetFeatureViewResult::getFeatureEntityId()const
{
	return featureEntityId_;
}

std::vector<std::string> GetFeatureViewResult::getTags()const
{
	return tags_;
}

std::string GetFeatureViewResult::getGmtCreateTime()const
{
	return gmtCreateTime_;
}

std::string GetFeatureViewResult::getRegisterDatasourceId()const
{
	return registerDatasourceId_;
}

