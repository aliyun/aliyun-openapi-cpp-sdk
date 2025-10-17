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

#include <alibabacloud/polardb/model/DescribeExtensionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeExtensionsResult::DescribeExtensionsResult() :
	ServiceResult()
{}

DescribeExtensionsResult::DescribeExtensionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeExtensionsResult::~DescribeExtensionsResult()
{}

void DescribeExtensionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUninstalledExtensionsNode = value["UninstalledExtensions"]["UninstalledExtensionsItem"];
	for (auto valueUninstalledExtensionsUninstalledExtensionsItem : allUninstalledExtensionsNode)
	{
		UninstalledExtensionsItem uninstalledExtensionsObject;
		if(!valueUninstalledExtensionsUninstalledExtensionsItem["Name"].isNull())
			uninstalledExtensionsObject.name = valueUninstalledExtensionsUninstalledExtensionsItem["Name"].asString();
		if(!valueUninstalledExtensionsUninstalledExtensionsItem["DefaultVersion"].isNull())
			uninstalledExtensionsObject.defaultVersion = valueUninstalledExtensionsUninstalledExtensionsItem["DefaultVersion"].asString();
		if(!valueUninstalledExtensionsUninstalledExtensionsItem["InstalledVersion"].isNull())
			uninstalledExtensionsObject.installedVersion = valueUninstalledExtensionsUninstalledExtensionsItem["InstalledVersion"].asString();
		if(!valueUninstalledExtensionsUninstalledExtensionsItem["Comment"].isNull())
			uninstalledExtensionsObject.comment = valueUninstalledExtensionsUninstalledExtensionsItem["Comment"].asString();
		if(!valueUninstalledExtensionsUninstalledExtensionsItem["Owner"].isNull())
			uninstalledExtensionsObject.owner = valueUninstalledExtensionsUninstalledExtensionsItem["Owner"].asString();
		if(!valueUninstalledExtensionsUninstalledExtensionsItem["Priority"].isNull())
			uninstalledExtensionsObject.priority = valueUninstalledExtensionsUninstalledExtensionsItem["Priority"].asString();
		if(!valueUninstalledExtensionsUninstalledExtensionsItem["Requires"].isNull())
			uninstalledExtensionsObject.requires = valueUninstalledExtensionsUninstalledExtensionsItem["Requires"].asString();
		if(!valueUninstalledExtensionsUninstalledExtensionsItem["Category"].isNull())
			uninstalledExtensionsObject.category = valueUninstalledExtensionsUninstalledExtensionsItem["Category"].asString();
		if(!valueUninstalledExtensionsUninstalledExtensionsItem["Restart"].isNull())
			uninstalledExtensionsObject.restart = valueUninstalledExtensionsUninstalledExtensionsItem["Restart"].asString();
		uninstalledExtensions_.push_back(uninstalledExtensionsObject);
	}
	auto allInstalledExtensionsNode = value["InstalledExtensions"]["InstalledExtensionsItem"];
	for (auto valueInstalledExtensionsInstalledExtensionsItem : allInstalledExtensionsNode)
	{
		InstalledExtensionsItem installedExtensionsObject;
		if(!valueInstalledExtensionsInstalledExtensionsItem["Name"].isNull())
			installedExtensionsObject.name = valueInstalledExtensionsInstalledExtensionsItem["Name"].asString();
		if(!valueInstalledExtensionsInstalledExtensionsItem["DefaultVersion"].isNull())
			installedExtensionsObject.defaultVersion = valueInstalledExtensionsInstalledExtensionsItem["DefaultVersion"].asString();
		if(!valueInstalledExtensionsInstalledExtensionsItem["InstalledVersion"].isNull())
			installedExtensionsObject.installedVersion = valueInstalledExtensionsInstalledExtensionsItem["InstalledVersion"].asString();
		if(!valueInstalledExtensionsInstalledExtensionsItem["Comment"].isNull())
			installedExtensionsObject.comment = valueInstalledExtensionsInstalledExtensionsItem["Comment"].asString();
		if(!valueInstalledExtensionsInstalledExtensionsItem["Owner"].isNull())
			installedExtensionsObject.owner = valueInstalledExtensionsInstalledExtensionsItem["Owner"].asString();
		if(!valueInstalledExtensionsInstalledExtensionsItem["Priority"].isNull())
			installedExtensionsObject.priority = valueInstalledExtensionsInstalledExtensionsItem["Priority"].asString();
		if(!valueInstalledExtensionsInstalledExtensionsItem["Requires"].isNull())
			installedExtensionsObject.requires = valueInstalledExtensionsInstalledExtensionsItem["Requires"].asString();
		if(!valueInstalledExtensionsInstalledExtensionsItem["Category"].isNull())
			installedExtensionsObject.category = valueInstalledExtensionsInstalledExtensionsItem["Category"].asString();
		if(!valueInstalledExtensionsInstalledExtensionsItem["Restart"].isNull())
			installedExtensionsObject.restart = valueInstalledExtensionsInstalledExtensionsItem["Restart"].asString();
		installedExtensions_.push_back(installedExtensionsObject);
	}
	if(!value["Overview"].isNull())
		overview_ = value["Overview"].asString();

}

std::vector<DescribeExtensionsResult::InstalledExtensionsItem> DescribeExtensionsResult::getInstalledExtensions()const
{
	return installedExtensions_;
}

std::string DescribeExtensionsResult::getOverview()const
{
	return overview_;
}

std::vector<DescribeExtensionsResult::UninstalledExtensionsItem> DescribeExtensionsResult::getUninstalledExtensions()const
{
	return uninstalledExtensions_;
}

