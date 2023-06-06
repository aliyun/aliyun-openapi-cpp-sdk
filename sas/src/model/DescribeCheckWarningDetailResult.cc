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

#include <alibabacloud/sas/model/DescribeCheckWarningDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeCheckWarningDetailResult::DescribeCheckWarningDetailResult() :
	ServiceResult()
{}

DescribeCheckWarningDetailResult::DescribeCheckWarningDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCheckWarningDetailResult::~DescribeCheckWarningDetailResult()
{}

void DescribeCheckWarningDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCheckDetailColumnsNode = value["CheckDetailColumns"]["CheckDetailColumn"];
	for (auto valueCheckDetailColumnsCheckDetailColumn : allCheckDetailColumnsNode)
	{
		CheckDetailColumn checkDetailColumnsObject;
		if(!valueCheckDetailColumnsCheckDetailColumn["Type"].isNull())
			checkDetailColumnsObject.type = valueCheckDetailColumnsCheckDetailColumn["Type"].asString();
		if(!valueCheckDetailColumnsCheckDetailColumn["Key"].isNull())
			checkDetailColumnsObject.key = valueCheckDetailColumnsCheckDetailColumn["Key"].asString();
		if(!valueCheckDetailColumnsCheckDetailColumn["ShowName"].isNull())
			checkDetailColumnsObject.showName = valueCheckDetailColumnsCheckDetailColumn["ShowName"].asString();
		auto allGridsNode = valueCheckDetailColumnsCheckDetailColumn["Grids"]["Grid"];
		for (auto valueCheckDetailColumnsCheckDetailColumnGridsGrid : allGridsNode)
		{
			CheckDetailColumn::Grid gridsObject;
			if(!valueCheckDetailColumnsCheckDetailColumnGridsGrid["Type"].isNull())
				gridsObject.type = valueCheckDetailColumnsCheckDetailColumnGridsGrid["Type"].asString();
			if(!valueCheckDetailColumnsCheckDetailColumnGridsGrid["Key"].isNull())
				gridsObject.key = valueCheckDetailColumnsCheckDetailColumnGridsGrid["Key"].asString();
			if(!valueCheckDetailColumnsCheckDetailColumnGridsGrid["ShowName"].isNull())
				gridsObject.showName = valueCheckDetailColumnsCheckDetailColumnGridsGrid["ShowName"].asString();
			checkDetailColumnsObject.grids.push_back(gridsObject);
		}
		checkDetailColumns_.push_back(checkDetailColumnsObject);
	}
	auto allCheckDetailAssetInfo = value["CheckDetailAssetInfo"]["CheckDetailAssetInfo"];
	for (const auto &item : allCheckDetailAssetInfo)
		checkDetailAssetInfo_.push_back(item.asString());
	if(!value["Advice"].isNull())
		advice_ = value["Advice"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Item"].isNull())
		item_ = value["Item"].asString();
	if(!value["CheckId"].isNull())
		checkId_ = std::stol(value["CheckId"].asString());
	if(!value["Level"].isNull())
		level_ = value["Level"].asString();
	if(!value["Prompt"].isNull())
		prompt_ = value["Prompt"].asString();

}

std::string DescribeCheckWarningDetailResult::getItem()const
{
	return item_;
}

std::string DescribeCheckWarningDetailResult::getType()const
{
	return type_;
}

std::vector<DescribeCheckWarningDetailResult::CheckDetailColumn> DescribeCheckWarningDetailResult::getCheckDetailColumns()const
{
	return checkDetailColumns_;
}

std::string DescribeCheckWarningDetailResult::getDescription()const
{
	return description_;
}

long DescribeCheckWarningDetailResult::getCheckId()const
{
	return checkId_;
}

std::vector<std::string> DescribeCheckWarningDetailResult::getCheckDetailAssetInfo()const
{
	return checkDetailAssetInfo_;
}

std::string DescribeCheckWarningDetailResult::getLevel()const
{
	return level_;
}

std::string DescribeCheckWarningDetailResult::getPrompt()const
{
	return prompt_;
}

std::string DescribeCheckWarningDetailResult::getAdvice()const
{
	return advice_;
}

