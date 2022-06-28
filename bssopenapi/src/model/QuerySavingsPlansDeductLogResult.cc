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

#include <alibabacloud/bssopenapi/model/QuerySavingsPlansDeductLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QuerySavingsPlansDeductLogResult::QuerySavingsPlansDeductLogResult() :
	ServiceResult()
{}

QuerySavingsPlansDeductLogResult::QuerySavingsPlansDeductLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySavingsPlansDeductLogResult::~QuerySavingsPlansDeductLogResult()
{}

void QuerySavingsPlansDeductLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stoi(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allItemsNode = dataNode["Items"]["SavingsPlansDeductDetailResponse"];
	for (auto dataNodeItemsSavingsPlansDeductDetailResponse : allItemsNode)
	{
		Data::SavingsPlansDeductDetailResponse savingsPlansDeductDetailResponseObject;
		if(!dataNodeItemsSavingsPlansDeductDetailResponse["EndTime"].isNull())
			savingsPlansDeductDetailResponseObject.endTime = dataNodeItemsSavingsPlansDeductDetailResponse["EndTime"].asString();
		if(!dataNodeItemsSavingsPlansDeductDetailResponse["StartTime"].isNull())
			savingsPlansDeductDetailResponseObject.startTime = dataNodeItemsSavingsPlansDeductDetailResponse["StartTime"].asString();
		if(!dataNodeItemsSavingsPlansDeductDetailResponse["SavingsType"].isNull())
			savingsPlansDeductDetailResponseObject.savingsType = dataNodeItemsSavingsPlansDeductDetailResponse["SavingsType"].asString();
		if(!dataNodeItemsSavingsPlansDeductDetailResponse["UserId"].isNull())
			savingsPlansDeductDetailResponseObject.userId = std::stol(dataNodeItemsSavingsPlansDeductDetailResponse["UserId"].asString());
		if(!dataNodeItemsSavingsPlansDeductDetailResponse["DiscountRate"].isNull())
			savingsPlansDeductDetailResponseObject.discountRate = dataNodeItemsSavingsPlansDeductDetailResponse["DiscountRate"].asString();
		if(!dataNodeItemsSavingsPlansDeductDetailResponse["BillModule"].isNull())
			savingsPlansDeductDetailResponseObject.billModule = dataNodeItemsSavingsPlansDeductDetailResponse["BillModule"].asString();
		if(!dataNodeItemsSavingsPlansDeductDetailResponse["InstanceId"].isNull())
			savingsPlansDeductDetailResponseObject.instanceId = dataNodeItemsSavingsPlansDeductDetailResponse["InstanceId"].asString();
		if(!dataNodeItemsSavingsPlansDeductDetailResponse["DeductInstanceId"].isNull())
			savingsPlansDeductDetailResponseObject.deductInstanceId = dataNodeItemsSavingsPlansDeductDetailResponse["DeductInstanceId"].asString();
		if(!dataNodeItemsSavingsPlansDeductDetailResponse["DeductCommodity"].isNull())
			savingsPlansDeductDetailResponseObject.deductCommodity = dataNodeItemsSavingsPlansDeductDetailResponse["DeductCommodity"].asString();
		if(!dataNodeItemsSavingsPlansDeductDetailResponse["DeductRate"].isNull())
			savingsPlansDeductDetailResponseObject.deductRate = dataNodeItemsSavingsPlansDeductDetailResponse["DeductRate"].asString();
		if(!dataNodeItemsSavingsPlansDeductDetailResponse["DeductFee"].isNull())
			savingsPlansDeductDetailResponseObject.deductFee = dataNodeItemsSavingsPlansDeductDetailResponse["DeductFee"].asString();
		if(!dataNodeItemsSavingsPlansDeductDetailResponse["OwnerId"].isNull())
			savingsPlansDeductDetailResponseObject.ownerId = std::stol(dataNodeItemsSavingsPlansDeductDetailResponse["OwnerId"].asString());
		data_.items.push_back(savingsPlansDeductDetailResponseObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QuerySavingsPlansDeductLogResult::getMessage()const
{
	return message_;
}

QuerySavingsPlansDeductLogResult::Data QuerySavingsPlansDeductLogResult::getData()const
{
	return data_;
}

std::string QuerySavingsPlansDeductLogResult::getCode()const
{
	return code_;
}

bool QuerySavingsPlansDeductLogResult::getSuccess()const
{
	return success_;
}

