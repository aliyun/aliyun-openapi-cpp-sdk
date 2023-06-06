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

#include <alibabacloud/sas/model/GetCheckDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetCheckDetailResult::GetCheckDetailResult() :
	ServiceResult()
{}

GetCheckDetailResult::GetCheckDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCheckDetailResult::~GetCheckDetailResult()
{}

void GetCheckDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCustomConfigsNode = value["CustomConfigs"]["CustomConfigsItem"];
	for (auto valueCustomConfigsCustomConfigsItem : allCustomConfigsNode)
	{
		CustomConfigsItem customConfigsObject;
		if(!valueCustomConfigsCustomConfigsItem["Name"].isNull())
			customConfigsObject.name = valueCustomConfigsCustomConfigsItem["Name"].asString();
		if(!valueCustomConfigsCustomConfigsItem["TypeDefine"].isNull())
			customConfigsObject.typeDefine = valueCustomConfigsCustomConfigsItem["TypeDefine"].asString();
		if(!valueCustomConfigsCustomConfigsItem["DefaultValue"].isNull())
			customConfigsObject.defaultValue = valueCustomConfigsCustomConfigsItem["DefaultValue"].asString();
		if(!valueCustomConfigsCustomConfigsItem["Value"].isNull())
			customConfigsObject.value = valueCustomConfigsCustomConfigsItem["Value"].asString();
		if(!valueCustomConfigsCustomConfigsItem["ShowName"].isNull())
			customConfigsObject.showName = valueCustomConfigsCustomConfigsItem["ShowName"].asString();
		customConfigs_.push_back(customConfigsObject);
	}
	auto descriptionNode = value["Description"];
	if(!descriptionNode["Type"].isNull())
		description_.type = descriptionNode["Type"].asString();
	if(!descriptionNode["Value"].isNull())
		description_.value = descriptionNode["Value"].asString();
	if(!descriptionNode["Link"].isNull())
		description_.link = descriptionNode["Link"].asString();
	auto solutionNode = value["Solution"];
	if(!solutionNode["Type"].isNull())
		solution_.type = solutionNode["Type"].asString();
	if(!solutionNode["Value"].isNull())
		solution_.value = solutionNode["Value"].asString();
	if(!solutionNode["Link"].isNull())
		solution_.link = solutionNode["Link"].asString();
	auto assistInfoNode = value["AssistInfo"];
	if(!assistInfoNode["Type"].isNull())
		assistInfo_.type = assistInfoNode["Type"].asString();
	if(!assistInfoNode["Value"].isNull())
		assistInfo_.value = assistInfoNode["Value"].asString();
	if(!assistInfoNode["Link"].isNull())
		assistInfo_.link = assistInfoNode["Link"].asString();

}

GetCheckDetailResult::Description GetCheckDetailResult::getDescription()const
{
	return description_;
}

std::vector<GetCheckDetailResult::CustomConfigsItem> GetCheckDetailResult::getCustomConfigs()const
{
	return customConfigs_;
}

GetCheckDetailResult::AssistInfo GetCheckDetailResult::getAssistInfo()const
{
	return assistInfo_;
}

GetCheckDetailResult::Solution GetCheckDetailResult::getSolution()const
{
	return solution_;
}

