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
	auto allDataNode = value["Data"]["TradeProduces"];
	for (auto valueDataTradeProduces : allDataNode)
	{
		TradeProduces dataObject;
		if(!valueDataTradeProduces["BizId"].isNull())
			dataObject.bizId = valueDataTradeProduces["BizId"].asString();
		if(!valueDataTradeProduces["PreOrderId"].isNull())
			dataObject.preOrderId = valueDataTradeProduces["PreOrderId"].asString();
		if(!valueDataTradeProduces["PreAmount"].isNull())
			dataObject.preAmount = std::stoi(valueDataTradeProduces["PreAmount"].asString());
		if(!valueDataTradeProduces["FinalAmount"].isNull())
			dataObject.finalAmount = std::stoi(valueDataTradeProduces["FinalAmount"].asString());
		if(!valueDataTradeProduces["RegisterNumber"].isNull())
			dataObject.registerNumber = valueDataTradeProduces["RegisterNumber"].asString();
		if(!valueDataTradeProduces["Classification"].isNull())
			dataObject.classification = valueDataTradeProduces["Classification"].asString();
		if(!valueDataTradeProduces["Icon"].isNull())
			dataObject.icon = valueDataTradeProduces["Icon"].asString();
		if(!valueDataTradeProduces["OperateNote"].isNull())
			dataObject.operateNote = valueDataTradeProduces["OperateNote"].asString();
		if(!valueDataTradeProduces["BuyerStatus"].isNull())
			dataObject.buyerStatus = std::stoi(valueDataTradeProduces["BuyerStatus"].asString());
		if(!valueDataTradeProduces["UserId"].isNull())
			dataObject.userId = valueDataTradeProduces["UserId"].asString();
		if(!valueDataTradeProduces["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataTradeProduces["CreateTime"].asString());
		if(!valueDataTradeProduces["UpdateTime"].isNull())
			dataObject.updateTime = std::stol(valueDataTradeProduces["UpdateTime"].asString());
		if(!valueDataTradeProduces["AllowCancel"].isNull())
			dataObject.allowCancel = valueDataTradeProduces["AllowCancel"].asString() == "true";
		if(!valueDataTradeProduces["FailReason"].isNull())
			dataObject.failReason = std::stoi(valueDataTradeProduces["FailReason"].asString());
		if(!valueDataTradeProduces["Source"].isNull())
			dataObject.source = std::stoi(valueDataTradeProduces["Source"].asString());
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

