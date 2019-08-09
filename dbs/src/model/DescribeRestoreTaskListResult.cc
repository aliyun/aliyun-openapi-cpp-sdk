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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allItems = value["Items"]["RestoreTaskDetail"];
	for (auto value : allItems)
	{
		RestoreTaskDetail itemsObject;
		if(!value["BackupPlanId"].isNull())
			itemsObject.backupPlanId = value["BackupPlanId"].asString();
		if(!value["DestinationEndpointInstanceType"].isNull())
			itemsObject.destinationEndpointInstanceType = value["DestinationEndpointInstanceType"].asString();
		if(!value["DestinationEndpointRegion"].isNull())
			itemsObject.destinationEndpointRegion = value["DestinationEndpointRegion"].asString();
		if(!value["DestinationEndpointInstanceID"].isNull())
			itemsObject.destinationEndpointInstanceID = value["DestinationEndpointInstanceID"].asString();
		if(!value["DestinationEndpointIpPort"].isNull())
			itemsObject.destinationEndpointIpPort = value["DestinationEndpointIpPort"].asString();
		if(!value["DestinationEndpointDatabaseName"].isNull())
			itemsObject.destinationEndpointDatabaseName = value["DestinationEndpointDatabaseName"].asString();
		if(!value["DestinationEndpointUserName"].isNull())
			itemsObject.destinationEndpointUserName = value["DestinationEndpointUserName"].asString();
		if(!value["DestinationEndpointOracleSID"].isNull())
			itemsObject.destinationEndpointOracleSID = value["DestinationEndpointOracleSID"].asString();
		if(!value["RestoreObjects"].isNull())
			itemsObject.restoreObjects = value["RestoreObjects"].asString();
		if(!value["BackupGatewayId"].isNull())
			itemsObject.backupGatewayId = std::stol(value["BackupGatewayId"].asString());
		if(!value["RestoreDir"].isNull())
			itemsObject.restoreDir = value["RestoreDir"].asString();
		if(!value["RestoreTaskName"].isNull())
			itemsObject.restoreTaskName = value["RestoreTaskName"].asString();
		if(!value["BackupSetId"].isNull())
			itemsObject.backupSetId = value["BackupSetId"].asString();
		if(!value["RestoreTime"].isNull())
			itemsObject.restoreTime = std::stol(value["RestoreTime"].asString());
		if(!value["RestoreTaskCreateTime"].isNull())
			itemsObject.restoreTaskCreateTime = std::stol(value["RestoreTaskCreateTime"].asString());
		if(!value["RestoreTaskFinishTime"].isNull())
			itemsObject.restoreTaskFinishTime = std::stol(value["RestoreTaskFinishTime"].asString());
		if(!value["RestoreStatus"].isNull())
			itemsObject.restoreStatus = value["RestoreStatus"].asString();
		if(!value["RestoreTaskId"].isNull())
			itemsObject.restoreTaskId = value["RestoreTaskId"].asString();
		if(!value["FullStruforeRestoreProgress"].isNull())
			itemsObject.fullStruforeRestoreProgress = std::stoi(value["FullStruforeRestoreProgress"].asString());
		if(!value["FullDataRestoreProgress"].isNull())
			itemsObject.fullDataRestoreProgress = std::stoi(value["FullDataRestoreProgress"].asString());
		if(!value["ContinuousRestoreProgress"].isNull())
			itemsObject.continuousRestoreProgress = std::stoi(value["ContinuousRestoreProgress"].asString());
		if(!value["FullStruAfterRestoreProgress"].isNull())
			itemsObject.fullStruAfterRestoreProgress = std::stoi(value["FullStruAfterRestoreProgress"].asString());
		if(!value["ErrMessage"].isNull())
			itemsObject.errMessage = value["ErrMessage"].asString();
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

int DescribeRestoreTaskListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeRestoreTaskListResult::getPageNum()const
{
	return pageNum_;
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

