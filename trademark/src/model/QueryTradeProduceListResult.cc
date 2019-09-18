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

#include <alibabacloud/trademark/model/QueryTradeProduceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

QueryTradeProduceListResult::QueryTradeProduceListResult() :
	ServiceResult()
{}

QueryTradeProduceListResult::QueryTradeProduceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTradeProduceListResult::~QueryTradeProduceListResult()
{}

void QueryTradeProduceListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["TradeProduces"];
	for (auto value : allData)
	{
		TradeProduces dataObject;
		if(!value["BizId"].isNull())
			dataObject.bizId = value["BizId"].asString();
		if(!value["PreOrderId"].isNull())
			dataObject.preOrderId = value["PreOrderId"].asString();
		if(!value["PreAmount"].isNull())
			dataObject.preAmount = std::stoi(value["PreAmount"].asString());
		if(!value["FinalAmount"].isNull())
			dataObject.finalAmount = std::stoi(value["FinalAmount"].asString());
		if(!value["RegisterNumber"].isNull())
			dataObject.registerNumber = value["RegisterNumber"].asString();
		if(!value["Classification"].isNull())
			dataObject.classification = value["Classification"].asString();
		if(!value["Icon"].isNull())
			dataObject.icon = value["Icon"].asString();
		if(!value["OperateNote"].isNull())
			dataObject.operateNote = value["OperateNote"].asString();
		if(!value["BuyerStatus"].isNull())
			dataObject.buyerStatus = std::stoi(value["BuyerStatus"].asString());
		if(!value["UserId"].isNull())
			dataObject.userId = value["UserId"].asString();
		if(!value["CreateTime"].isNull())
			dataObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["UpdateTime"].isNull())
			dataObject.updateTime = std::stol(value["UpdateTime"].asString());
		if(!value["AllowCancel"].isNull())
			dataObject.allowCancel = value["AllowCancel"].asString() == "true";
		if(!value["FailReason"].isNull())
			dataObject.failReason = std::stoi(value["FailReason"].asString());
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

int QueryTradeProduceListResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int QueryTradeProduceListResult::getPageSize()const
{
	return pageSize_;
}

int QueryTradeProduceListResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<QueryTradeProduceListResult::TradeProduces> QueryTradeProduceListResult::getData()const
{
	return data_;
}

int QueryTradeProduceListResult::getTotalItemNum()const
{
	return totalItemNum_;
}

