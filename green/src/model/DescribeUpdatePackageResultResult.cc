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

#include <alibabacloud/green/model/DescribeUpdatePackageResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeUpdatePackageResultResult::DescribeUpdatePackageResultResult() :
	ServiceResult()
{}

DescribeUpdatePackageResultResult::DescribeUpdatePackageResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUpdatePackageResultResult::~DescribeUpdatePackageResultResult()
{}

void DescribeUpdatePackageResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto appInfoNode = value["AppInfo"];
	if(!appInfoNode["Id"].isNull())
		appInfo_.id = std::stol(appInfoNode["Id"].asString());
	if(!appInfoNode["Name"].isNull())
		appInfo_.name = appInfoNode["Name"].asString();
	if(!appInfoNode["PackageName"].isNull())
		appInfo_.packageName = appInfoNode["PackageName"].asString();
	if(!appInfoNode["Icon"].isNull())
		appInfo_.icon = appInfoNode["Icon"].asString();
	if(!appInfoNode["StartDate"].isNull())
		appInfo_.startDate = appInfoNode["StartDate"].asString();
	if(!appInfoNode["EndDate"].isNull())
		appInfo_.endDate = appInfoNode["EndDate"].asString();
	if(!appInfoNode["Type"].isNull())
		appInfo_.type = std::stoi(appInfoNode["Type"].asString());
	auto packageInfoNode = appInfoNode["PackageInfo"];
	if(!packageInfoNode["Version"].isNull())
		appInfo_.packageInfo.version = packageInfoNode["Version"].asString();
	auto debugPackageInfoNode = appInfoNode["DebugPackageInfo"];
	if(!debugPackageInfoNode["Version"].isNull())
		appInfo_.debugPackageInfo.version = debugPackageInfoNode["Version"].asString();

}

DescribeUpdatePackageResultResult::AppInfo DescribeUpdatePackageResultResult::getAppInfo()const
{
	return appInfo_;
}

