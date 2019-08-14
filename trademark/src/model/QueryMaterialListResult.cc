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

#include <alibabacloud/trademark/model/QueryMaterialListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

QueryMaterialListResult::QueryMaterialListResult() :
	ServiceResult()
{}

QueryMaterialListResult::QueryMaterialListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMaterialListResult::~QueryMaterialListResult()
{}

void QueryMaterialListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["Trademark"];
	for (auto value : allData)
	{
		Trademark dataObject;
		if(!value["Id"].isNull())
			dataObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			dataObject.name = value["Name"].asString();
		if(!value["Type"].isNull())
			dataObject.type = std::stoi(value["Type"].asString());
		if(!value["Region"].isNull())
			dataObject.region = std::stoi(value["Region"].asString());
		if(!value["ContactName"].isNull())
			dataObject.contactName = value["ContactName"].asString();
		if(!value["Status"].isNull())
			dataObject.status = std::stoi(value["Status"].asString());
		if(!value["LoaKey"].isNull())
			dataObject.loaKey = value["LoaKey"].asString();
		if(!value["LoaStatus"].isNull())
			dataObject.loaStatus = std::stoi(value["LoaStatus"].asString());
		if(!value["CardNumber"].isNull())
			dataObject.cardNumber = value["CardNumber"].asString();
		data_.push_back(dataObject);
	}
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());

}

int QueryMaterialListResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int QueryMaterialListResult::getPageSize()const
{
	return pageSize_;
}

int QueryMaterialListResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<QueryMaterialListResult::Trademark> QueryMaterialListResult::getData()const
{
	return data_;
}

int QueryMaterialListResult::getTotalItemNum()const
{
	return totalItemNum_;
}

