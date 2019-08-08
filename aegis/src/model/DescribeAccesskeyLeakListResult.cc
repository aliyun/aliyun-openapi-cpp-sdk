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

#include <alibabacloud/aegis/model/DescribeAccesskeyLeakListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

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
	auto allAccessKeyLeakList = value["AccessKeyLeakList"]["AccessKeyLeak"];
	for (auto value : allAccessKeyLeakList)
	{
		AccessKeyLeak accessKeyLeakListObject;
		if(!value["Id"].isNull())
			accessKeyLeakListObject.id = std::stol(value["Id"].asString());
		if(!value["GmtModified"].isNull())
			accessKeyLeakListObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["Asset"].isNull())
			accessKeyLeakListObject.asset = value["Asset"].asString();
		if(!value["Type"].isNull())
			accessKeyLeakListObject.type = value["Type"].asString();
		if(!value["AccesskeyId"].isNull())
			accessKeyLeakListObject.accesskeyId = value["AccesskeyId"].asString();
		if(!value["Status"].isNull())
			accessKeyLeakListObject.status = value["Status"].asString();
		if(!value["AliUserName"].isNull())
			accessKeyLeakListObject.aliUserName = value["AliUserName"].asString();
		if(!value["DealType"].isNull())
			accessKeyLeakListObject.dealType = value["DealType"].asString();
		if(!value["DealTime"].isNull())
			accessKeyLeakListObject.dealTime = value["DealTime"].asString();
		if(!value["UserType"].isNull())
			accessKeyLeakListObject.userType = value["UserType"].asString();
		accessKeyLeakList_.push_back(accessKeyLeakListObject);
	}
	if(!value["GmtLast"].isNull())
		gmtLast_ = std::stol(value["GmtLast"].asString());
	if(!value["AkLeakCount"].isNull())
		akLeakCount_ = std::stoi(value["AkLeakCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
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

long DescribeAccesskeyLeakListResult::getGmtLast()const
{
	return gmtLast_;
}

int DescribeAccesskeyLeakListResult::getCurrentPage()const
{
	return currentPage_;
}

