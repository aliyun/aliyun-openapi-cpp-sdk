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

#include <alibabacloud/green/model/DescribeAppInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeAppInfoResult::DescribeAppInfoResult() :
	ServiceResult()
{}

DescribeAppInfoResult::DescribeAppInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAppInfoResult::~DescribeAppInfoResult()
{}

void DescribeAppInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAppInfoListNode = value["AppInfoList"]["AppInfo"];
	for (auto valueAppInfoListAppInfo : allAppInfoListNode)
	{
		AppInfo appInfoListObject;
		if(!valueAppInfoListAppInfo["Id"].isNull())
			appInfoListObject.id = std::stol(valueAppInfoListAppInfo["Id"].asString());
		if(!valueAppInfoListAppInfo["Name"].isNull())
			appInfoListObject.name = valueAppInfoListAppInfo["Name"].asString();
		if(!valueAppInfoListAppInfo["PackageName"].isNull())
			appInfoListObject.packageName = valueAppInfoListAppInfo["PackageName"].asString();
		if(!valueAppInfoListAppInfo["Icon"].isNull())
			appInfoListObject.icon = valueAppInfoListAppInfo["Icon"].asString();
		if(!valueAppInfoListAppInfo["StartDate"].isNull())
			appInfoListObject.startDate = valueAppInfoListAppInfo["StartDate"].asString();
		if(!valueAppInfoListAppInfo["EndDate"].isNull())
			appInfoListObject.endDate = valueAppInfoListAppInfo["EndDate"].asString();
		if(!valueAppInfoListAppInfo["Type"].isNull())
			appInfoListObject.type = std::stoi(valueAppInfoListAppInfo["Type"].asString());
		auto packageInfoNode = value["PackageInfo"];
		if(!packageInfoNode["Version"].isNull())
			appInfoListObject.packageInfo.version = packageInfoNode["Version"].asString();
		auto debugPackageInfoNode = value["DebugPackageInfo"];
		if(!debugPackageInfoNode["Version"].isNull())
			appInfoListObject.debugPackageInfo.version = debugPackageInfoNode["Version"].asString();
		appInfoList_.push_back(appInfoListObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeAppInfoResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAppInfoResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAppInfoResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeAppInfoResult::AppInfo> DescribeAppInfoResult::getAppInfoList()const
{
	return appInfoList_;
}

