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

#include <alibabacloud/bssopenapi/model/QueryEnduserStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryEnduserStatusResult::QueryEnduserStatusResult() :
	ServiceResult()
{}

QueryEnduserStatusResult::QueryEnduserStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryEnduserStatusResult::~QueryEnduserStatusResult()
{}

void QueryEnduserStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDatas = value["Datas"]["Data"];
	for (auto value : allDatas)
	{
		Data datasObject;
		if(!value["Uid"].isNull())
			datasObject.uid = std::stol(value["Uid"].asString());
		if(!value["PrimaryAccount"].isNull())
			datasObject.primaryAccount = value["PrimaryAccount"].asString();
		if(!value["BusinessType"].isNull())
			datasObject.businessType = value["BusinessType"].asString();
		if(!value["Status"].isNull())
			datasObject.status = value["Status"].asString();
		datas_.push_back(datasObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

std::string QueryEnduserStatusResult::getMessage()const
{
	return message_;
}

std::vector<QueryEnduserStatusResult::Data> QueryEnduserStatusResult::getDatas()const
{
	return datas_;
}

int QueryEnduserStatusResult::getCount()const
{
	return count_;
}

std::string QueryEnduserStatusResult::getCode()const
{
	return code_;
}

bool QueryEnduserStatusResult::getSuccess()const
{
	return success_;
}

