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

#include <alibabacloud/quickbi-public/model/SmartqQueryAbilityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

SmartqQueryAbilityResult::SmartqQueryAbilityResult() :
	ServiceResult()
{}

SmartqQueryAbilityResult::SmartqQueryAbilityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SmartqQueryAbilityResult::~SmartqQueryAbilityResult()
{}

void SmartqQueryAbilityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["ChartType"].isNull())
		result_.chartType = resultNode["ChartType"].asString();
	if(!resultNode["LogicSql"].isNull())
		result_.logicSql = resultNode["LogicSql"].asString();
	if(!resultNode["ConclusionText"].isNull())
		result_.conclusionText = resultNode["ConclusionText"].asString();
	auto allMetaTypeNode = resultNode["MetaType"]["MetaTypeItem"];
	for (auto resultNodeMetaTypeMetaTypeItem : allMetaTypeNode)
	{
		Result::MetaTypeItem metaTypeItemObject;
		if(!resultNodeMetaTypeMetaTypeItem["Key"].isNull())
			metaTypeItemObject.key = resultNodeMetaTypeMetaTypeItem["Key"].asString();
		if(!resultNodeMetaTypeMetaTypeItem["Value"].isNull())
			metaTypeItemObject.value = resultNodeMetaTypeMetaTypeItem["Value"].asString();
		if(!resultNodeMetaTypeMetaTypeItem["Type"].isNull())
			metaTypeItemObject.type = resultNodeMetaTypeMetaTypeItem["Type"].asString();
		result_.metaType.push_back(metaTypeItemObject);
	}
	auto allValuesNode = resultNode["Values"]["ValuesItem"];
	for (auto resultNodeValuesValuesItem : allValuesNode)
	{
		Result::ValuesItem valuesItemObject;
		auto allRow = value["Row"]["Row"];
		for (auto value : allRow)
			valuesItemObject.row.push_back(value.asString());
		result_.values.push_back(valuesItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool SmartqQueryAbilityResult::getSuccess()const
{
	return success_;
}

SmartqQueryAbilityResult::Result SmartqQueryAbilityResult::getResult()const
{
	return result_;
}

