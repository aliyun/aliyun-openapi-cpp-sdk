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

#include <alibabacloud/csb/model/FindInstanceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CSB;
using namespace AlibabaCloud::CSB::Model;

FindInstanceListResult::FindInstanceListResult() :
	ServiceResult()
{}

FindInstanceListResult::FindInstanceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FindInstanceListResult::~FindInstanceListResult()
{}

void FindInstanceListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	auto allItemListNode = dataNode["ItemList"]["Item"];
	for (auto dataNodeItemListItem : allItemListNode)
	{
		Data::Item itemObject;
		if(!dataNodeItemListItem["Description"].isNull())
			itemObject.description = dataNodeItemListItem["Description"].asString();
		if(!dataNodeItemListItem["FrontStatus"].isNull())
			itemObject.frontStatus = dataNodeItemListItem["FrontStatus"].asString();
		if(!dataNodeItemListItem["GmtCreate"].isNull())
			itemObject.gmtCreate = std::stol(dataNodeItemListItem["GmtCreate"].asString());
		if(!dataNodeItemListItem["GmtModified"].isNull())
			itemObject.gmtModified = std::stol(dataNodeItemListItem["GmtModified"].asString());
		if(!dataNodeItemListItem["Id"].isNull())
			itemObject.id = std::stol(dataNodeItemListItem["Id"].asString());
		if(!dataNodeItemListItem["InstanceCategory"].isNull())
			itemObject.instanceCategory = std::stoi(dataNodeItemListItem["InstanceCategory"].asString());
		if(!dataNodeItemListItem["Name"].isNull())
			itemObject.name = dataNodeItemListItem["Name"].asString();
		if(!dataNodeItemListItem["StatusCode"].isNull())
			itemObject.statusCode = std::stoi(dataNodeItemListItem["StatusCode"].asString());
		if(!dataNodeItemListItem["Visible"].isNull())
			itemObject.visible = dataNodeItemListItem["Visible"].asString() == "true";
		if(!dataNodeItemListItem["VpcName"].isNull())
			itemObject.vpcName = dataNodeItemListItem["VpcName"].asString();
		data_.itemList.push_back(itemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string FindInstanceListResult::getMessage()const
{
	return message_;
}

FindInstanceListResult::Data FindInstanceListResult::getData()const
{
	return data_;
}

int FindInstanceListResult::getCode()const
{
	return code_;
}

