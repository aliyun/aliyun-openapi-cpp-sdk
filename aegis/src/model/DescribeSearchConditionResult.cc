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

#include <alibabacloud/aegis/model/DescribeSearchConditionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeSearchConditionResult::DescribeSearchConditionResult() :
	ServiceResult()
{}

DescribeSearchConditionResult::DescribeSearchConditionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSearchConditionResult::~DescribeSearchConditionResult()
{}

void DescribeSearchConditionResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allConditionList = value["ConditionList"]["Condition"];
	for (auto value : allConditionList)
	{
		Condition conditionListObject;
		if(!value["Name"].isNull())
			conditionListObject.name = value["Name"].asString();
		if(!value["AssetType"].isNull())
			conditionListObject.assetType = value["AssetType"].asString();
		if(!value["Tag"].isNull())
			conditionListObject.tag = value["Tag"].asString();
		if(!value["Region"].isNull())
			conditionListObject.region = value["Region"].asString();
		if(!value["SafeStatus"].isNull())
			conditionListObject.safeStatus = value["SafeStatus"].asString();
		if(!value["ClientStatus"].isNull())
			conditionListObject.clientStatus = value["ClientStatus"].asString();
		if(!value["GroupId"].isNull())
			conditionListObject.groupId = value["GroupId"].asString();
		if(!value["Os"].isNull())
			conditionListObject.os = value["Os"].asString();
		if(!value["Remark"].isNull())
			conditionListObject.remark = value["Remark"].asString();
		conditionList_.push_back(conditionListObject);
	}

}

std::vector<DescribeSearchConditionResult::Condition> DescribeSearchConditionResult::getConditionList()const
{
	return conditionList_;
}

