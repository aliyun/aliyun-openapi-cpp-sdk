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

#include <alibabacloud/drds/model/DescribeDrdsParamsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsParamsResult::DescribeDrdsParamsResult() :
	ServiceResult()
{}

DescribeDrdsParamsResult::DescribeDrdsParamsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsParamsResult::~DescribeDrdsParamsResult()
{}

void DescribeDrdsParamsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListNode = value["List"]["ListItem"];
	for (auto valueListListItem : allListNode)
	{
		ListItem listObject;
		if(!valueListListItem["ParamDefaultValue"].isNull())
			listObject.paramDefaultValue = valueListListItem["ParamDefaultValue"].asString();
		if(!valueListListItem["ParamLevel"].isNull())
			listObject.paramLevel = valueListListItem["ParamLevel"].asString();
		if(!valueListListItem["ParamName"].isNull())
			listObject.paramName = valueListListItem["ParamName"].asString();
		if(!valueListListItem["ParamType"].isNull())
			listObject.paramType = valueListListItem["ParamType"].asString();
		if(!valueListListItem["ParamValue"].isNull())
			listObject.paramValue = valueListListItem["ParamValue"].asString();
		if(!valueListListItem["NeedRestart"].isNull())
			listObject.needRestart = valueListListItem["NeedRestart"].asString() == "true";
		if(!valueListListItem["ParamRanges"].isNull())
			listObject.paramRanges = valueListListItem["ParamRanges"].asString();
		if(!valueListListItem["UserVisible"].isNull())
			listObject.userVisible = valueListListItem["UserVisible"].asString() == "true";
		if(!valueListListItem["DbName"].isNull())
			listObject.dbName = valueListListItem["DbName"].asString();
		if(!valueListListItem["ParamEnglishName"].isNull())
			listObject.paramEnglishName = valueListListItem["ParamEnglishName"].asString();
		if(!valueListListItem["ParamDesc"].isNull())
			listObject.paramDesc = valueListListItem["ParamDesc"].asString();
		if(!valueListListItem["ParamVariableName"].isNull())
			listObject.paramVariableName = valueListListItem["ParamVariableName"].asString();
		list_.push_back(listObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeDrdsParamsResult::ListItem> DescribeDrdsParamsResult::getList()const
{
	return list_;
}

bool DescribeDrdsParamsResult::getSuccess()const
{
	return success_;
}

