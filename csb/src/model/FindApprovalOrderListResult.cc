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

#include <alibabacloud/csb/model/FindApprovalOrderListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CSB;
using namespace AlibabaCloud::CSB::Model;

FindApprovalOrderListResult::FindApprovalOrderListResult() :
	ServiceResult()
{}

FindApprovalOrderListResult::FindApprovalOrderListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FindApprovalOrderListResult::~FindApprovalOrderListResult()
{}

void FindApprovalOrderListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	auto allOrderList = value["OrderList"]["Order"];
	for (auto value : allOrderList)
	{
		Data::Order orderObject;
		if(!value["Alias"].isNull())
			orderObject.alias = value["Alias"].asString();
		if(!value["CredentialGroupId"].isNull())
			orderObject.credentialGroupId = std::stol(value["CredentialGroupId"].asString());
		if(!value["CsbId"].isNull())
			orderObject.csbId = std::stol(value["CsbId"].asString());
		if(!value["GmtCreate"].isNull())
			orderObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			orderObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["GroupName"].isNull())
			orderObject.groupName = value["GroupName"].asString();
		if(!value["Id"].isNull())
			orderObject.id = std::stol(value["Id"].asString());
		if(!value["ProjectName"].isNull())
			orderObject.projectName = value["ProjectName"].asString();
		if(!value["ServiceId"].isNull())
			orderObject.serviceId = std::stol(value["ServiceId"].asString());
		if(!value["ServiceName"].isNull())
			orderObject.serviceName = value["ServiceName"].asString();
		if(!value["ServiceStatus"].isNull())
			orderObject.serviceStatus = std::stoi(value["ServiceStatus"].asString());
		if(!value["ServiceVersion"].isNull())
			orderObject.serviceVersion = value["ServiceVersion"].asString();
		if(!value["StatisticName"].isNull())
			orderObject.statisticName = value["StatisticName"].asString();
		if(!value["Status"].isNull())
			orderObject.status = std::stoi(value["Status"].asString());
		if(!value["StrictWhiteListJson"].isNull())
			orderObject.strictWhiteListJson = value["StrictWhiteListJson"].asString();
		if(!value["UserId"].isNull())
			orderObject.userId = value["UserId"].asString();
		if(!value["UserName"].isNull())
			orderObject.userName = value["UserName"].asString();
		auto slaInfoNode = value["SlaInfo"];
		if(!slaInfoNode["Qph"].isNull())
			orderObject.slaInfo.qph = std::stoi(slaInfoNode["Qph"].asString());
		if(!slaInfoNode["Qps"].isNull())
			orderObject.slaInfo.qps = std::stoi(slaInfoNode["Qps"].asString());
		auto totalNode = value["Total"];
		if(!totalNode["ErrorNum"].isNull())
			orderObject.total.errorNum = std::stoi(totalNode["ErrorNum"].asString());
		if(!totalNode["Total"].isNull())
			orderObject.total.total = std::stoi(totalNode["Total"].asString());
		data_.orderList.push_back(orderObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string FindApprovalOrderListResult::getMessage()const
{
	return message_;
}

FindApprovalOrderListResult::Data FindApprovalOrderListResult::getData()const
{
	return data_;
}

int FindApprovalOrderListResult::getCode()const
{
	return code_;
}

