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

#include <alibabacloud/sas/model/DescribeWebPathResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeWebPathResult::DescribeWebPathResult() :
	ServiceResult()
{}

DescribeWebPathResult::DescribeWebPathResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebPathResult::~DescribeWebPathResult()
{}

void DescribeWebPathResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConfigListNode = value["ConfigList"]["config"];
	for (auto valueConfigListconfig : allConfigListNode)
	{
		Config configListObject;
		if(!valueConfigListconfig["WebPath"].isNull())
			configListObject.webPath = valueConfigListconfig["WebPath"].asString();
		if(!valueConfigListconfig["WebPathType"].isNull())
			configListObject.webPathType = valueConfigListconfig["WebPathType"].asString();
		auto allTargetListNode = valueConfigListconfig["TargetList"]["target"];
		for (auto valueConfigListconfigTargetListtarget : allTargetListNode)
		{
			Config::Target targetListObject;
			if(!valueConfigListconfigTargetListtarget["Target"].isNull())
				targetListObject.target = valueConfigListconfigTargetListtarget["Target"].asString();
			if(!valueConfigListconfigTargetListtarget["TargetType"].isNull())
				targetListObject.targetType = valueConfigListconfigTargetListtarget["TargetType"].asString();
			configListObject.targetList.push_back(targetListObject);
		}
		configList_.push_back(configListObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

int DescribeWebPathResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeWebPathResult::getPageSize()const
{
	return pageSize_;
}

int DescribeWebPathResult::getCurrentPage()const
{
	return currentPage_;
}

int DescribeWebPathResult::getCount()const
{
	return count_;
}

std::vector<DescribeWebPathResult::Config> DescribeWebPathResult::getConfigList()const
{
	return configList_;
}

