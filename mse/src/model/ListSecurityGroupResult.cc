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

#include <alibabacloud/mse/model/ListSecurityGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListSecurityGroupResult::ListSecurityGroupResult() :
	ServiceResult()
{}

ListSecurityGroupResult::ListSecurityGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSecurityGroupResult::~ListSecurityGroupResult()
{}

void ListSecurityGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Sgs"];
	for (auto valueDataSgs : allDataNode)
	{
		Sgs dataObject;
		if(!valueDataSgs["SecurityGroupId"].isNull())
			dataObject.securityGroupId = valueDataSgs["SecurityGroupId"].asString();
		if(!valueDataSgs["SecurityGroupName"].isNull())
			dataObject.securityGroupName = valueDataSgs["SecurityGroupName"].asString();
		if(!valueDataSgs["VpcId"].isNull())
			dataObject.vpcId = valueDataSgs["VpcId"].asString();
		if(!valueDataSgs["SecurityGroupType"].isNull())
			dataObject.securityGroupType = valueDataSgs["SecurityGroupType"].asString();
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListSecurityGroupResult::getMessage()const
{
	return message_;
}

int ListSecurityGroupResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListSecurityGroupResult::Sgs> ListSecurityGroupResult::getData()const
{
	return data_;
}

int ListSecurityGroupResult::getCode()const
{
	return code_;
}

bool ListSecurityGroupResult::getSuccess()const
{
	return success_;
}

