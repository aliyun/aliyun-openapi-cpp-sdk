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

#include <alibabacloud/nas/model/DescribeStoragePackagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

DescribeStoragePackagesResult::DescribeStoragePackagesResult() :
	ServiceResult()
{}

DescribeStoragePackagesResult::DescribeStoragePackagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStoragePackagesResult::~DescribeStoragePackagesResult()
{}

void DescribeStoragePackagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPackagesNode = value["Packages"]["Package"];
	for (auto valuePackagesPackage : allPackagesNode)
	{
		Package packagesObject;
		if(!valuePackagesPackage["Status"].isNull())
			packagesObject.status = valuePackagesPackage["Status"].asString();
		if(!valuePackagesPackage["FileSystemId"].isNull())
			packagesObject.fileSystemId = valuePackagesPackage["FileSystemId"].asString();
		if(!valuePackagesPackage["StartTime"].isNull())
			packagesObject.startTime = valuePackagesPackage["StartTime"].asString();
		if(!valuePackagesPackage["ExpiredTime"].isNull())
			packagesObject.expiredTime = valuePackagesPackage["ExpiredTime"].asString();
		if(!valuePackagesPackage["Size"].isNull())
			packagesObject.size = std::stol(valuePackagesPackage["Size"].asString());
		if(!valuePackagesPackage["StorageType"].isNull())
			packagesObject.storageType = valuePackagesPackage["StorageType"].asString();
		if(!valuePackagesPackage["PackageId"].isNull())
			packagesObject.packageId = valuePackagesPackage["PackageId"].asString();
		packages_.push_back(packagesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeStoragePackagesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeStoragePackagesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeStoragePackagesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeStoragePackagesResult::Package> DescribeStoragePackagesResult::getPackages()const
{
	return packages_;
}

