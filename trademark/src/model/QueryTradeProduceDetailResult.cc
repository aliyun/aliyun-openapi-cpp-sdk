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

#include <alibabacloud/trademark/model/QueryTradeProduceDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

QueryTradeProduceDetailResult::QueryTradeProduceDetailResult() :
	ServiceResult()
{}

QueryTradeProduceDetailResult::QueryTradeProduceDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTradeProduceDetailResult::~QueryTradeProduceDetailResult()
{}

void QueryTradeProduceDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["BizId"].isNull())
		data_.bizId = dataNode["BizId"].asString();
	if(!dataNode["PreOrderId"].isNull())
		data_.preOrderId = dataNode["PreOrderId"].asString();
	if(!dataNode["PreAmount"].isNull())
		data_.preAmount = std::stof(dataNode["PreAmount"].asString());
	if(!dataNode["FinalAmount"].isNull())
		data_.finalAmount = std::stof(dataNode["FinalAmount"].asString());
	if(!dataNode["RegisterNumber"].isNull())
		data_.registerNumber = dataNode["RegisterNumber"].asString();
	if(!dataNode["Classification"].isNull())
		data_.classification = dataNode["Classification"].asString();
	if(!dataNode["Icon"].isNull())
		data_.icon = dataNode["Icon"].asString();
	if(!dataNode["OperateNote"].isNull())
		data_.operateNote = dataNode["OperateNote"].asString();
	if(!dataNode["BuyerStatus"].isNull())
		data_.buyerStatus = std::stoi(dataNode["BuyerStatus"].asString());
	if(!dataNode["UserId"].isNull())
		data_.userId = dataNode["UserId"].asString();
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["UpdateTime"].isNull())
		data_.updateTime = std::stol(dataNode["UpdateTime"].asString());
	if(!dataNode["Extend"].isNull())
		data_.extend = dataNode["Extend"].asString();
	if(!dataNode["ThirdCode"].isNull())
		data_.thirdCode = dataNode["ThirdCode"].asString();
	if(!dataNode["Share"].isNull())
		data_.share = dataNode["Share"].asString();
	if(!dataNode["ExclusiveDateLimit"].isNull())
		data_.exclusiveDateLimit = dataNode["ExclusiveDateLimit"].asString();
	if(!dataNode["AllowCancel"].isNull())
		data_.allowCancel = dataNode["AllowCancel"].asString() == "true";
	if(!dataNode["TmName"].isNull())
		data_.tmName = dataNode["TmName"].asString();
	if(!dataNode["PaidAmount"].isNull())
		data_.paidAmount = std::stof(dataNode["PaidAmount"].asString());
	if(!dataNode["ConfiscateAmount"].isNull())
		data_.confiscateAmount = std::stof(dataNode["ConfiscateAmount"].asString());
	if(!dataNode["RefundAmount"].isNull())
		data_.refundAmount = std::stof(dataNode["RefundAmount"].asString());
	if(!dataNode["Source"].isNull())
		data_.source = std::stoi(dataNode["Source"].asString());

}

QueryTradeProduceDetailResult::Data QueryTradeProduceDetailResult::getData()const
{
	return data_;
}

