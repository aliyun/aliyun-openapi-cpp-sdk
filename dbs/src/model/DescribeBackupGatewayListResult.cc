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

#include <alibabacloud/dbs/model/DescribeBackupGatewayListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

DescribeBackupGatewayListResult::DescribeBackupGatewayListResult() :
	ServiceResult()
{}

DescribeBackupGatewayListResult::DescribeBackupGatewayListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupGatewayListResult::~DescribeBackupGatewayListResult()
{}

void DescribeBackupGatewayListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["BackupGateway"];
	for (auto valueItemsBackupGateway : allItemsNode)
	{
		BackupGateway itemsObject;
		if(!valueItemsBackupGateway["DisplayName"].isNull())
			itemsObject.displayName = valueItemsBackupGateway["DisplayName"].asString();
		if(!valueItemsBackupGateway["BackupGatewayCreateTime"].isNull())
			itemsObject.backupGatewayCreateTime = std::stol(valueItemsBackupGateway["BackupGatewayCreateTime"].asString());
		if(!valueItemsBackupGateway["BackupGatewayId"].isNull())
			itemsObject.backupGatewayId = valueItemsBackupGateway["BackupGatewayId"].asString();
		if(!valueItemsBackupGateway["Region"].isNull())
			itemsObject.region = valueItemsBackupGateway["Region"].asString();
		if(!valueItemsBackupGateway["Identifier"].isNull())
			itemsObject.identifier = valueItemsBackupGateway["Identifier"].asString();
		if(!valueItemsBackupGateway["SourceEndpointInternetIP"].isNull())
			itemsObject.sourceEndpointInternetIP = valueItemsBackupGateway["SourceEndpointInternetIP"].asString();
		if(!valueItemsBackupGateway["BackupGatewayStatus"].isNull())
			itemsObject.backupGatewayStatus = valueItemsBackupGateway["BackupGatewayStatus"].asString();
		if(!valueItemsBackupGateway["SourceEndpointIntranetIP"].isNull())
			itemsObject.sourceEndpointIntranetIP = valueItemsBackupGateway["SourceEndpointIntranetIP"].asString();
		if(!valueItemsBackupGateway["LastHeartbeatTime"].isNull())
			itemsObject.lastHeartbeatTime = std::stol(valueItemsBackupGateway["LastHeartbeatTime"].asString());
		if(!valueItemsBackupGateway["SourceEndpointHostname"].isNull())
			itemsObject.sourceEndpointHostname = valueItemsBackupGateway["SourceEndpointHostname"].asString();
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

int DescribeBackupGatewayListResult::getPageNum()const
{
	return pageNum_;
}

int DescribeBackupGatewayListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeBackupGatewayListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

int DescribeBackupGatewayListResult::getTotalElements()const
{
	return totalElements_;
}

std::vector<DescribeBackupGatewayListResult::BackupGateway> DescribeBackupGatewayListResult::getItems()const
{
	return items_;
}

int DescribeBackupGatewayListResult::getTotalPages()const
{
	return totalPages_;
}

std::string DescribeBackupGatewayListResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribeBackupGatewayListResult::getSuccess()const
{
	return success_;
}

std::string DescribeBackupGatewayListResult::getErrCode()const
{
	return errCode_;
}

