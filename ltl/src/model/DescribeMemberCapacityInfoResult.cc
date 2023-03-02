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

#include <alibabacloud/ltl/model/DescribeMemberCapacityInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ltl;
using namespace AlibabaCloud::Ltl::Model;

DescribeMemberCapacityInfoResult::DescribeMemberCapacityInfoResult() :
	ServiceResult()
{}

DescribeMemberCapacityInfoResult::DescribeMemberCapacityInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMemberCapacityInfoResult::~DescribeMemberCapacityInfoResult()
{}

void DescribeMemberCapacityInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["MemberCapacityInfo"];
	for (auto valueDataMemberCapacityInfo : allDataNode)
	{
		MemberCapacityInfo dataObject;
		if(!valueDataMemberCapacityInfo["UsedCapacity"].isNull())
			dataObject.usedCapacity = valueDataMemberCapacityInfo["UsedCapacity"].asString();
		if(!valueDataMemberCapacityInfo["MemberId"].isNull())
			dataObject.memberId = valueDataMemberCapacityInfo["MemberId"].asString();
		if(!valueDataMemberCapacityInfo["MemberName"].isNull())
			dataObject.memberName = valueDataMemberCapacityInfo["MemberName"].asString();
		if(!valueDataMemberCapacityInfo["UsedCount"].isNull())
			dataObject.usedCount = valueDataMemberCapacityInfo["UsedCount"].asString();
		if(!valueDataMemberCapacityInfo["MemberUid"].isNull())
			dataObject.memberUid = valueDataMemberCapacityInfo["MemberUid"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeMemberCapacityInfoResult::getMessage()const
{
	return message_;
}

std::vector<DescribeMemberCapacityInfoResult::MemberCapacityInfo> DescribeMemberCapacityInfoResult::getData()const
{
	return data_;
}

int DescribeMemberCapacityInfoResult::getCode()const
{
	return code_;
}

bool DescribeMemberCapacityInfoResult::getSuccess()const
{
	return success_;
}

