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

#include <alibabacloud/companyreg/model/QueryTradeIntentionUserListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

QueryTradeIntentionUserListResult::QueryTradeIntentionUserListResult() :
	ServiceResult()
{}

QueryTradeIntentionUserListResult::QueryTradeIntentionUserListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTradeIntentionUserListResult::~QueryTradeIntentionUserListResult()
{}

void QueryTradeIntentionUserListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Trademark"];
	for (auto valueDataTrademark : allDataNode)
	{
		Trademark dataObject;
		if(!valueDataTrademark["RegisterNumber"].isNull())
			dataObject.registerNumber = valueDataTrademark["RegisterNumber"].asString();
		if(!valueDataTrademark["Classification"].isNull())
			dataObject.classification = valueDataTrademark["Classification"].asString();
		if(!valueDataTrademark["Mobile"].isNull())
			dataObject.mobile = valueDataTrademark["Mobile"].asString();
		if(!valueDataTrademark["UserName"].isNull())
			dataObject.userName = valueDataTrademark["UserName"].asString();
		if(!valueDataTrademark["BizId"].isNull())
			dataObject.bizId = valueDataTrademark["BizId"].asString();
		if(!valueDataTrademark["Description"].isNull())
			dataObject.description = valueDataTrademark["Description"].asString();
		if(!valueDataTrademark["Status"].isNull())
			dataObject.status = std::stoi(valueDataTrademark["Status"].asString());
		if(!valueDataTrademark["Area"].isNull())
			dataObject.area = std::stoi(valueDataTrademark["Area"].asString());
		if(!valueDataTrademark["Type"].isNull())
			dataObject.type = std::stoi(valueDataTrademark["Type"].asString());
		if(!valueDataTrademark["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataTrademark["CreateTime"].asString());
		if(!valueDataTrademark["UpdateTime"].isNull())
			dataObject.updateTime = std::stol(valueDataTrademark["UpdateTime"].asString());
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

int QueryTradeIntentionUserListResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int QueryTradeIntentionUserListResult::getPageSize()const
{
	return pageSize_;
}

int QueryTradeIntentionUserListResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<QueryTradeIntentionUserListResult::Trademark> QueryTradeIntentionUserListResult::getData()const
{
	return data_;
}

int QueryTradeIntentionUserListResult::getTotalItemNum()const
{
	return totalItemNum_;
}

