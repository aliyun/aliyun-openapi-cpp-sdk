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

#include <alibabacloud/nas/model/DescribeFileSystemStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

DescribeFileSystemStatisticsResult::DescribeFileSystemStatisticsResult() :
	ServiceResult()
{}

DescribeFileSystemStatisticsResult::DescribeFileSystemStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFileSystemStatisticsResult::~DescribeFileSystemStatisticsResult()
{}

void DescribeFileSystemStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFileSystemsNode = value["FileSystems"]["FileSystem"];
	for (auto valueFileSystemsFileSystem : allFileSystemsNode)
	{
		FileSystem fileSystemsObject;
		if(!valueFileSystemsFileSystem["Status"].isNull())
			fileSystemsObject.status = valueFileSystemsFileSystem["Status"].asString();
		if(!valueFileSystemsFileSystem["Capacity"].isNull())
			fileSystemsObject.capacity = std::stol(valueFileSystemsFileSystem["Capacity"].asString());
		if(!valueFileSystemsFileSystem["MeteredIASize"].isNull())
			fileSystemsObject.meteredIASize = std::stol(valueFileSystemsFileSystem["MeteredIASize"].asString());
		if(!valueFileSystemsFileSystem["CreateTime"].isNull())
			fileSystemsObject.createTime = valueFileSystemsFileSystem["CreateTime"].asString();
		if(!valueFileSystemsFileSystem["ChargeType"].isNull())
			fileSystemsObject.chargeType = valueFileSystemsFileSystem["ChargeType"].asString();
		if(!valueFileSystemsFileSystem["StorageType"].isNull())
			fileSystemsObject.storageType = valueFileSystemsFileSystem["StorageType"].asString();
		if(!valueFileSystemsFileSystem["RegionId"].isNull())
			fileSystemsObject.regionId = valueFileSystemsFileSystem["RegionId"].asString();
		if(!valueFileSystemsFileSystem["FileSystemType"].isNull())
			fileSystemsObject.fileSystemType = valueFileSystemsFileSystem["FileSystemType"].asString();
		if(!valueFileSystemsFileSystem["FileSystemId"].isNull())
			fileSystemsObject.fileSystemId = valueFileSystemsFileSystem["FileSystemId"].asString();
		if(!valueFileSystemsFileSystem["MeteredSize"].isNull())
			fileSystemsObject.meteredSize = std::stol(valueFileSystemsFileSystem["MeteredSize"].asString());
		if(!valueFileSystemsFileSystem["Description"].isNull())
			fileSystemsObject.description = valueFileSystemsFileSystem["Description"].asString();
		if(!valueFileSystemsFileSystem["ExpiredTime"].isNull())
			fileSystemsObject.expiredTime = valueFileSystemsFileSystem["ExpiredTime"].asString();
		if(!valueFileSystemsFileSystem["ZoneId"].isNull())
			fileSystemsObject.zoneId = valueFileSystemsFileSystem["ZoneId"].asString();
		if(!valueFileSystemsFileSystem["ProtocolType"].isNull())
			fileSystemsObject.protocolType = valueFileSystemsFileSystem["ProtocolType"].asString();
		auto allPackagesNode = valueFileSystemsFileSystem["Packages"]["Package"];
		for (auto valueFileSystemsFileSystemPackagesPackage : allPackagesNode)
		{
			FileSystem::Package packagesObject;
			if(!valueFileSystemsFileSystemPackagesPackage["StartTime"].isNull())
				packagesObject.startTime = valueFileSystemsFileSystemPackagesPackage["StartTime"].asString();
			if(!valueFileSystemsFileSystemPackagesPackage["ExpiredTime"].isNull())
				packagesObject.expiredTime = valueFileSystemsFileSystemPackagesPackage["ExpiredTime"].asString();
			if(!valueFileSystemsFileSystemPackagesPackage["Size"].isNull())
				packagesObject.size = std::stol(valueFileSystemsFileSystemPackagesPackage["Size"].asString());
			if(!valueFileSystemsFileSystemPackagesPackage["PackageId"].isNull())
				packagesObject.packageId = valueFileSystemsFileSystemPackagesPackage["PackageId"].asString();
			fileSystemsObject.packages.push_back(packagesObject);
		}
		fileSystems_.push_back(fileSystemsObject);
	}
	auto allFileSystemStatisticsNode = value["FileSystemStatistics"]["FileSystemStatistic"];
	for (auto valueFileSystemStatisticsFileSystemStatistic : allFileSystemStatisticsNode)
	{
		FileSystemStatistic fileSystemStatisticsObject;
		if(!valueFileSystemStatisticsFileSystemStatistic["FileSystemType"].isNull())
			fileSystemStatisticsObject.fileSystemType = valueFileSystemStatisticsFileSystemStatistic["FileSystemType"].asString();
		if(!valueFileSystemStatisticsFileSystemStatistic["MeteredSize"].isNull())
			fileSystemStatisticsObject.meteredSize = std::stol(valueFileSystemStatisticsFileSystemStatistic["MeteredSize"].asString());
		if(!valueFileSystemStatisticsFileSystemStatistic["ExpiringCount"].isNull())
			fileSystemStatisticsObject.expiringCount = std::stoi(valueFileSystemStatisticsFileSystemStatistic["ExpiringCount"].asString());
		if(!valueFileSystemStatisticsFileSystemStatistic["TotalCount"].isNull())
			fileSystemStatisticsObject.totalCount = std::stoi(valueFileSystemStatisticsFileSystemStatistic["TotalCount"].asString());
		if(!valueFileSystemStatisticsFileSystemStatistic["ExpiredCount"].isNull())
			fileSystemStatisticsObject.expiredCount = std::stoi(valueFileSystemStatisticsFileSystemStatistic["ExpiredCount"].asString());
		fileSystemStatistics_.push_back(fileSystemStatisticsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<DescribeFileSystemStatisticsResult::FileSystem> DescribeFileSystemStatisticsResult::getFileSystems()const
{
	return fileSystems_;
}

int DescribeFileSystemStatisticsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeFileSystemStatisticsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeFileSystemStatisticsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeFileSystemStatisticsResult::FileSystemStatistic> DescribeFileSystemStatisticsResult::getFileSystemStatistics()const
{
	return fileSystemStatistics_;
}

