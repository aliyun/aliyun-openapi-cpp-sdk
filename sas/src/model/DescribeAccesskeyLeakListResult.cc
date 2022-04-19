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

#include <alibabacloud/sas/model/DescribeAccesskeyLeakListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeAccesskeyLeakListResult::DescribeAccesskeyLeakListResult() :
	ServiceResult()
{}

DescribeAccesskeyLeakListResult::DescribeAccesskeyLeakListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccesskeyLeakListResult::~DescribeAccesskeyLeakListResult()
{}

void DescribeAccesskeyLeakListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAccessKeyLeakListNode = value["AccessKeyLeakList"]["AccessKeyLeak"];
	for (auto valueAccessKeyLeakListAccessKeyLeak : allAccessKeyLeakListNode)
	{
		AccessKeyLeak accessKeyLeakListObject;
		if(!valueAccessKeyLeakListAccessKeyLeak["DealTime"].isNull())
			accessKeyLeakListObject.dealTime = valueAccessKeyLeakListAccessKeyLeak["DealTime"].asString();
		if(!valueAccessKeyLeakListAccessKeyLeak["Status"].isNull())
			accessKeyLeakListObject.status = valueAccessKeyLeakListAccessKeyLeak["Status"].asString();
		if(!valueAccessKeyLeakListAccessKeyLeak["Type"].isNull())
			accessKeyLeakListObject.type = valueAccessKeyLeakListAccessKeyLeak["Type"].asString();
		if(!valueAccessKeyLeakListAccessKeyLeak["UserType"].isNull())
			accessKeyLeakListObject.userType = valueAccessKeyLeakListAccessKeyLeak["UserType"].asString();
		if(!valueAccessKeyLeakListAccessKeyLeak["AccesskeyId"].isNull())
			accessKeyLeakListObject.accesskeyId = valueAccessKeyLeakListAccessKeyLeak["AccesskeyId"].asString();
		if(!valueAccessKeyLeakListAccessKeyLeak["AliUserName"].isNull())
			accessKeyLeakListObject.aliUserName = valueAccessKeyLeakListAccessKeyLeak["AliUserName"].asString();
		if(!valueAccessKeyLeakListAccessKeyLeak["DealType"].isNull())
			accessKeyLeakListObject.dealType = valueAccessKeyLeakListAccessKeyLeak["DealType"].asString();
		if(!valueAccessKeyLeakListAccessKeyLeak["Url"].isNull())
			accessKeyLeakListObject.url = valueAccessKeyLeakListAccessKeyLeak["Url"].asString();
		if(!valueAccessKeyLeakListAccessKeyLeak["GmtModified"].isNull())
			accessKeyLeakListObject.gmtModified = std::stol(valueAccessKeyLeakListAccessKeyLeak["GmtModified"].asString());
		if(!valueAccessKeyLeakListAccessKeyLeak["Asset"].isNull())
			accessKeyLeakListObject.asset = valueAccessKeyLeakListAccessKeyLeak["Asset"].asString();
		if(!valueAccessKeyLeakListAccessKeyLeak["Id"].isNull())
			accessKeyLeakListObject.id = std::stol(valueAccessKeyLeakListAccessKeyLeak["Id"].asString());
		accessKeyLeakList_.push_back(accessKeyLeakListObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["GmtLast"].isNull())
		gmtLast_ = std::stol(value["GmtLast"].asString());
	if(!value["AkLeakCount"].isNull())
		akLeakCount_ = std::stoi(value["AkLeakCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeAccesskeyLeakListResult::getAkLeakCount()const
{
	return akLeakCount_;
}

std::vector<DescribeAccesskeyLeakListResult::AccessKeyLeak> DescribeAccesskeyLeakListResult::getAccessKeyLeakList()const
{
	return accessKeyLeakList_;
}

int DescribeAccesskeyLeakListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAccesskeyLeakListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAccesskeyLeakListResult::getCurrentPage()const
{
	return currentPage_;
}

long DescribeAccesskeyLeakListResult::getGmtLast()const
{
	return gmtLast_;
}

