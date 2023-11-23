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

#include <alibabacloud/paifeaturestore/model/GetLabelTableResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

GetLabelTableResult::GetLabelTableResult() :
	ServiceResult()
{}

GetLabelTableResult::GetLabelTableResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLabelTableResult::~GetLabelTableResult()
{}

void GetLabelTableResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFieldsNode = value["Fields"]["Field"];
	for (auto valueFieldsField : allFieldsNode)
	{
		Field fieldsObject;
		if(!valueFieldsField["Name"].isNull())
			fieldsObject.name = valueFieldsField["Name"].asString();
		if(!valueFieldsField["Type"].isNull())
			fieldsObject.type = valueFieldsField["Type"].asString();
		auto allAttributes = value["Attributes"]["Attribute"];
		for (auto value : allAttributes)
			fieldsObject.attributes.push_back(value.asString());
		fields_.push_back(fieldsObject);
	}
	auto allRelatedModelFeatures = value["RelatedModelFeatures"]["RelatedModelFeatures"];
	for (const auto &item : allRelatedModelFeatures)
		relatedModelFeatures_.push_back(item.asString());
	if(!value["ProjectId"].isNull())
		projectId_ = value["ProjectId"].asString();
	if(!value["ProjectName"].isNull())
		projectName_ = value["ProjectName"].asString();
	if(!value["DatasourceId"].isNull())
		datasourceId_ = value["DatasourceId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["DatasourceName"].isNull())
		datasourceName_ = value["DatasourceName"].asString();
	if(!value["Owner"].isNull())
		owner_ = value["Owner"].asString();
	if(!value["GmtCreateTime"].isNull())
		gmtCreateTime_ = value["GmtCreateTime"].asString();
	if(!value["GmtModifiedTime"].isNull())
		gmtModifiedTime_ = value["GmtModifiedTime"].asString();

}

std::vector<std::string> GetLabelTableResult::getRelatedModelFeatures()const
{
	return relatedModelFeatures_;
}

std::string GetLabelTableResult::getOwner()const
{
	return owner_;
}

std::vector<GetLabelTableResult::Field> GetLabelTableResult::getFields()const
{
	return fields_;
}

std::string GetLabelTableResult::getDatasourceId()const
{
	return datasourceId_;
}

std::string GetLabelTableResult::getDatasourceName()const
{
	return datasourceName_;
}

std::string GetLabelTableResult::getProjectName()const
{
	return projectName_;
}

std::string GetLabelTableResult::getProjectId()const
{
	return projectId_;
}

std::string GetLabelTableResult::getGmtCreateTime()const
{
	return gmtCreateTime_;
}

std::string GetLabelTableResult::getGmtModifiedTime()const
{
	return gmtModifiedTime_;
}

std::string GetLabelTableResult::getName()const
{
	return name_;
}

