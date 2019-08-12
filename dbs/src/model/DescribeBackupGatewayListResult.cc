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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["BackupGateway"];
	for (auto value : allItems)
	{
		BackupGateway itemsObject;
		if(!value["BackupGatewayId"].isNull())
			itemsObject.backupGatewayId = value["BackupGatewayId"].asString();
		if(!value["SourceEndpointInternetIP"].isNull())
			itemsObject.sourceEndpointInternetIP = value["SourceEndpointInternetIP"].asString();
		if(!value["SourceEndpointIntranetIP"].isNull())
			itemsObject.sourceEndpointIntranetIP = value["SourceEndpointIntranetIP"].asString();
		if(!value["SourceEndpointHostname"].isNull())
			itemsObject.sourceEndpointHostname = value["SourceEndpointHostname"].asString();
		if(!value["BackupGatewayStatus"].isNull())
			itemsObject.backupGatewayStatus = value["BackupGatewayStatus"].asString();
		if(!value["LastHeartbeatTime"].isNull())
			itemsObject.lastHeartbeatTime = std::stol(value["LastHeartbeatTime"].asString());
		if(!value["BackupGatewayCreateTime"].isNull())
			itemsObject.backupGatewayCreateTime = std::stol(value["BackupGatewayCreateTime"].asString());
		if(!value["Region"].isNull())
			itemsObject.region = value["Region"].asString();
		if(!value["DisplayName"].isNull())
			itemsObject.displayName = value["DisplayName"].asString();
		if(!value["Identifier"].isNull())
			itemsObject.identifier = value["Identifier"].asString();
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

int DescribeBackupGatewayListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeBackupGatewayListResult::getPageNum()const
{
	return pageNum_;
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

