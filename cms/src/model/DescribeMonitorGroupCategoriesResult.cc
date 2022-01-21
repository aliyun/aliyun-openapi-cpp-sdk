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

#include <alibabacloud/cms/model/DescribeMonitorGroupCategoriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeMonitorGroupCategoriesResult::DescribeMonitorGroupCategoriesResult() :
	ServiceResult()
{}

DescribeMonitorGroupCategoriesResult::DescribeMonitorGroupCategoriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMonitorGroupCategoriesResult::~DescribeMonitorGroupCategoriesResult()
{}

void DescribeMonitorGroupCategoriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto monitorGroupCategoriesNode = value["MonitorGroupCategories"];
	if(!monitorGroupCategoriesNode["GroupId"].isNull())
		monitorGroupCategories_.groupId = std::stol(monitorGroupCategoriesNode["GroupId"].asString());
	auto allMonitorGroupCategoryNode = monitorGroupCategoriesNode["MonitorGroupCategory"]["CategoryItem"];
	for (auto monitorGroupCategoriesNodeMonitorGroupCategoryCategoryItem : allMonitorGroupCategoryNode)
	{
		MonitorGroupCategories::CategoryItem categoryItemObject;
		if(!monitorGroupCategoriesNodeMonitorGroupCategoryCategoryItem["Count"].isNull())
			categoryItemObject.count = std::stoi(monitorGroupCategoriesNodeMonitorGroupCategoryCategoryItem["Count"].asString());
		if(!monitorGroupCategoriesNodeMonitorGroupCategoryCategoryItem["Category"].isNull())
			categoryItemObject.category = monitorGroupCategoriesNodeMonitorGroupCategoryCategoryItem["Category"].asString();
		monitorGroupCategories_.monitorGroupCategory.push_back(categoryItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeMonitorGroupCategoriesResult::getMessage()const
{
	return message_;
}

DescribeMonitorGroupCategoriesResult::MonitorGroupCategories DescribeMonitorGroupCategoriesResult::getMonitorGroupCategories()const
{
	return monitorGroupCategories_;
}

int DescribeMonitorGroupCategoriesResult::getCode()const
{
	return code_;
}

bool DescribeMonitorGroupCategoriesResult::getSuccess()const
{
	return success_;
}

