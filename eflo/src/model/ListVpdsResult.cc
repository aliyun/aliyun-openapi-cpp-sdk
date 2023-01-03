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

#include <alibabacloud/eflo/model/ListVpdsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

ListVpdsResult::ListVpdsResult() :
	ServiceResult()
{}

ListVpdsResult::ListVpdsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVpdsResult::~ListVpdsResult()
{}

void ListVpdsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["Total"].isNull())
		content_.total = std::stol(contentNode["Total"].asString());
	auto allDataNode = contentNode["Data"]["DataItem"];
	for (auto contentNodeDataDataItem : allDataNode)
	{
		Content::DataItem dataItemObject;
		if(!contentNodeDataDataItem["RegionId"].isNull())
			dataItemObject.regionId = contentNodeDataDataItem["RegionId"].asString();
		if(!contentNodeDataDataItem["VpdId"].isNull())
			dataItemObject.vpdId = contentNodeDataDataItem["VpdId"].asString();
		if(!contentNodeDataDataItem["Name"].isNull())
			dataItemObject.name = contentNodeDataDataItem["Name"].asString();
		if(!contentNodeDataDataItem["Cidr"].isNull())
			dataItemObject.cidr = contentNodeDataDataItem["Cidr"].asString();
		if(!contentNodeDataDataItem["ServiceCidr"].isNull())
			dataItemObject.serviceCidr = contentNodeDataDataItem["ServiceCidr"].asString();
		if(!contentNodeDataDataItem["Status"].isNull())
			dataItemObject.status = contentNodeDataDataItem["Status"].asString();
		if(!contentNodeDataDataItem["Message"].isNull())
			dataItemObject.message = contentNodeDataDataItem["Message"].asString();
		if(!contentNodeDataDataItem["Route"].isNull())
			dataItemObject.route = std::stoi(contentNodeDataDataItem["Route"].asString());
		if(!contentNodeDataDataItem["NcCount"].isNull())
			dataItemObject.ncCount = std::stoi(contentNodeDataDataItem["NcCount"].asString());
		if(!contentNodeDataDataItem["SubnetCount"].isNull())
			dataItemObject.subnetCount = std::stoi(contentNodeDataDataItem["SubnetCount"].asString());
		if(!contentNodeDataDataItem["GmtCreate"].isNull())
			dataItemObject.gmtCreate = contentNodeDataDataItem["GmtCreate"].asString();
		if(!contentNodeDataDataItem["GmtModified"].isNull())
			dataItemObject.gmtModified = contentNodeDataDataItem["GmtModified"].asString();
		if(!contentNodeDataDataItem["Dependence"].isNull())
			dataItemObject.dependence = contentNodeDataDataItem["Dependence"].asString();
		content_.data.push_back(dataItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListVpdsResult::getMessage()const
{
	return message_;
}

ListVpdsResult::Content ListVpdsResult::getContent()const
{
	return content_;
}

int ListVpdsResult::getCode()const
{
	return code_;
}

