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

#include <alibabacloud/teslamaxcompute/model/ListUserQuotasResult.h>
#include <json/json.h>

using namespace AlibabaCloud::TeslaMaxCompute;
using namespace AlibabaCloud::TeslaMaxCompute::Model;

ListUserQuotasResult::ListUserQuotasResult() :
	ServiceResult()
{}

ListUserQuotasResult::ListUserQuotasResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserQuotasResult::~ListUserQuotasResult()
{}

void ListUserQuotasResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allDetail = value["Detail"]["Quotas"];
	for (auto value : allDetail)
	{
		Data::Quotas quotasObject;
		if(!value["Quotaid"].isNull())
			quotasObject.quotaid = std::stol(value["Quotaid"].asString());
		if(!value["Cluster"].isNull())
			quotasObject.cluster = value["Cluster"].asString();
		if(!value["Region"].isNull())
			quotasObject.region = value["Region"].asString();
		if(!value["Name"].isNull())
			quotasObject.name = value["Name"].asString();
		if(!value["Parentid"].isNull())
			quotasObject.parentid = std::stol(value["Parentid"].asString());
		if(!value["Nick"].isNull())
			quotasObject.nick = value["Nick"].asString();
		data_.detail.push_back(quotasObject);
	}
	auto errorNode = dataNode["Error"];
	if(!errorNode["Code"].isNull())
		data_.error.code = errorNode["Code"].asString();
	if(!errorNode["Message"].isNull())
		data_.error.message = errorNode["Message"].asString();
	if(!errorNode["Timestamp"].isNull())
		data_.error.timestamp = errorNode["Timestamp"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());

}

std::string ListUserQuotasResult::getMessage()const
{
	return message_;
}

ListUserQuotasResult::Data ListUserQuotasResult::getData()const
{
	return data_;
}

int ListUserQuotasResult::getCode()const
{
	return code_;
}

