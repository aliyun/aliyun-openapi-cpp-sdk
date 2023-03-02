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

#include <alibabacloud/lto/model/DescribeDashboardMemberApiInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Lto;
using namespace AlibabaCloud::Lto::Model;

DescribeDashboardMemberApiInfoResult::DescribeDashboardMemberApiInfoResult() :
	ServiceResult()
{}

DescribeDashboardMemberApiInfoResult::DescribeDashboardMemberApiInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDashboardMemberApiInfoResult::~DescribeDashboardMemberApiInfoResult()
{}

void DescribeDashboardMemberApiInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["MemberName"].isNull())
			dataObject.memberName = valueDataDataItem["MemberName"].asString();
		auto allMemberInfoListNode = valueDataDataItem["MemberInfoList"]["MemberInfo"];
		for (auto valueDataDataItemMemberInfoListMemberInfo : allMemberInfoListNode)
		{
			DataItem::MemberInfo memberInfoListObject;
			if(!valueDataDataItemMemberInfoListMemberInfo["Time"].isNull())
				memberInfoListObject.time = std::stol(valueDataDataItemMemberInfoListMemberInfo["Time"].asString());
			if(!valueDataDataItemMemberInfoListMemberInfo["ApiInvokeCount"].isNull())
				memberInfoListObject.apiInvokeCount = std::stol(valueDataDataItemMemberInfoListMemberInfo["ApiInvokeCount"].asString());
			dataObject.memberInfoList.push_back(memberInfoListObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeDashboardMemberApiInfoResult::getMessage()const
{
	return message_;
}

int DescribeDashboardMemberApiInfoResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<DescribeDashboardMemberApiInfoResult::DataItem> DescribeDashboardMemberApiInfoResult::getData()const
{
	return data_;
}

std::string DescribeDashboardMemberApiInfoResult::getCode()const
{
	return code_;
}

bool DescribeDashboardMemberApiInfoResult::getSuccess()const
{
	return success_;
}

