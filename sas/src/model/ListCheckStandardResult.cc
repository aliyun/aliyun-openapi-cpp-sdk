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

#include <alibabacloud/sas/model/ListCheckStandardResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListCheckStandardResult::ListCheckStandardResult() :
	ServiceResult()
{}

ListCheckStandardResult::ListCheckStandardResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCheckStandardResult::~ListCheckStandardResult()
{}

void ListCheckStandardResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStandardsNode = value["Standards"]["StandardsItem"];
	for (auto valueStandardsStandardsItem : allStandardsNode)
	{
		StandardsItem standardsObject;
		if(!valueStandardsStandardsItem["Id"].isNull())
			standardsObject.id = std::stol(valueStandardsStandardsItem["Id"].asString());
		if(!valueStandardsStandardsItem["ShowName"].isNull())
			standardsObject.showName = valueStandardsStandardsItem["ShowName"].asString();
		if(!valueStandardsStandardsItem["Type"].isNull())
			standardsObject.type = valueStandardsStandardsItem["Type"].asString();
		auto allRequirementsNode = valueStandardsStandardsItem["Requirements"]["RequirementsItem"];
		for (auto valueStandardsStandardsItemRequirementsRequirementsItem : allRequirementsNode)
		{
			StandardsItem::RequirementsItem requirementsObject;
			if(!valueStandardsStandardsItemRequirementsRequirementsItem["Id"].isNull())
				requirementsObject.id = std::stol(valueStandardsStandardsItemRequirementsRequirementsItem["Id"].asString());
			if(!valueStandardsStandardsItemRequirementsRequirementsItem["ShowName"].isNull())
				requirementsObject.showName = valueStandardsStandardsItemRequirementsRequirementsItem["ShowName"].asString();
			if(!valueStandardsStandardsItemRequirementsRequirementsItem["RiskCheckCount"].isNull())
				requirementsObject.riskCheckCount = std::stol(valueStandardsStandardsItemRequirementsRequirementsItem["RiskCheckCount"].asString());
			standardsObject.requirements.push_back(requirementsObject);
		}
		standards_.push_back(standardsObject);
	}

}

std::vector<ListCheckStandardResult::StandardsItem> ListCheckStandardResult::getStandards()const
{
	return standards_;
}

