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

#include <alibabacloud/dbs/model/DescribeBackupPlanListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

DescribeBackupPlanListResult::DescribeBackupPlanListResult() :
	ServiceResult()
{}

DescribeBackupPlanListResult::DescribeBackupPlanListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupPlanListResult::~DescribeBackupPlanListResult()
{}

void DescribeBackupPlanListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["BackupPlanDetail"];
	for (auto value : allItems)
	{
		BackupPlanDetail itemsObject;
		if(!value["BackupPlanId"].isNull())
			itemsObject.backupPlanId = value["BackupPlanId"].asString();
		if(!value["SourceEndpointInstanceType"].isNull())
			itemsObject.sourceEndpointInstanceType = value["SourceEndpointInstanceType"].asString();
		if(!value["SourceEndpointRegion"].isNull())
			itemsObject.sourceEndpointRegion = value["SourceEndpointRegion"].asString();
		if(!value["SourceEndpointInstanceID"].isNull())
			itemsObject.sourceEndpointInstanceID = value["SourceEndpointInstanceID"].asString();
		if(!value["SourceEndpointIpPort"].isNull())
			itemsObject.sourceEndpointIpPort = value["SourceEndpointIpPort"].asString();
		if(!value["SourceEndpointDatabaseName"].isNull())
			itemsObject.sourceEndpointDatabaseName = value["SourceEndpointDatabaseName"].asString();
		if(!value["SourceEndpointUserName"].isNull())
			itemsObject.sourceEndpointUserName = value["SourceEndpointUserName"].asString();
		if(!value["BackupObjects"].isNull())
			itemsObject.backupObjects = value["BackupObjects"].asString();
		if(!value["BackupGatewayId"].isNull())
			itemsObject.backupGatewayId = std::stol(value["BackupGatewayId"].asString());
		if(!value["OSSBucketRegion"].isNull())
			itemsObject.oSSBucketRegion = value["OSSBucketRegion"].asString();
		if(!value["OSSBucketName"].isNull())
			itemsObject.oSSBucketName = value["OSSBucketName"].asString();
		if(!value["BackupPeriod"].isNull())
			itemsObject.backupPeriod = value["BackupPeriod"].asString();
		if(!value["BackupStartTime"].isNull())
			itemsObject.backupStartTime = value["BackupStartTime"].asString();
		if(!value["EnableBackupLog"].isNull())
			itemsObject.enableBackupLog = value["EnableBackupLog"].asString() == "true";
		if(!value["BackupRetentionPeriod"].isNull())
			itemsObject.backupRetentionPeriod = std::stoi(value["BackupRetentionPeriod"].asString());
		if(!value["DuplicationInfrequentAccessPeriod"].isNull())
			itemsObject.duplicationInfrequentAccessPeriod = std::stoi(value["DuplicationInfrequentAccessPeriod"].asString());
		if(!value["DuplicationArchivePeriod"].isNull())
			itemsObject.duplicationArchivePeriod = std::stoi(value["DuplicationArchivePeriod"].asString());
		if(!value["BackupPlanName"].isNull())
			itemsObject.backupPlanName = value["BackupPlanName"].asString();
		if(!value["SourceEndpointOracleSID"].isNull())
			itemsObject.sourceEndpointOracleSID = value["SourceEndpointOracleSID"].asString();
		if(!value["InstanceClass"].isNull())
			itemsObject.instanceClass = value["InstanceClass"].asString();
		if(!value["BackupMethod"].isNull())
			itemsObject.backupMethod = value["BackupMethod"].asString();
		if(!value["BackupPlanCreateTime"].isNull())
			itemsObject.backupPlanCreateTime = std::stol(value["BackupPlanCreateTime"].asString());
		if(!value["BackupPlanStatus"].isNull())
			itemsObject.backupPlanStatus = value["BackupPlanStatus"].asString();
		if(!value["BeginTimestampForRestore"].isNull())
			itemsObject.beginTimestampForRestore = std::stol(value["BeginTimestampForRestore"].asString());
		if(!value["EndTimestampForRestore"].isNull())
			itemsObject.endTimestampForRestore = std::stol(value["EndTimestampForRestore"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stoi(value["TotalPages"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());
	if(!value["TotalElements"].isNull())
		totalElements_ = std::stoi(value["TotalElements"].asString());

}

int DescribeBackupPlanListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeBackupPlanListResult::getPageNum()const
{
	return pageNum_;
}

int DescribeBackupPlanListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

int DescribeBackupPlanListResult::getTotalElements()const
{
	return totalElements_;
}

std::vector<DescribeBackupPlanListResult::BackupPlanDetail> DescribeBackupPlanListResult::getItems()const
{
	return items_;
}

int DescribeBackupPlanListResult::getTotalPages()const
{
	return totalPages_;
}

std::string DescribeBackupPlanListResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribeBackupPlanListResult::getSuccess()const
{
	return success_;
}

std::string DescribeBackupPlanListResult::getErrCode()const
{
	return errCode_;
}

