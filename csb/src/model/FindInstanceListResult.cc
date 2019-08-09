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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	auto allItemList = value["ItemList"]["Item"];
	for (auto value : allItemList)
	{
		Data::Item itemObject;
		if(!value["Description"].isNull())
			itemObject.description = value["Description"].asString();
		if(!value["FrontStatus"].isNull())
			itemObject.frontStatus = value["FrontStatus"].asString();
		if(!value["GmtCreate"].isNull())
			itemObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			itemObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["Id"].isNull())
			itemObject.id = std::stol(value["Id"].asString());
		if(!value["InstanceCategory"].isNull())
			itemObject.instanceCategory = std::stoi(value["InstanceCategory"].asString());
		if(!value["Name"].isNull())
			itemObject.name = value["Name"].asString();
		if(!value["StatusCode"].isNull())
			itemObject.statusCode = std::stoi(value["StatusCode"].asString());
		if(!value["Visible"].isNull())
			itemObject.visible = value["Visible"].asString() == "true";
		if(!value["VpcName"].isNull())
			itemObject.vpcName = value["VpcName"].asString();
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

