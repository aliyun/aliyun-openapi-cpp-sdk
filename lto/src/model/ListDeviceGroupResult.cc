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

#include <alibabacloud/lto/model/ListDeviceGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Lto;
using namespace AlibabaCloud::Lto::Model;

ListDeviceGroupResult::ListDeviceGroupResult() :
	ServiceResult()
{}

ListDeviceGroupResult::ListDeviceGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDeviceGroupResult::~ListDeviceGroupResult()
{}

void ListDeviceGroupResult::parse(const std::string &payload)
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
		if(!dataNodePageDataMemberInfo["CurrentUser"].isNull())
			memberInfoObject.currentUser = dataNodePageDataMemberInfo["CurrentUser"].asString() == "true";
		if(!dataNodePageDataMemberInfo["DeviceGroupId"].isNull())
			memberInfoObject.deviceGroupId = dataNodePageDataMemberInfo["DeviceGroupId"].asString();
		if(!dataNodePageDataMemberInfo["ProductKey"].isNull())
			memberInfoObject.productKey = dataNodePageDataMemberInfo["ProductKey"].asString();
		if(!dataNodePageDataMemberInfo["MemberName"].isNull())
			memberInfoObject.memberName = dataNodePageDataMemberInfo["MemberName"].asString();
		if(!dataNodePageDataMemberInfo["Remark"].isNull())
			memberInfoObject.remark = dataNodePageDataMemberInfo["Remark"].asString();
		if(!dataNodePageDataMemberInfo["Name"].isNull())
			memberInfoObject.name = dataNodePageDataMemberInfo["Name"].asString();
		if(!dataNodePageDataMemberInfo["DeviceCount"].isNull())
			memberInfoObject.deviceCount = std::stol(dataNodePageDataMemberInfo["DeviceCount"].asString());
		if(!dataNodePageDataMemberInfo["AuthorizedCount"].isNull())
			memberInfoObject.authorizedCount = std::stoi(dataNodePageDataMemberInfo["AuthorizedCount"].asString());
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

std::string ListDeviceGroupResult::getMessage()const
{
	return message_;
}

int ListDeviceGroupResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListDeviceGroupResult::Data ListDeviceGroupResult::getData()const
{
	return data_;
}

std::string ListDeviceGroupResult::getCode()const
{
	return code_;
}

bool ListDeviceGroupResult::getSuccess()const
{
	return success_;
}

