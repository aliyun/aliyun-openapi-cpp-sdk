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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stoi(dataNode["PageNum"].asString());
	if(!dataNode["TotalUnAppliedInvoiceAmount"].isNull())
		data_.totalUnAppliedInvoiceAmount = std::stol(dataNode["TotalUnAppliedInvoiceAmount"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["TotalInvoiceAmount"].isNull())
		data_.totalInvoiceAmount = std::stol(dataNode["TotalInvoiceAmount"].asString());
	if(!dataNode["HostId"].isNull())
		data_.hostId = dataNode["HostId"].asString();
	auto allEvaluateListNode = dataNode["EvaluateList"]["Evaluate"];
	for (auto dataNodeEvaluateListEvaluate : allEvaluateListNode)
	{
		Data::Evaluate evaluateObject;
		if(!dataNodeEvaluateListEvaluate["Type"].isNull())
			evaluateObject.type = std::stoi(dataNodeEvaluateListEvaluate["Type"].asString());
		if(!dataNodeEvaluateListEvaluate["Status"].isNull())
			evaluateObject.status = std::stoi(dataNodeEvaluateListEvaluate["Status"].asString());
		if(!dataNodeEvaluateListEvaluate["BillId"].isNull())
			evaluateObject.billId = std::stol(dataNodeEvaluateListEvaluate["BillId"].asString());
		if(!dataNodeEvaluateListEvaluate["UserId"].isNull())
			evaluateObject.userId = std::stol(dataNodeEvaluateListEvaluate["UserId"].asString());
		if(!dataNodeEvaluateListEvaluate["BillCycle"].isNull())
			evaluateObject.billCycle = dataNodeEvaluateListEvaluate["BillCycle"].asString();
		if(!dataNodeEvaluateListEvaluate["CanInvoiceAmount"].isNull())
			evaluateObject.canInvoiceAmount = std::stol(dataNodeEvaluateListEvaluate["CanInvoiceAmount"].asString());
		if(!dataNodeEvaluateListEvaluate["OffsetAcceptAmount"].isNull())
			evaluateObject.offsetAcceptAmount = std::stol(dataNodeEvaluateListEvaluate["OffsetAcceptAmount"].asString());
		if(!dataNodeEvaluateListEvaluate["ItemId"].isNull())
			evaluateObject.itemId = std::stol(dataNodeEvaluateListEvaluate["ItemId"].asString());
		if(!dataNodeEvaluateListEvaluate["OutBizId"].isNull())
			evaluateObject.outBizId = dataNodeEvaluateListEvaluate["OutBizId"].asString();
		if(!dataNodeEvaluateListEvaluate["UserNick"].isNull())
			evaluateObject.userNick = dataNodeEvaluateListEvaluate["UserNick"].asString();
		if(!dataNodeEvaluateListEvaluate["GmtModified"].isNull())
			evaluateObject.gmtModified = dataNodeEvaluateListEvaluate["GmtModified"].asString();
		if(!dataNodeEvaluateListEvaluate["OpId"].isNull())
			evaluateObject.opId = dataNodeEvaluateListEvaluate["OpId"].asString();
		if(!dataNodeEvaluateListEvaluate["BizType"].isNull())
			evaluateObject.bizType = dataNodeEvaluateListEvaluate["BizType"].asString();
		if(!dataNodeEvaluateListEvaluate["OriginalAmount"].isNull())
			evaluateObject.originalAmount = std::stol(dataNodeEvaluateListEvaluate["OriginalAmount"].asString());
		if(!dataNodeEvaluateListEvaluate["InvoicedAmount"].isNull())
			evaluateObject.invoicedAmount = std::stol(dataNodeEvaluateListEvaluate["InvoicedAmount"].asString());
		if(!dataNodeEvaluateListEvaluate["GmtCreate"].isNull())
			evaluateObject.gmtCreate = dataNodeEvaluateListEvaluate["GmtCreate"].asString();
		if(!dataNodeEvaluateListEvaluate["PresentAmount"].isNull())
			evaluateObject.presentAmount = std::stol(dataNodeEvaluateListEvaluate["PresentAmount"].asString());
		if(!dataNodeEvaluateListEvaluate["BizTime"].isNull())
			evaluateObject.bizTime = dataNodeEvaluateListEvaluate["BizTime"].asString();
		if(!dataNodeEvaluateListEvaluate["Name"].isNull())
			evaluateObject.name = dataNodeEvaluateListEvaluate["Name"].asString();
		if(!dataNodeEvaluateListEvaluate["OffsetCostAmount"].isNull())
			evaluateObject.offsetCostAmount = std::stol(dataNodeEvaluateListEvaluate["OffsetCostAmount"].asString());
		if(!dataNodeEvaluateListEvaluate["Id"].isNull())
			evaluateObject.id = std::stol(dataNodeEvaluateListEvaluate["Id"].asString());
		data_.evaluateList.push_back(evaluateObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

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

