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
	auto allAppInfoList = value["AppInfoList"]["AppInfo"];
	for (auto value : allAppInfoList)
	{
		AppInfo appInfoListObject;
		if(!value["Id"].isNull())
			appInfoListObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			appInfoListObject.name = value["Name"].asString();
		if(!value["PackageName"].isNull())
			appInfoListObject.packageName = value["PackageName"].asString();
		if(!value["Icon"].isNull())
			appInfoListObject.icon = value["Icon"].asString();
		if(!value["StartDate"].isNull())
			appInfoListObject.startDate = value["StartDate"].asString();
		if(!value["EndDate"].isNull())
			appInfoListObject.endDate = value["EndDate"].asString();
		if(!value["Type"].isNull())
			appInfoListObject.type = std::stoi(value["Type"].asString());
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

