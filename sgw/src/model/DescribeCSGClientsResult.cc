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

#include <alibabacloud/sgw/model/DescribeCSGClientsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeCSGClientsResult::DescribeCSGClientsResult() :
	ServiceResult()
{}

DescribeCSGClientsResult::DescribeCSGClientsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCSGClientsResult::~DescribeCSGClientsResult()
{}

void DescribeCSGClientsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClientsNode = value["Clients"]["Client"];
	for (auto valueClientsClient : allClientsNode)
	{
		Client clientsObject;
		if(!valueClientsClient["VpcId"].isNull())
			clientsObject.vpcId = valueClientsClient["VpcId"].asString();
		if(!valueClientsClient["Status"].isNull())
			clientsObject.status = valueClientsClient["Status"].asString();
		if(!valueClientsClient["EcsInstanceId"].isNull())
			clientsObject.ecsInstanceId = valueClientsClient["EcsInstanceId"].asString();
		if(!valueClientsClient["LastHeartbeatTime"].isNull())
			clientsObject.lastHeartbeatTime = std::stol(valueClientsClient["LastHeartbeatTime"].asString());
		if(!valueClientsClient["ClientId"].isNull())
			clientsObject.clientId = valueClientsClient["ClientId"].asString();
		if(!valueClientsClient["ClientVersion"].isNull())
			clientsObject.clientVersion = valueClientsClient["ClientVersion"].asString();
		if(!valueClientsClient["ClientInstallationCommand"].isNull())
			clientsObject.clientInstallationCommand = valueClientsClient["ClientInstallationCommand"].asString();
		if(!valueClientsClient["ClientDeletionCommand"].isNull())
			clientsObject.clientDeletionCommand = valueClientsClient["ClientDeletionCommand"].asString();
		if(!valueClientsClient["WorkDirectory"].isNull())
			clientsObject.workDirectory = valueClientsClient["WorkDirectory"].asString();
		clients_.push_back(clientsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeCSGClientsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeCSGClientsResult::getMessage()const
{
	return message_;
}

int DescribeCSGClientsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCSGClientsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeCSGClientsResult::Client> DescribeCSGClientsResult::getClients()const
{
	return clients_;
}

std::string DescribeCSGClientsResult::getCode()const
{
	return code_;
}

bool DescribeCSGClientsResult::getSuccess()const
{
	return success_;
}

