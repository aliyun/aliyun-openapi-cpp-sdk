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

#include <alibabacloud/ltl/model/ListMPCoSPhaseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ltl;
using namespace AlibabaCloud::Ltl::Model;

ListMPCoSPhaseResult::ListMPCoSPhaseResult() :
	ServiceResult()
{}

ListMPCoSPhaseResult::ListMPCoSPhaseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMPCoSPhaseResult::~ListMPCoSPhaseResult()
{}

void ListMPCoSPhaseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Num"].isNull())
		data_.num = std::stoi(dataNode["Num"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["Size"].isNull())
		data_.size = std::stoi(dataNode["Size"].asString());
	auto allPageDataNode = dataNode["PageData"]["PhaseInfo"];
	for (auto dataNodePageDataPhaseInfo : allPageDataNode)
	{
		Data::PhaseInfo phaseInfoObject;
		if(!dataNodePageDataPhaseInfo["Name"].isNull())
			phaseInfoObject.name = dataNodePageDataPhaseInfo["Name"].asString();
		if(!dataNodePageDataPhaseInfo["Remark"].isNull())
			phaseInfoObject.remark = dataNodePageDataPhaseInfo["Remark"].asString();
		if(!dataNodePageDataPhaseInfo["AccessPermission"].isNull())
			phaseInfoObject.accessPermission = std::stoi(dataNodePageDataPhaseInfo["AccessPermission"].asString());
		if(!dataNodePageDataPhaseInfo["PhaseId"].isNull())
			phaseInfoObject.phaseId = dataNodePageDataPhaseInfo["PhaseId"].asString();
		data_.pageData.push_back(phaseInfoObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListMPCoSPhaseResult::getMessage()const
{
	return message_;
}

ListMPCoSPhaseResult::Data ListMPCoSPhaseResult::getData()const
{
	return data_;
}

int ListMPCoSPhaseResult::getCode()const
{
	return code_;
}

bool ListMPCoSPhaseResult::getSuccess()const
{
	return success_;
}

