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

#include <alibabacloud/edas/model/CreateEnvHttpTrafficControlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

CreateEnvHttpTrafficControlResult::CreateEnvHttpTrafficControlResult() :
	ServiceResult()
{}

CreateEnvHttpTrafficControlResult::CreateEnvHttpTrafficControlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateEnvHttpTrafficControlResult::~CreateEnvHttpTrafficControlResult()
{}

void CreateEnvHttpTrafficControlResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AccountId"].isNull())
		data_.accountId = dataNode["AccountId"].asString();
	if(!dataNode["AppId"].isNull())
		data_.appId = dataNode["AppId"].asString();
	if(!dataNode["EnvName"].isNull())
		data_.envName = dataNode["EnvName"].asString();
	if(!dataNode["LabelAdviceId"].isNull())
		data_.labelAdviceId = std::stol(dataNode["LabelAdviceId"].asString());
	if(!dataNode["LabelType"].isNull())
		data_.labelType = dataNode["LabelType"].asString();
	if(!dataNode["PointcutId"].isNull())
		data_.pointcutId = std::stol(dataNode["PointcutId"].asString());
	if(!dataNode["RegionId"].isNull())
		data_.regionId = dataNode["RegionId"].asString();
	if(!dataNode["TenantId"].isNull())
		data_.tenantId = dataNode["TenantId"].asString();
	auto specNode = dataNode["Spec"];
	if(!specNode["ConditionType"].isNull())
		data_.spec.conditionType = specNode["ConditionType"].asString();
	if(!specNode["Order"].isNull())
		data_.spec.order = std::stol(specNode["Order"].asString());
	if(!specNode["Percent"].isNull())
		data_.spec.percent = std::stoi(specNode["Percent"].asString());
	if(!specNode["TriggerPolicy"].isNull())
		data_.spec.triggerPolicy = specNode["TriggerPolicy"].asString();
	if(!specNode["Type"].isNull())
		data_.spec.type = specNode["Type"].asString();
	if(!specNode["Url"].isNull())
		data_.spec.url = specNode["Url"].asString();
	if(!specNode["Selector"].isNull())
		data_.spec.selector = specNode["Selector"].asString();
	if(!specNode["ServiceName"].isNull())
		data_.spec.serviceName = specNode["ServiceName"].asString();
	if(!specNode["Group"].isNull())
		data_.spec.group = specNode["Group"].asString();
	if(!specNode["Version"].isNull())
		data_.spec.version = specNode["Version"].asString();
	if(!specNode["MethodName"].isNull())
		data_.spec.methodName = specNode["MethodName"].asString();
	if(!specNode["ClassName"].isNull())
		data_.spec.className = specNode["ClassName"].asString();
	if(!specNode["TransmitSwitch"].isNull())
		data_.spec.transmitSwitch = specNode["TransmitSwitch"].asString() == "true";
	if(!specNode["TransmitLevel"].isNull())
		data_.spec.transmitLevel = std::stoi(specNode["TransmitLevel"].asString());
	auto allConditionsNode = specNode["Conditions"]["conditionsItem"];
	for (auto specNodeConditionsconditionsItem : allConditionsNode)
	{
		Data::Spec::ConditionsItem conditionsItemObject;
		if(!specNodeConditionsconditionsItem["Id"].isNull())
			conditionsItemObject.id = std::stol(specNodeConditionsconditionsItem["Id"].asString());
		if(!specNodeConditionsconditionsItem["Strategy"].isNull())
			conditionsItemObject.strategy = specNodeConditionsconditionsItem["Strategy"].asString();
		if(!specNodeConditionsconditionsItem["Type"].isNull())
			conditionsItemObject.type = specNodeConditionsconditionsItem["Type"].asString();
		if(!specNodeConditionsconditionsItem["Index"].isNull())
			conditionsItemObject.index = std::stoi(specNodeConditionsconditionsItem["Index"].asString());
		if(!specNodeConditionsconditionsItem["Key"].isNull())
			conditionsItemObject.key = specNodeConditionsconditionsItem["Key"].asString();
		if(!specNodeConditionsconditionsItem["Operator"].isNull())
			conditionsItemObject._operator = specNodeConditionsconditionsItem["Operator"].asString();
		auto allValues = value["Values"]["Values"];
		for (auto value : allValues)
			conditionsItemObject.values.push_back(value.asString());
		data_.spec.conditions.push_back(conditionsItemObject);
	}
	auto allPurposesNode = specNode["Purposes"]["PurposesItem"];
	for (auto specNodePurposesPurposesItem : allPurposesNode)
	{
		Data::Spec::PurposesItem purposesItemObject;
		if(!specNodePurposesPurposesItem["Type"].isNull())
			purposesItemObject.type = specNodePurposesPurposesItem["Type"].asString();
		data_.spec.purposes.push_back(purposesItemObject);
	}
		auto allParamTypes = specNode["ParamTypes"]["paramTypes"];
		for (auto value : allParamTypes)
			data_.spec.paramTypes.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CreateEnvHttpTrafficControlResult::getMessage()const
{
	return message_;
}

CreateEnvHttpTrafficControlResult::Data CreateEnvHttpTrafficControlResult::getData()const
{
	return data_;
}

int CreateEnvHttpTrafficControlResult::getCode()const
{
	return code_;
}

