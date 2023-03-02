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

#include <alibabacloud/lto/model/DescribeStatMemberDeviceInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Lto;
using namespace AlibabaCloud::Lto::Model;

DescribeStatMemberDeviceInfoResult::DescribeStatMemberDeviceInfoResult() :
	ServiceResult()
{}

DescribeStatMemberDeviceInfoResult::DescribeStatMemberDeviceInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStatMemberDeviceInfoResult::~DescribeStatMemberDeviceInfoResult()
{}

void DescribeStatMemberDeviceInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["MemberId"].isNull())
			dataObject.memberId = valueDataDataItem["MemberId"].asString();
		if(!valueDataDataItem["MemberName"].isNull())
			dataObject.memberName = valueDataDataItem["MemberName"].asString();
		if(!valueDataDataItem["BizChainCount"].isNull())
			dataObject.bizChainCount = valueDataDataItem["BizChainCount"].asString();
		if(!valueDataDataItem["AuthorizedCount"].isNull())
			dataObject.authorizedCount = valueDataDataItem["AuthorizedCount"].asString();
		if(!valueDataDataItem["UsedCount"].isNull())
			dataObject.usedCount = valueDataDataItem["UsedCount"].asString();
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

std::string DescribeStatMemberDeviceInfoResult::getMessage()const
{
	return message_;
}

int DescribeStatMemberDeviceInfoResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<DescribeStatMemberDeviceInfoResult::DataItem> DescribeStatMemberDeviceInfoResult::getData()const
{
	return data_;
}

std::string DescribeStatMemberDeviceInfoResult::getCode()const
{
	return code_;
}

bool DescribeStatMemberDeviceInfoResult::getSuccess()const
{
	return success_;
}

