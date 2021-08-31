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

#include <alibabacloud/edas/model/CreateEnvHsfTrafficControlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

CreateEnvHsfTrafficControlResult::CreateEnvHsfTrafficControlResult() :
	ServiceResult()
{}

CreateEnvHsfTrafficControlResult::CreateEnvHsfTrafficControlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateEnvHsfTrafficControlResult::~CreateEnvHsfTrafficControlResult()
{}

void CreateEnvHsfTrafficControlResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AppId"].isNull())
		data_.appId = dataNode["AppId"].asString();
	if(!dataNode["LabelAdviceId"].isNull())
		data_.labelAdviceId = std::stol(dataNode["LabelAdviceId"].asString());
	if(!dataNode["Kind"].isNull())
		data_.kind = dataNode["Kind"].asString();
	if(!dataNode["LabelType"].isNull())
		data_.labelType = dataNode["LabelType"].asString();
	if(!dataNode["PointcutId"].isNull())
		data_.pointcutId = std::stol(dataNode["PointcutId"].asString());
	if(!dataNode["RegionId"].isNull())
		data_.regionId = dataNode["RegionId"].asString();
	auto metadataNode = dataNode["Metadata"];
	if(!metadataNode["Name"].isNull())
		data_.metadata.name = metadataNode["Name"].asString();
	if(!metadataNode["Namespace"].isNull())
		data_.metadata._namespace = metadataNode["Namespace"].asString();
	if(!metadataNode["Labels"].isNull())
		data_.metadata.labels = metadataNode["Labels"].asString();
	auto specNode = metadataNode["Spec"];
	if(!specNode["ConditionType"].isNull())
		data_.metadata.spec.conditionType = specNode["ConditionType"].asString();
	if(!specNode["Enable"].isNull())
		data_.metadata.spec.enable = specNode["Enable"].asString() == "true";
	if(!specNode["Group"].isNull())
		data_.metadata.spec.group = specNode["Group"].asString();
	if(!specNode["MethodName"].isNull())
		data_.metadata.spec.methodName = specNode["MethodName"].asString();
	if(!specNode["Order"].isNull())
		data_.metadata.spec.order = std::stol(specNode["Order"].asString());
	if(!specNode["Percent"].isNull())
		data_.metadata.spec.percent = std::stoi(specNode["Percent"].asString());
	if(!specNode["ServiceName"].isNull())
		data_.metadata.spec.serviceName = specNode["ServiceName"].asString();
	if(!specNode["TriggerPolicy"].isNull())
		data_.metadata.spec.triggerPolicy = specNode["TriggerPolicy"].asString();
	if(!specNode["Type"].isNull())
		data_.metadata.spec.type = specNode["Type"].asString();
	if(!specNode["Selector"].isNull())
		data_.metadata.spec.selector = specNode["Selector"].asString();
	auto allPurposesNode = specNode["Purposes"]["PurposesItem"];
	for (auto specNodePurposesPurposesItem : allPurposesNode)
	{
		Data::Metadata::Spec::PurposesItem purposesItemObject;
		if(!specNodePurposesPurposesItem["Type"].isNull())
			purposesItemObject.type = specNodePurposesPurposesItem["Type"].asString();
		data_.metadata.spec.purposes.push_back(purposesItemObject);
	}
	auto allConditionsNode = specNode["Conditions"]["ConditionsItem"];
	for (auto specNodeConditionsConditionsItem : allConditionsNode)
	{
		Data::Metadata::Spec::ConditionsItem conditionsItemObject;
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
		data_.metadata.spec.conditions.push_back(conditionsItemObject);
	}
		auto allParamTypes = specNode["ParamTypes"]["ParamTypes"];
		for (auto value : allParamTypes)
			data_.metadata.spec.paramTypes.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CreateEnvHsfTrafficControlResult::getMessage()const
{
	return message_;
}

CreateEnvHsfTrafficControlResult::Data CreateEnvHsfTrafficControlResult::getData()const
{
	return data_;
}

int CreateEnvHsfTrafficControlResult::getCode()const
{
	return code_;
}

