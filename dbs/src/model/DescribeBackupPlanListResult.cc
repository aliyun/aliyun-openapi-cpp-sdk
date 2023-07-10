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
	auto allItemsNode = value["Items"]["BackupPlanDetail"];
	for (auto valueItemsBackupPlanDetail : allItemsNode)
	{
		BackupPlanDetail itemsObject;
		if(!valueItemsBackupPlanDetail["CrossRoleName"].isNull())
			itemsObject.crossRoleName = valueItemsBackupPlanDetail["CrossRoleName"].asString();
		if(!valueItemsBackupPlanDetail["SourceEndpointInstanceType"].isNull())
			itemsObject.sourceEndpointInstanceType = valueItemsBackupPlanDetail["SourceEndpointInstanceType"].asString();
		if(!valueItemsBackupPlanDetail["BackupSetDownloadDir"].isNull())
			itemsObject.backupSetDownloadDir = valueItemsBackupPlanDetail["BackupSetDownloadDir"].asString();
		if(!valueItemsBackupPlanDetail["SourceEndpointIpPort"].isNull())
			itemsObject.sourceEndpointIpPort = valueItemsBackupPlanDetail["SourceEndpointIpPort"].asString();
		if(!valueItemsBackupPlanDetail["CrossAliyunId"].isNull())
			itemsObject.crossAliyunId = valueItemsBackupPlanDetail["CrossAliyunId"].asString();
		if(!valueItemsBackupPlanDetail["DuplicationArchivePeriod"].isNull())
			itemsObject.duplicationArchivePeriod = std::stoi(valueItemsBackupPlanDetail["DuplicationArchivePeriod"].asString());
		if(!valueItemsBackupPlanDetail["BackupPlanId"].isNull())
			itemsObject.backupPlanId = valueItemsBackupPlanDetail["BackupPlanId"].asString();
		if(!valueItemsBackupPlanDetail["EndTimestampForRestore"].isNull())
			itemsObject.endTimestampForRestore = std::stol(valueItemsBackupPlanDetail["EndTimestampForRestore"].asString());
		if(!valueItemsBackupPlanDetail["BackupPlanStatus"].isNull())
			itemsObject.backupPlanStatus = valueItemsBackupPlanDetail["BackupPlanStatus"].asString();
		if(!valueItemsBackupPlanDetail["BackupSetDownloadFullDataFormat"].isNull())
			itemsObject.backupSetDownloadFullDataFormat = valueItemsBackupPlanDetail["BackupSetDownloadFullDataFormat"].asString();
		if(!valueItemsBackupPlanDetail["BackupRetentionPeriod"].isNull())
			itemsObject.backupRetentionPeriod = std::stoi(valueItemsBackupPlanDetail["BackupRetentionPeriod"].asString());
		if(!valueItemsBackupPlanDetail["OSSBucketRegion"].isNull())
			itemsObject.oSSBucketRegion = valueItemsBackupPlanDetail["OSSBucketRegion"].asString();
		if(!valueItemsBackupPlanDetail["SourceEndpointOracleSID"].isNull())
			itemsObject.sourceEndpointOracleSID = valueItemsBackupPlanDetail["SourceEndpointOracleSID"].asString();
		if(!valueItemsBackupPlanDetail["BackupStorageType"].isNull())
			itemsObject.backupStorageType = valueItemsBackupPlanDetail["BackupStorageType"].asString();
		if(!valueItemsBackupPlanDetail["BackupMethod"].isNull())
			itemsObject.backupMethod = valueItemsBackupPlanDetail["BackupMethod"].asString();
		if(!valueItemsBackupPlanDetail["SourceEndpointRegion"].isNull())
			itemsObject.sourceEndpointRegion = valueItemsBackupPlanDetail["SourceEndpointRegion"].asString();
		if(!valueItemsBackupPlanDetail["BackupPeriod"].isNull())
			itemsObject.backupPeriod = valueItemsBackupPlanDetail["BackupPeriod"].asString();
		if(!valueItemsBackupPlanDetail["SourceEndpointDatabaseName"].isNull())
			itemsObject.sourceEndpointDatabaseName = valueItemsBackupPlanDetail["SourceEndpointDatabaseName"].asString();
		if(!valueItemsBackupPlanDetail["BackupSetDownloadGatewayId"].isNull())
			itemsObject.backupSetDownloadGatewayId = std::stol(valueItemsBackupPlanDetail["BackupSetDownloadGatewayId"].asString());
		if(!valueItemsBackupPlanDetail["BackupPlanCreateTime"].isNull())
			itemsObject.backupPlanCreateTime = std::stol(valueItemsBackupPlanDetail["BackupPlanCreateTime"].asString());
		if(!valueItemsBackupPlanDetail["InstanceClass"].isNull())
			itemsObject.instanceClass = valueItemsBackupPlanDetail["InstanceClass"].asString();
		if(!valueItemsBackupPlanDetail["BackupSetDownloadTargetType"].isNull())
			itemsObject.backupSetDownloadTargetType = valueItemsBackupPlanDetail["BackupSetDownloadTargetType"].asString();
		if(!valueItemsBackupPlanDetail["DuplicationInfrequentAccessPeriod"].isNull())
			itemsObject.duplicationInfrequentAccessPeriod = std::stoi(valueItemsBackupPlanDetail["DuplicationInfrequentAccessPeriod"].asString());
		if(!valueItemsBackupPlanDetail["BackupStartTime"].isNull())
			itemsObject.backupStartTime = valueItemsBackupPlanDetail["BackupStartTime"].asString();
		if(!valueItemsBackupPlanDetail["ErrMessage"].isNull())
			itemsObject.errMessage = valueItemsBackupPlanDetail["ErrMessage"].asString();
		if(!valueItemsBackupPlanDetail["BackupObjects"].isNull())
			itemsObject.backupObjects = valueItemsBackupPlanDetail["BackupObjects"].asString();
		if(!valueItemsBackupPlanDetail["BeginTimestampForRestore"].isNull())
			itemsObject.beginTimestampForRestore = std::stol(valueItemsBackupPlanDetail["BeginTimestampForRestore"].asString());
		if(!valueItemsBackupPlanDetail["SourceEndpointInstanceID"].isNull())
			itemsObject.sourceEndpointInstanceID = valueItemsBackupPlanDetail["SourceEndpointInstanceID"].asString();
		if(!valueItemsBackupPlanDetail["OpenBackupSetAutoDownload"].isNull())
			itemsObject.openBackupSetAutoDownload = valueItemsBackupPlanDetail["OpenBackupSetAutoDownload"].asString() == "true";
		if(!valueItemsBackupPlanDetail["BackupPlanName"].isNull())
			itemsObject.backupPlanName = valueItemsBackupPlanDetail["BackupPlanName"].asString();
		if(!valueItemsBackupPlanDetail["OSSBucketName"].isNull())
			itemsObject.oSSBucketName = valueItemsBackupPlanDetail["OSSBucketName"].asString();
		if(!valueItemsBackupPlanDetail["BackupGatewayId"].isNull())
			itemsObject.backupGatewayId = std::stol(valueItemsBackupPlanDetail["BackupGatewayId"].asString());
		if(!valueItemsBackupPlanDetail["SourceEndpointUserName"].isNull())
			itemsObject.sourceEndpointUserName = valueItemsBackupPlanDetail["SourceEndpointUserName"].asString();
		if(!valueItemsBackupPlanDetail["BackupSetDownloadIncrementDataFormat"].isNull())
			itemsObject.backupSetDownloadIncrementDataFormat = valueItemsBackupPlanDetail["BackupSetDownloadIncrementDataFormat"].asString();
		if(!valueItemsBackupPlanDetail["EnableBackupLog"].isNull())
			itemsObject.enableBackupLog = valueItemsBackupPlanDetail["EnableBackupLog"].asString() == "true";
		if(!valueItemsBackupPlanDetail["ResourceGroupId"].isNull())
			itemsObject.resourceGroupId = valueItemsBackupPlanDetail["ResourceGroupId"].asString();
		if(!valueItemsBackupPlanDetail["DatabaseType"].isNull())
			itemsObject.databaseType = valueItemsBackupPlanDetail["DatabaseType"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stoi(value["TotalPages"].asString());
	if(!value["TotalElements"].isNull())
		totalElements_ = std::stoi(value["TotalElements"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeBackupPlanListResult::getPageNum()const
{
	return pageNum_;
}

int DescribeBackupPlanListResult::getPageSize()const
{
	return pageSize_;
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

