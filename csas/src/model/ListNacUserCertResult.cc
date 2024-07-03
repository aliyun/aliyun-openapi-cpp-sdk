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

#include <alibabacloud/csas/model/ListNacUserCertResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListNacUserCertResult::ListNacUserCertResult() :
	ServiceResult()
{}

ListNacUserCertResult::ListNacUserCertResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNacUserCertResult::~ListNacUserCertResult()
{}

void ListNacUserCertResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataListNode = value["DataList"]["DataListItem"];
	for (auto valueDataListDataListItem : allDataListNode)
	{
		DataListItem dataListObject;
		if(!valueDataListDataListItem["Username"].isNull())
			dataListObject.username = valueDataListDataListItem["Username"].asString();
		if(!valueDataListDataListItem["Aliuid"].isNull())
			dataListObject.aliuid = valueDataListDataListItem["Aliuid"].asString();
		if(!valueDataListDataListItem["ExpiredTime"].isNull())
			dataListObject.expiredTime = valueDataListDataListItem["ExpiredTime"].asString();
		if(!valueDataListDataListItem["Department"].isNull())
			dataListObject.department = valueDataListDataListItem["Department"].asString();
		if(!valueDataListDataListItem["DeviceType"].isNull())
			dataListObject.deviceType = valueDataListDataListItem["DeviceType"].asString();
		if(!valueDataListDataListItem["Status"].isNull())
			dataListObject.status = valueDataListDataListItem["Status"].asString();
		if(!valueDataListDataListItem["UserId"].isNull())
			dataListObject.userId = valueDataListDataListItem["UserId"].asString();
		if(!valueDataListDataListItem["DevTag"].isNull())
			dataListObject.devTag = valueDataListDataListItem["DevTag"].asString();
		if(!valueDataListDataListItem["Hostname"].isNull())
			dataListObject.hostname = valueDataListDataListItem["Hostname"].asString();
		if(!valueDataListDataListItem["Mac"].isNull())
			dataListObject.mac = valueDataListDataListItem["Mac"].asString();
		dataList_.push_back(dataListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stol(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stol(value["TotalNum"].asString());

}

std::vector<ListNacUserCertResult::DataListItem> ListNacUserCertResult::getDataList()const
{
	return dataList_;
}

long ListNacUserCertResult::getTotalNum()const
{
	return totalNum_;
}

std::string ListNacUserCertResult::getMessage()const
{
	return message_;
}

long ListNacUserCertResult::getCode()const
{
	return code_;
}

