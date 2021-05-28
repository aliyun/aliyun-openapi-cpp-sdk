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

#include <alibabacloud/sgw/model/DescribeGatewayNFSClientsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeGatewayNFSClientsResult::DescribeGatewayNFSClientsResult() :
	ServiceResult()
{}

DescribeGatewayNFSClientsResult::DescribeGatewayNFSClientsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGatewayNFSClientsResult::~DescribeGatewayNFSClientsResult()
{}

void DescribeGatewayNFSClientsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClientInfoListNode = value["ClientInfoList"]["ClientInfo"];
	for (auto valueClientInfoListClientInfo : allClientInfoListNode)
	{
		ClientInfo clientInfoListObject;
		if(!valueClientInfoListClientInfo["ClientIpAddr"].isNull())
			clientInfoListObject.clientIpAddr = valueClientInfoListClientInfo["ClientIpAddr"].asString();
		if(!valueClientInfoListClientInfo["HasNFSv3"].isNull())
			clientInfoListObject.hasNFSv3 = valueClientInfoListClientInfo["HasNFSv3"].asString() == "true";
		if(!valueClientInfoListClientInfo["HasNFSv40"].isNull())
			clientInfoListObject.hasNFSv40 = valueClientInfoListClientInfo["HasNFSv40"].asString() == "true";
		if(!valueClientInfoListClientInfo["HasNFSv41"].isNull())
			clientInfoListObject.hasNFSv41 = valueClientInfoListClientInfo["HasNFSv41"].asString() == "true";
		clientInfoList_.push_back(clientInfoListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Version3Enabled"].isNull())
		version3Enabled_ = value["Version3Enabled"].asString() == "true";
	if(!value["Version40Enabled"].isNull())
		version40Enabled_ = value["Version40Enabled"].asString() == "true";
	if(!value["Version41Enabled"].isNull())
		version41Enabled_ = value["Version41Enabled"].asString() == "true";

}

bool DescribeGatewayNFSClientsResult::getVersion40Enabled()const
{
	return version40Enabled_;
}

int DescribeGatewayNFSClientsResult::getTotalCount()const
{
	return totalCount_;
}

bool DescribeGatewayNFSClientsResult::getVersion41Enabled()const
{
	return version41Enabled_;
}

std::string DescribeGatewayNFSClientsResult::getMessage()const
{
	return message_;
}

int DescribeGatewayNFSClientsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeGatewayNFSClientsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeGatewayNFSClientsResult::ClientInfo> DescribeGatewayNFSClientsResult::getClientInfoList()const
{
	return clientInfoList_;
}

bool DescribeGatewayNFSClientsResult::getVersion3Enabled()const
{
	return version3Enabled_;
}

std::string DescribeGatewayNFSClientsResult::getCode()const
{
	return code_;
}

bool DescribeGatewayNFSClientsResult::getSuccess()const
{
	return success_;
}

