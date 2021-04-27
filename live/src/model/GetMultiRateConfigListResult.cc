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

#include <alibabacloud/live/model/GetMultiRateConfigListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

GetMultiRateConfigListResult::GetMultiRateConfigListResult() :
	ServiceResult()
{}

GetMultiRateConfigListResult::GetMultiRateConfigListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMultiRateConfigListResult::~GetMultiRateConfigListResult()
{}

void GetMultiRateConfigListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGroupInfoNode = value["GroupInfo"]["Info"];
	for (auto valueGroupInfoInfo : allGroupInfoNode)
	{
		Info groupInfoObject;
		if(!valueGroupInfoInfo["App"].isNull())
			groupInfoObject.app = valueGroupInfoInfo["App"].asString();
		if(!valueGroupInfoInfo["AvFormat"].isNull())
			groupInfoObject.avFormat = valueGroupInfoInfo["AvFormat"].asString();
		if(!valueGroupInfoInfo["GroupId"].isNull())
			groupInfoObject.groupId = valueGroupInfoInfo["GroupId"].asString();
		if(!valueGroupInfoInfo["Count"].isNull())
			groupInfoObject.count = std::stoi(valueGroupInfoInfo["Count"].asString());
		groupInfo_.push_back(groupInfoObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());

}

std::string GetMultiRateConfigListResult::getMessage()const
{
	return message_;
}

std::vector<GetMultiRateConfigListResult::Info> GetMultiRateConfigListResult::getGroupInfo()const
{
	return groupInfo_;
}

int GetMultiRateConfigListResult::getCode()const
{
	return code_;
}

