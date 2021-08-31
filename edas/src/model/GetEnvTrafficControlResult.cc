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

#include <alibabacloud/edas/model/GetEnvTrafficControlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetEnvTrafficControlResult::GetEnvTrafficControlResult() :
	ServiceResult()
{}

GetEnvTrafficControlResult::GetEnvTrafficControlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetEnvTrafficControlResult::~GetEnvTrafficControlResult()
{}

void GetEnvTrafficControlResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Kind"].isNull())
			dataObject.kind = valueDataDataItem["Kind"].asString();
		if(!valueDataDataItem["AppId"].isNull())
			dataObject.appId = valueDataDataItem["AppId"].asString();
		if(!valueDataDataItem["EnvName"].isNull())
			dataObject.envName = valueDataDataItem["EnvName"].asString();
		if(!valueDataDataItem["Id"].isNull())
			dataObject.id = valueDataDataItem["Id"].asString();
		if(!valueDataDataItem["LabelAdviceId"].isNull())
			dataObject.labelAdviceId = std::stol(valueDataDataItem["LabelAdviceId"].asString());
		if(!valueDataDataItem["LabelType"].isNull())
			dataObject.labelType = valueDataDataItem["LabelType"].asString();
		if(!valueDataDataItem["PointcutId"].isNull())
			dataObject.pointcutId = std::stol(valueDataDataItem["PointcutId"].asString());
		if(!valueDataDataItem["RegionId"].isNull())
			dataObject.regionId = valueDataDataItem["RegionId"].asString();
		auto metadataNode = value["Metadata"];
		if(!metadataNode["Name"].isNull())
			dataObject.metadata.name = metadataNode["Name"].asString();
		if(!metadataNode["Namespace"].isNull())
			dataObject.metadata._namespace = metadataNode["Namespace"].asString();
		if(!metadataNode["Labels"].isNull())
			dataObject.metadata.labels = metadataNode["Labels"].asString();
		auto specNode = value["Spec"];
		if(!specNode["ShowName"].isNull())
			dataObject.spec.showName = specNode["ShowName"].asString();
		if(!specNode["Enable"].isNull())
			dataObject.spec.enable = specNode["Enable"].asString() == "true";
		if(!specNode["ConditionType"].isNull())
			dataObject.spec.conditionType = specNode["ConditionType"].asString();
		if(!specNode["Selector"].isNull())
			dataObject.spec.selector = specNode["Selector"].asString();
		if(!specNode["TriggerPolicy"].isNull())
			dataObject.spec.triggerPolicy = specNode["TriggerPolicy"].asString();
		if(!specNode["Type"].isNull())
			dataObject.spec.type = specNode["Type"].asString();
		if(!specNode["Url"].isNull())
			dataObject.spec.url = specNode["Url"].asString();
		if(!specNode["ServiceName"].isNull())
			dataObject.spec.serviceName = specNode["ServiceName"].asString();
		if(!specNode["Group"].isNull())
			dataObject.spec.group = specNode["Group"].asString();
		if(!specNode["Version"].isNull())
			dataObject.spec.version = specNode["Version"].asString();
		if(!specNode["MethodName"].isNull())
			dataObject.spec.methodName = specNode["MethodName"].asString();
		if(!specNode["ClassName"].isNull())
			dataObject.spec.className = specNode["ClassName"].asString();
		if(!specNode["TransmitSwitch"].isNull())
			dataObject.spec.transmitSwitch = specNode["TransmitSwitch"].asString() == "true";
		if(!specNode["TransmitLevel"].isNull())
			dataObject.spec.transmitLevel = std::stoi(specNode["TransmitLevel"].asString());
		if(!specNode["Percent"].isNull())
			dataObject.spec.percent = std::stoi(specNode["Percent"].asString());
		if(!specNode["Order"].isNull())
			dataObject.spec.order = std::stol(specNode["Order"].asString());
		auto allPurposesNode = specNode["Purposes"]["PurposesItem"];
		for (auto specNodePurposesPurposesItem : allPurposesNode)
		{
			DataItem::Spec::PurposesItem purposesItemObject;
			if(!specNodePurposesPurposesItem["Type"].isNull())
				purposesItemObject.type = specNodePurposesPurposesItem["Type"].asString();
			dataObject.spec.purposes.push_back(purposesItemObject);
		}
		auto allConditionsNode = specNode["Conditions"]["ConditionsItem"];
		for (auto specNodeConditionsConditionsItem : allConditionsNode)
		{
			DataItem::Spec::ConditionsItem conditionsItemObject;
			if(!specNodeConditionsConditionsItem["Id"].isNull())
				conditionsItemObject.id = std::stol(specNodeConditionsConditionsItem["Id"].asString());
			if(!specNodeConditionsConditionsItem["Strategy"].isNull())
				conditionsItemObject.strategy = specNodeConditionsConditionsItem["Strategy"].asString();
			if(!specNodeConditionsConditionsItem["Type"].isNull())
				conditionsItemObject.type = specNodeConditionsConditionsItem["Type"].asString();
			if(!specNodeConditionsConditionsItem["Index"].isNull())
				conditionsItemObject.index = std::stoi(specNodeConditionsConditionsItem["Index"].asString());
			if(!specNodeConditionsConditionsItem["Key"].isNull())
				conditionsItemObject.key = specNodeConditionsConditionsItem["Key"].asString();
			if(!specNodeConditionsConditionsItem["Operator"].isNull())
				conditionsItemObject._operator = specNodeConditionsConditionsItem["Operator"].asString();
			auto allValues = value["Values"]["Values"];
			for (auto value : allValues)
				conditionsItemObject.values.push_back(value.asString());
			dataObject.spec.conditions.push_back(conditionsItemObject);
		}
			auto allParamTypes = specNode["ParamTypes"]["ParamTypes"];
			for (auto value : allParamTypes)
				dataObject.spec.paramTypes.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetEnvTrafficControlResult::getMessage()const
{
	return message_;
}

std::vector<GetEnvTrafficControlResult::DataItem> GetEnvTrafficControlResult::getData()const
{
	return data_;
}

int GetEnvTrafficControlResult::getCode()const
{
	return code_;
}

