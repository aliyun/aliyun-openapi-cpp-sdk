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

#include <alibabacloud/bssopenapi/model/QueryEvaluateListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryEvaluateListResult::QueryEvaluateListResult() :
	ServiceResult()
{}

QueryEvaluateListResult::QueryEvaluateListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryEvaluateListResult::~QueryEvaluateListResult()
{}

void QueryEvaluateListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["HostId"].isNull())
		data_.hostId = dataNode["HostId"].asString();
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stoi(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["TotalInvoiceAmount"].isNull())
		data_.totalInvoiceAmount = std::stol(dataNode["TotalInvoiceAmount"].asString());
	if(!dataNode["TotalUnAppliedInvoiceAmount"].isNull())
		data_.totalUnAppliedInvoiceAmount = std::stol(dataNode["TotalUnAppliedInvoiceAmount"].asString());
	auto allEvaluateList = value["EvaluateList"]["Evaluate"];
	for (auto value : allEvaluateList)
	{
		Data::Evaluate evaluateObject;
		if(!value["Id"].isNull())
			evaluateObject.id = std::stol(value["Id"].asString());
		if(!value["GmtCreate"].isNull())
			evaluateObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["GmtModified"].isNull())
			evaluateObject.gmtModified = value["GmtModified"].asString();
		if(!value["UserId"].isNull())
			evaluateObject.userId = std::stol(value["UserId"].asString());
		if(!value["UserNick"].isNull())
			evaluateObject.userNick = value["UserNick"].asString();
		if(!value["OutBizId"].isNull())
			evaluateObject.outBizId = value["OutBizId"].asString();
		if(!value["BillId"].isNull())
			evaluateObject.billId = std::stol(value["BillId"].asString());
		if(!value["ItemId"].isNull())
			evaluateObject.itemId = std::stol(value["ItemId"].asString());
		if(!value["BillCycle"].isNull())
			evaluateObject.billCycle = value["BillCycle"].asString();
		if(!value["BizType"].isNull())
			evaluateObject.bizType = value["BizType"].asString();
		if(!value["OriginalAmount"].isNull())
			evaluateObject.originalAmount = std::stol(value["OriginalAmount"].asString());
		if(!value["PresentAmount"].isNull())
			evaluateObject.presentAmount = std::stol(value["PresentAmount"].asString());
		if(!value["CanInvoiceAmount"].isNull())
			evaluateObject.canInvoiceAmount = std::stol(value["CanInvoiceAmount"].asString());
		if(!value["InvoicedAmount"].isNull())
			evaluateObject.invoicedAmount = std::stol(value["InvoicedAmount"].asString());
		if(!value["OffsetCostAmount"].isNull())
			evaluateObject.offsetCostAmount = std::stol(value["OffsetCostAmount"].asString());
		if(!value["OffsetAcceptAmount"].isNull())
			evaluateObject.offsetAcceptAmount = std::stol(value["OffsetAcceptAmount"].asString());
		if(!value["Status"].isNull())
			evaluateObject.status = std::stoi(value["Status"].asString());
		if(!value["OpId"].isNull())
			evaluateObject.opId = value["OpId"].asString();
		if(!value["Name"].isNull())
			evaluateObject.name = value["Name"].asString();
		if(!value["BizTime"].isNull())
			evaluateObject.bizTime = value["BizTime"].asString();
		if(!value["Type"].isNull())
			evaluateObject.type = std::stoi(value["Type"].asString());
		data_.evaluateList.push_back(evaluateObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryEvaluateListResult::getMessage()const
{
	return message_;
}

QueryEvaluateListResult::Data QueryEvaluateListResult::getData()const
{
	return data_;
}

std::string QueryEvaluateListResult::getCode()const
{
	return code_;
}

bool QueryEvaluateListResult::getSuccess()const
{
	return success_;
}

