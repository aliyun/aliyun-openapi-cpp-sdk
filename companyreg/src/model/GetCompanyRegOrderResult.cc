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

#include <alibabacloud/companyreg/model/GetCompanyRegOrderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

GetCompanyRegOrderResult::GetCompanyRegOrderResult() :
	ServiceResult()
{}

GetCompanyRegOrderResult::GetCompanyRegOrderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCompanyRegOrderResult::~GetCompanyRegOrderResult()
{}

void GetCompanyRegOrderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOperationsNode = value["Operations"]["BizOperation"];
	for (auto valueOperationsBizOperation : allOperationsNode)
	{
		BizOperation operationsObject;
		if(!valueOperationsBizOperation["GmtAction"].isNull())
			operationsObject.gmtAction = std::stol(valueOperationsBizOperation["GmtAction"].asString());
		if(!valueOperationsBizOperation["ActionType"].isNull())
			operationsObject.actionType = valueOperationsBizOperation["ActionType"].asString();
		if(!valueOperationsBizOperation["ActionInfo"].isNull())
			operationsObject.actionInfo = valueOperationsBizOperation["ActionInfo"].asString();
		operations_.push_back(operationsObject);
	}
	if(!value["BizId"].isNull())
		bizId_ = value["BizId"].asString();
	if(!value["CompanyName"].isNull())
		companyName_ = value["CompanyName"].asString();
	if(!value["BizStatus"].isNull())
		bizStatus_ = value["BizStatus"].asString();
	if(!value["BizInfo"].isNull())
		bizInfo_ = value["BizInfo"].asString();
	if(!value["SupplementBizInfo"].isNull())
		supplementBizInfo_ = value["SupplementBizInfo"].asString();
	if(!value["AliyunOrderId"].isNull())
		aliyunOrderId_ = value["AliyunOrderId"].asString();
	if(!value["GmtModified"].isNull())
		gmtModified_ = std::stol(value["GmtModified"].asString());
	if(!value["OrderAmount"].isNull())
		orderAmount_ = std::stof(value["OrderAmount"].asString());
	if(!value["YunMarketOrderAmount"].isNull())
		yunMarketOrderAmount_ = std::stof(value["YunMarketOrderAmount"].asString());
	if(!value["GmtPaid"].isNull())
		gmtPaid_ = std::stol(value["GmtPaid"].asString());
	if(!value["Extend"].isNull())
		extend_ = value["Extend"].asString();
	if(!value["BizStatusStage"].isNull())
		bizStatusStage_ = value["BizStatusStage"].asString();
	if(!value["PlatformName"].isNull())
		platformName_ = value["PlatformName"].asString();
	if(!value["InboundPhone"].isNull())
		inboundPhone_ = value["InboundPhone"].asString();
	if(!value["OutboundPhone"].isNull())
		outboundPhone_ = value["OutboundPhone"].asString();
	if(!value["BizSubCode"].isNull())
		bizSubCode_ = value["BizSubCode"].asString();

}

std::string GetCompanyRegOrderResult::getBizInfo()const
{
	return bizInfo_;
}

std::string GetCompanyRegOrderResult::getOutboundPhone()const
{
	return outboundPhone_;
}

std::string GetCompanyRegOrderResult::getSupplementBizInfo()const
{
	return supplementBizInfo_;
}

long GetCompanyRegOrderResult::getGmtModified()const
{
	return gmtModified_;
}

std::string GetCompanyRegOrderResult::getBizStatus()const
{
	return bizStatus_;
}

std::string GetCompanyRegOrderResult::getBizStatusStage()const
{
	return bizStatusStage_;
}

std::string GetCompanyRegOrderResult::getPlatformName()const
{
	return platformName_;
}

std::string GetCompanyRegOrderResult::getCompanyName()const
{
	return companyName_;
}

std::string GetCompanyRegOrderResult::getAliyunOrderId()const
{
	return aliyunOrderId_;
}

std::string GetCompanyRegOrderResult::getExtend()const
{
	return extend_;
}

float GetCompanyRegOrderResult::getOrderAmount()const
{
	return orderAmount_;
}

long GetCompanyRegOrderResult::getGmtPaid()const
{
	return gmtPaid_;
}

std::string GetCompanyRegOrderResult::getBizSubCode()const
{
	return bizSubCode_;
}

std::vector<GetCompanyRegOrderResult::BizOperation> GetCompanyRegOrderResult::getOperations()const
{
	return operations_;
}

std::string GetCompanyRegOrderResult::getBizId()const
{
	return bizId_;
}

float GetCompanyRegOrderResult::getYunMarketOrderAmount()const
{
	return yunMarketOrderAmount_;
}

std::string GetCompanyRegOrderResult::getInboundPhone()const
{
	return inboundPhone_;
}

