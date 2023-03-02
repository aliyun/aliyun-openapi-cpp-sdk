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

#include <alibabacloud/lto/model/ListMemberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Lto;
using namespace AlibabaCloud::Lto::Model;

ListMemberResult::ListMemberResult() :
	ServiceResult()
{}

ListMemberResult::ListMemberResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMemberResult::~ListMemberResult()
{}

void ListMemberResult::parse(const std::string &payload)
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
	auto allPageDataNode = dataNode["PageData"]["MemberInfo"];
	for (auto dataNodePageDataMemberInfo : allPageDataNode)
	{
		Data::MemberInfo memberInfoObject;
		if(!dataNodePageDataMemberInfo["Status"].isNull())
			memberInfoObject.status = dataNodePageDataMemberInfo["Status"].asString();
		if(!dataNodePageDataMemberInfo["AuthorizedCount"].isNull())
			memberInfoObject.authorizedCount = std::stol(dataNodePageDataMemberInfo["AuthorizedCount"].asString());
		if(!dataNodePageDataMemberInfo["Remark"].isNull())
			memberInfoObject.remark = dataNodePageDataMemberInfo["Remark"].asString();
		if(!dataNodePageDataMemberInfo["AdminName"].isNull())
			memberInfoObject.adminName = dataNodePageDataMemberInfo["AdminName"].asString();
		if(!dataNodePageDataMemberInfo["MemberId"].isNull())
			memberInfoObject.memberId = dataNodePageDataMemberInfo["MemberId"].asString();
		if(!dataNodePageDataMemberInfo["Name"].isNull())
			memberInfoObject.name = dataNodePageDataMemberInfo["Name"].asString();
		if(!dataNodePageDataMemberInfo["Contactor"].isNull())
			memberInfoObject.contactor = dataNodePageDataMemberInfo["Contactor"].asString();
		if(!dataNodePageDataMemberInfo["Telephony"].isNull())
			memberInfoObject.telephony = dataNodePageDataMemberInfo["Telephony"].asString();
		if(!dataNodePageDataMemberInfo["Uid"].isNull())
			memberInfoObject.uid = dataNodePageDataMemberInfo["Uid"].asString();
		if(!dataNodePageDataMemberInfo["AuthorizedDeviceCount"].isNull())
			memberInfoObject.authorizedDeviceCount = std::stoi(dataNodePageDataMemberInfo["AuthorizedDeviceCount"].asString());
		data_.pageData.push_back(memberInfoObject);
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

std::string ListMemberResult::getMessage()const
{
	return message_;
}

int ListMemberResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListMemberResult::Data ListMemberResult::getData()const
{
	return data_;
}

std::string ListMemberResult::getCode()const
{
	return code_;
}

bool ListMemberResult::getSuccess()const
{
	return success_;
}

