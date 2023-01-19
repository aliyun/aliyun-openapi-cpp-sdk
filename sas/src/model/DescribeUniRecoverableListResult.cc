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

#include <alibabacloud/sas/model/DescribeUniRecoverableListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeUniRecoverableListResult::DescribeUniRecoverableListResult() :
	ServiceResult()
{}

DescribeUniRecoverableListResult::DescribeUniRecoverableListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUniRecoverableListResult::~DescribeUniRecoverableListResult()
{}

void DescribeUniRecoverableListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecoverableInfoListNode = value["RecoverableInfoList"]["RecoverableInfoItem"];
	for (auto valueRecoverableInfoListRecoverableInfoItem : allRecoverableInfoListNode)
	{
		RecoverableInfoItem recoverableInfoListObject;
		if(!valueRecoverableInfoListRecoverableInfoItem["LastTime"].isNull())
			recoverableInfoListObject.lastTime = std::stol(valueRecoverableInfoListRecoverableInfoItem["LastTime"].asString());
		if(!valueRecoverableInfoListRecoverableInfoItem["ResetTime"].isNull())
			recoverableInfoListObject.resetTime = std::stol(valueRecoverableInfoListRecoverableInfoItem["ResetTime"].asString());
		if(!valueRecoverableInfoListRecoverableInfoItem["RestoreInfo"].isNull())
			recoverableInfoListObject.restoreInfo = valueRecoverableInfoListRecoverableInfoItem["RestoreInfo"].asString();
		if(!valueRecoverableInfoListRecoverableInfoItem["FirstTime"].isNull())
			recoverableInfoListObject.firstTime = std::stol(valueRecoverableInfoListRecoverableInfoItem["FirstTime"].asString());
		if(!valueRecoverableInfoListRecoverableInfoItem["Name"].isNull())
			recoverableInfoListObject.name = valueRecoverableInfoListRecoverableInfoItem["Name"].asString();
		if(!valueRecoverableInfoListRecoverableInfoItem["ResetScn"].isNull())
			recoverableInfoListObject.resetScn = valueRecoverableInfoListRecoverableInfoItem["ResetScn"].asString();
		recoverableInfoList_.push_back(recoverableInfoListObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["Database"].isNull())
		database_ = value["Database"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

int DescribeUniRecoverableListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeUniRecoverableListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeUniRecoverableListResult::getCurrentPage()const
{
	return currentPage_;
}

std::string DescribeUniRecoverableListResult::getDatabase()const
{
	return database_;
}

int DescribeUniRecoverableListResult::getCount()const
{
	return count_;
}

std::vector<DescribeUniRecoverableListResult::RecoverableInfoItem> DescribeUniRecoverableListResult::getRecoverableInfoList()const
{
	return recoverableInfoList_;
}

