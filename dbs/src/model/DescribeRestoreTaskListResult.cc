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

#include <alibabacloud/dbs/model/DescribeRestoreTaskListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

DescribeRestoreTaskListResult::DescribeRestoreTaskListResult() :
	ServiceResult()
{}

DescribeRestoreTaskListResult::DescribeRestoreTaskListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRestoreTaskListResult::~DescribeRestoreTaskListResult()
{}

void DescribeRestoreTaskListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["RestoreTaskDetail"];
	for (auto valueItemsRestoreTaskDetail : allItemsNode)
	{
		RestoreTaskDetail itemsObject;
		if(!valueItemsRestoreTaskDetail["RestoreStatus"].isNull())
			itemsObject.restoreStatus = valueItemsRestoreTaskDetail["RestoreStatus"].asString();
		if(!valueItemsRestoreTaskDetail["FullStruAfterRestoreProgress"].isNull())
			itemsObject.fullStruAfterRestoreProgress = std::stoi(valueItemsRestoreTaskDetail["FullStruAfterRestoreProgress"].asString());
		if(!valueItemsRestoreTaskDetail["CrossRoleName"].isNull())
			itemsObject.crossRoleName = valueItemsRestoreTaskDetail["CrossRoleName"].asString();
		if(!valueItemsRestoreTaskDetail["RestoreDir"].isNull())
			itemsObject.restoreDir = valueItemsRestoreTaskDetail["RestoreDir"].asString();
		if(!valueItemsRestoreTaskDetail["CrossAliyunId"].isNull())
			itemsObject.crossAliyunId = valueItemsRestoreTaskDetail["CrossAliyunId"].asString();
		if(!valueItemsRestoreTaskDetail["RestoreObjects"].isNull())
			itemsObject.restoreObjects = valueItemsRestoreTaskDetail["RestoreObjects"].asString();
		if(!valueItemsRestoreTaskDetail["BackupPlanId"].isNull())
			itemsObject.backupPlanId = valueItemsRestoreTaskDetail["BackupPlanId"].asString();
		if(!valueItemsRestoreTaskDetail["DestinationEndpointRegion"].isNull())
			itemsObject.destinationEndpointRegion = valueItemsRestoreTaskDetail["DestinationEndpointRegion"].asString();
		if(!valueItemsRestoreTaskDetail["RestoreTaskCreateTime"].isNull())
			itemsObject.restoreTaskCreateTime = std::stol(valueItemsRestoreTaskDetail["RestoreTaskCreateTime"].asString());
		if(!valueItemsRestoreTaskDetail["DestinationEndpointUserName"].isNull())
			itemsObject.destinationEndpointUserName = valueItemsRestoreTaskDetail["DestinationEndpointUserName"].asString();
		if(!valueItemsRestoreTaskDetail["RestoreTaskFinishTime"].isNull())
			itemsObject.restoreTaskFinishTime = std::stol(valueItemsRestoreTaskDetail["RestoreTaskFinishTime"].asString());
		if(!valueItemsRestoreTaskDetail["DestinationEndpointIpPort"].isNull())
			itemsObject.destinationEndpointIpPort = valueItemsRestoreTaskDetail["DestinationEndpointIpPort"].asString();
		if(!valueItemsRestoreTaskDetail["DestinationEndpointDatabaseName"].isNull())
			itemsObject.destinationEndpointDatabaseName = valueItemsRestoreTaskDetail["DestinationEndpointDatabaseName"].asString();
		if(!valueItemsRestoreTaskDetail["DestinationEndpointInstanceType"].isNull())
			itemsObject.destinationEndpointInstanceType = valueItemsRestoreTaskDetail["DestinationEndpointInstanceType"].asString();
		if(!valueItemsRestoreTaskDetail["DestinationEndpointOracleSID"].isNull())
			itemsObject.destinationEndpointOracleSID = valueItemsRestoreTaskDetail["DestinationEndpointOracleSID"].asString();
		if(!valueItemsRestoreTaskDetail["FullStruforeRestoreProgress"].isNull())
			itemsObject.fullStruforeRestoreProgress = std::stoi(valueItemsRestoreTaskDetail["FullStruforeRestoreProgress"].asString());
		if(!valueItemsRestoreTaskDetail["ErrMessage"].isNull())
			itemsObject.errMessage = valueItemsRestoreTaskDetail["ErrMessage"].asString();
		if(!valueItemsRestoreTaskDetail["RestoreTaskId"].isNull())
			itemsObject.restoreTaskId = valueItemsRestoreTaskDetail["RestoreTaskId"].asString();
		if(!valueItemsRestoreTaskDetail["FullDataRestoreProgress"].isNull())
			itemsObject.fullDataRestoreProgress = std::stoi(valueItemsRestoreTaskDetail["FullDataRestoreProgress"].asString());
		if(!valueItemsRestoreTaskDetail["ContinuousRestoreProgress"].isNull())
			itemsObject.continuousRestoreProgress = std::stoi(valueItemsRestoreTaskDetail["ContinuousRestoreProgress"].asString());
		if(!valueItemsRestoreTaskDetail["DestinationEndpointInstanceID"].isNull())
			itemsObject.destinationEndpointInstanceID = valueItemsRestoreTaskDetail["DestinationEndpointInstanceID"].asString();
		if(!valueItemsRestoreTaskDetail["BackupSetId"].isNull())
			itemsObject.backupSetId = valueItemsRestoreTaskDetail["BackupSetId"].asString();
		if(!valueItemsRestoreTaskDetail["BackupGatewayId"].isNull())
			itemsObject.backupGatewayId = std::stol(valueItemsRestoreTaskDetail["BackupGatewayId"].asString());
		if(!valueItemsRestoreTaskDetail["RestoreTaskName"].isNull())
			itemsObject.restoreTaskName = valueItemsRestoreTaskDetail["RestoreTaskName"].asString();
		if(!valueItemsRestoreTaskDetail["RestoreTime"].isNull())
			itemsObject.restoreTime = std::stol(valueItemsRestoreTaskDetail["RestoreTime"].asString());
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

int DescribeRestoreTaskListResult::getPageNum()const
{
	return pageNum_;
}

int DescribeRestoreTaskListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeRestoreTaskListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

int DescribeRestoreTaskListResult::getTotalElements()const
{
	return totalElements_;
}

std::vector<DescribeRestoreTaskListResult::RestoreTaskDetail> DescribeRestoreTaskListResult::getItems()const
{
	return items_;
}

int DescribeRestoreTaskListResult::getTotalPages()const
{
	return totalPages_;
}

std::string DescribeRestoreTaskListResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribeRestoreTaskListResult::getSuccess()const
{
	return success_;
}

std::string DescribeRestoreTaskListResult::getErrCode()const
{
	return errCode_;
}

