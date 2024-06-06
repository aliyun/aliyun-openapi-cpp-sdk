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

#include <alibabacloud/csas/model/ListIdpConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListIdpConfigsResult::ListIdpConfigsResult() :
	ServiceResult()
{}

ListIdpConfigsResult::ListIdpConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIdpConfigsResult::~ListIdpConfigsResult()
{}

void ListIdpConfigsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalNum"].isNull())
		data_.totalNum = std::stol(dataNode["TotalNum"].asString());
	auto allDataListNode = dataNode["DataList"]["DataListItem"];
	for (auto dataNodeDataListDataListItem : allDataListNode)
	{
		Data::DataListItem dataListItemObject;
		if(!dataNodeDataListDataListItem["Id"].isNull())
			dataListItemObject.id = dataNodeDataListDataListItem["Id"].asString();
		if(!dataNodeDataListDataListItem["Name"].isNull())
			dataListItemObject.name = dataNodeDataListDataListItem["Name"].asString();
		if(!dataNodeDataListDataListItem["Type"].isNull())
			dataListItemObject.type = dataNodeDataListDataListItem["Type"].asString();
		if(!dataNodeDataListDataListItem["Description"].isNull())
			dataListItemObject.description = dataNodeDataListDataListItem["Description"].asString();
		if(!dataNodeDataListDataListItem["Mfa"].isNull())
			dataListItemObject.mfa = dataNodeDataListDataListItem["Mfa"].asString();
		if(!dataNodeDataListDataListItem["MobileLoginType"].isNull())
			dataListItemObject.mobileLoginType = dataNodeDataListDataListItem["MobileLoginType"].asString();
		if(!dataNodeDataListDataListItem["MobileMfaConfigType"].isNull())
			dataListItemObject.mobileMfaConfigType = dataNodeDataListDataListItem["MobileMfaConfigType"].asString();
		if(!dataNodeDataListDataListItem["MultiIdpInfo"].isNull())
			dataListItemObject.multiIdpInfo = dataNodeDataListDataListItem["MultiIdpInfo"].asString();
		if(!dataNodeDataListDataListItem["PcLoginType"].isNull())
			dataListItemObject.pcLoginType = dataNodeDataListDataListItem["PcLoginType"].asString();
		if(!dataNodeDataListDataListItem["Status"].isNull())
			dataListItemObject.status = dataNodeDataListDataListItem["Status"].asString();
		if(!dataNodeDataListDataListItem["UpdateTime"].isNull())
			dataListItemObject.updateTime = dataNodeDataListDataListItem["UpdateTime"].asString();
		data_.dataList.push_back(dataListItemObject);
	}

}

ListIdpConfigsResult::Data ListIdpConfigsResult::getData()const
{
	return data_;
}

