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

#include <alibabacloud/sgw/model/DescribeExpressSyncSharesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeExpressSyncSharesResult::DescribeExpressSyncSharesResult() :
	ServiceResult()
{}

DescribeExpressSyncSharesResult::DescribeExpressSyncSharesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeExpressSyncSharesResult::~DescribeExpressSyncSharesResult()
{}

void DescribeExpressSyncSharesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSharesNode = value["Shares"]["Share"];
	for (auto valueSharesShare : allSharesNode)
	{
		Share sharesObject;
		if(!valueSharesShare["GatewayId"].isNull())
			sharesObject.gatewayId = valueSharesShare["GatewayId"].asString();
		if(!valueSharesShare["StorageBundleId"].isNull())
			sharesObject.storageBundleId = valueSharesShare["StorageBundleId"].asString();
		if(!valueSharesShare["GatewayName"].isNull())
			sharesObject.gatewayName = valueSharesShare["GatewayName"].asString();
		if(!valueSharesShare["GatewayRegion"].isNull())
			sharesObject.gatewayRegion = valueSharesShare["GatewayRegion"].asString();
		if(!valueSharesShare["ShareName"].isNull())
			sharesObject.shareName = valueSharesShare["ShareName"].asString();
		if(!valueSharesShare["ExpressSyncState"].isNull())
			sharesObject.expressSyncState = valueSharesShare["ExpressSyncState"].asString();
		if(!valueSharesShare["ExpressSyncId"].isNull())
			sharesObject.expressSyncId = valueSharesShare["ExpressSyncId"].asString();
		if(!valueSharesShare["MnsQueue"].isNull())
			sharesObject.mnsQueue = valueSharesShare["MnsQueue"].asString();
		if(!valueSharesShare["SyncProgress"].isNull())
			sharesObject.syncProgress = std::stoi(valueSharesShare["SyncProgress"].asString());
		shares_.push_back(sharesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeExpressSyncSharesResult::getMessage()const
{
	return message_;
}

std::vector<DescribeExpressSyncSharesResult::Share> DescribeExpressSyncSharesResult::getShares()const
{
	return shares_;
}

std::string DescribeExpressSyncSharesResult::getCode()const
{
	return code_;
}

bool DescribeExpressSyncSharesResult::getSuccess()const
{
	return success_;
}

