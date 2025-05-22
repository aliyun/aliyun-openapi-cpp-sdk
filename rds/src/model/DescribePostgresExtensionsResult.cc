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

#include <alibabacloud/rds/model/DescribePostgresExtensionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribePostgresExtensionsResult::DescribePostgresExtensionsResult() :
	ServiceResult()
{}

DescribePostgresExtensionsResult::DescribePostgresExtensionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePostgresExtensionsResult::~DescribePostgresExtensionsResult()
{}

void DescribePostgresExtensionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstalledExtensionsNode = value["InstalledExtensions"]["Extension"];
	for (auto valueInstalledExtensionsExtension : allInstalledExtensionsNode)
	{
		Extension installedExtensionsObject;
		if(!valueInstalledExtensionsExtension["Category"].isNull())
			installedExtensionsObject.category = valueInstalledExtensionsExtension["Category"].asString();
		if(!valueInstalledExtensionsExtension["Comment"].isNull())
			installedExtensionsObject.comment = valueInstalledExtensionsExtension["Comment"].asString();
		if(!valueInstalledExtensionsExtension["DefaultVersion"].isNull())
			installedExtensionsObject.defaultVersion = valueInstalledExtensionsExtension["DefaultVersion"].asString();
		if(!valueInstalledExtensionsExtension["InstalledVersion"].isNull())
			installedExtensionsObject.installedVersion = valueInstalledExtensionsExtension["InstalledVersion"].asString();
		if(!valueInstalledExtensionsExtension["Name"].isNull())
			installedExtensionsObject.name = valueInstalledExtensionsExtension["Name"].asString();
		if(!valueInstalledExtensionsExtension["Owner"].isNull())
			installedExtensionsObject.owner = valueInstalledExtensionsExtension["Owner"].asString();
		if(!valueInstalledExtensionsExtension["Priority"].isNull())
			installedExtensionsObject.priority = valueInstalledExtensionsExtension["Priority"].asString();
		if(!valueInstalledExtensionsExtension["Requires"].isNull())
			installedExtensionsObject.requires = valueInstalledExtensionsExtension["Requires"].asString();
		if(!valueInstalledExtensionsExtension["Uid"].isNull())
			installedExtensionsObject.uid = valueInstalledExtensionsExtension["Uid"].asString();
		installedExtensions_.push_back(installedExtensionsObject);
	}
	auto allUninstalledExtensionsNode = value["UninstalledExtensions"]["Extension"];
	for (auto valueUninstalledExtensionsExtension : allUninstalledExtensionsNode)
	{
		Extension uninstalledExtensionsObject;
		if(!valueUninstalledExtensionsExtension["Category"].isNull())
			uninstalledExtensionsObject.category = valueUninstalledExtensionsExtension["Category"].asString();
		if(!valueUninstalledExtensionsExtension["Comment"].isNull())
			uninstalledExtensionsObject.comment = valueUninstalledExtensionsExtension["Comment"].asString();
		if(!valueUninstalledExtensionsExtension["DefaultVersion"].isNull())
			uninstalledExtensionsObject.defaultVersion = valueUninstalledExtensionsExtension["DefaultVersion"].asString();
		if(!valueUninstalledExtensionsExtension["InstalledVersion"].isNull())
			uninstalledExtensionsObject.installedVersion = valueUninstalledExtensionsExtension["InstalledVersion"].asString();
		if(!valueUninstalledExtensionsExtension["Name"].isNull())
			uninstalledExtensionsObject.name = valueUninstalledExtensionsExtension["Name"].asString();
		if(!valueUninstalledExtensionsExtension["Owner"].isNull())
			uninstalledExtensionsObject.owner = valueUninstalledExtensionsExtension["Owner"].asString();
		if(!valueUninstalledExtensionsExtension["Priority"].isNull())
			uninstalledExtensionsObject.priority = valueUninstalledExtensionsExtension["Priority"].asString();
		if(!valueUninstalledExtensionsExtension["Requires"].isNull())
			uninstalledExtensionsObject.requires = valueUninstalledExtensionsExtension["Requires"].asString();
		if(!valueUninstalledExtensionsExtension["Uid"].isNull())
			uninstalledExtensionsObject.uid = valueUninstalledExtensionsExtension["Uid"].asString();
		uninstalledExtensions_.push_back(uninstalledExtensionsObject);
	}
	if(!value["Overview"].isNull())
		overview_ = value["Overview"].asString();

}

std::vector<DescribePostgresExtensionsResult::Extension> DescribePostgresExtensionsResult::getInstalledExtensions()const
{
	return installedExtensions_;
}

std::string DescribePostgresExtensionsResult::getOverview()const
{
	return overview_;
}

std::vector<DescribePostgresExtensionsResult::Extension> DescribePostgresExtensionsResult::getUninstalledExtensions()const
{
	return uninstalledExtensions_;
}

