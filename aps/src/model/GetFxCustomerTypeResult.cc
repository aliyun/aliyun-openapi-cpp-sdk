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

#include <alibabacloud/aps/model/GetFxCustomerTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aps;
using namespace AlibabaCloud::Aps::Model;

GetFxCustomerTypeResult::GetFxCustomerTypeResult() :
	ServiceResult()
{}

GetFxCustomerTypeResult::GetFxCustomerTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFxCustomerTypeResult::~GetFxCustomerTypeResult()
{}

void GetFxCustomerTypeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ParentId"].isNull())
		data_.parentId = std::stol(dataNode["ParentId"].asString());
	if(!dataNode["IsSub"].isNull())
		data_.isSub = std::stoi(dataNode["IsSub"].asString());
	if(!dataNode["CustomerType"].isNull())
		data_.customerType = std::stoi(dataNode["CustomerType"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetFxCustomerTypeResult::getMessage()const
{
	return message_;
}

GetFxCustomerTypeResult::Data GetFxCustomerTypeResult::getData()const
{
	return data_;
}

std::string GetFxCustomerTypeResult::getCode()const
{
	return code_;
}

bool GetFxCustomerTypeResult::getSuccess()const
{
	return success_;
}

