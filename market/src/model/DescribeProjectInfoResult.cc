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

#include <alibabacloud/market/model/DescribeProjectInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Market;
using namespace AlibabaCloud::Market::Model;

DescribeProjectInfoResult::DescribeProjectInfoResult() :
	ServiceResult()
{}

DescribeProjectInfoResult::DescribeProjectInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeProjectInfoResult::~DescribeProjectInfoResult()
{}

void DescribeProjectInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["ProductName"].isNull())
		result_.productName = resultNode["ProductName"].asString();
	if(!resultNode["ProjectStatus"].isNull())
		result_.projectStatus = resultNode["ProjectStatus"].asString();
	if(!resultNode["CustomerAliUid"].isNull())
		result_.customerAliUid = std::stol(resultNode["CustomerAliUid"].asString());
	if(!resultNode["TemplateType"].isNull())
		result_.templateType = resultNode["TemplateType"].asString();
	if(!resultNode["InstanceId"].isNull())
		result_.instanceId = resultNode["InstanceId"].asString();
	if(!resultNode["ProductSkuName"].isNull())
		result_.productSkuName = resultNode["ProductSkuName"].asString();
	if(!resultNode["FinalStepNo"].isNull())
		result_.finalStepNo = std::stoi(resultNode["FinalStepNo"].asString());
	if(!resultNode["CurrentStepNo"].isNull())
		result_.currentStepNo = std::stoi(resultNode["CurrentStepNo"].asString());
	if(!resultNode["GmtExpired"].isNull())
		result_.gmtExpired = std::stol(resultNode["GmtExpired"].asString());
	if(!resultNode["GmtFinished"].isNull())
		result_.gmtFinished = std::stol(resultNode["GmtFinished"].asString());
	if(!resultNode["ProductSkuCode"].isNull())
		result_.productSkuCode = resultNode["ProductSkuCode"].asString();
	if(!resultNode["GmtCreate"].isNull())
		result_.gmtCreate = std::stol(resultNode["GmtCreate"].asString());
	if(!resultNode["SupplierAliUid"].isNull())
		result_.supplierAliUid = std::stol(resultNode["SupplierAliUid"].asString());
	if(!resultNode["FinishType"].isNull())
		result_.finishType = resultNode["FinishType"].asString();
	if(!resultNode["TemplateId"].isNull())
		result_.templateId = std::stol(resultNode["TemplateId"].asString());
	if(!resultNode["OrderId"].isNull())
		result_.orderId = std::stol(resultNode["OrderId"].asString());
	if(!resultNode["ProductCode"].isNull())
		result_.productCode = resultNode["ProductCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool DescribeProjectInfoResult::getSuccess()const
{
	return success_;
}

DescribeProjectInfoResult::Result DescribeProjectInfoResult::getResult()const
{
	return result_;
}

