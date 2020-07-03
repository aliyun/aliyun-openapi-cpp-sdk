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

#include <alibabacloud/airec/model/ListDashboardUidResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListDashboardUidResult::ListDashboardUidResult() :
	ServiceResult()
{}

ListDashboardUidResult::ListDashboardUidResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDashboardUidResult::~ListDashboardUidResult()
{}

void ListDashboardUidResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Num"].isNull())
		result_.num = std::stoi(resultNode["Num"].asString());
		auto allUid = resultNode["Uid"]["Uid"];
		for (auto value : allUid)
			result_.uid.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListDashboardUidResult::getMessage()const
{
	return message_;
}

std::string ListDashboardUidResult::getCode()const
{
	return code_;
}

ListDashboardUidResult::Result ListDashboardUidResult::getResult()const
{
	return result_;
}

