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

#include <alibabacloud/trademark/model/QueryTradeIntentionUserListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allData = value["Data"]["Trademark"];
	for (auto value : allData)
	{
		Trademark dataObject;
		if(!value["RegisterNumber"].isNull())
			dataObject.registerNumber = value["RegisterNumber"].asString();
		if(!value["Classification"].isNull())
			dataObject.classification = value["Classification"].asString();
		if(!value["Mobile"].isNull())
			dataObject.mobile = std::stoi(value["Mobile"].asString());
		if(!value["UserName"].isNull())
			dataObject.userName = value["UserName"].asString();
		if(!value["BizId"].isNull())
			dataObject.bizId = value["BizId"].asString();
		if(!value["Description"].isNull())
			dataObject.description = value["Description"].asString();
		if(!value["Status"].isNull())
			dataObject.status = std::stoi(value["Status"].asString());
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

