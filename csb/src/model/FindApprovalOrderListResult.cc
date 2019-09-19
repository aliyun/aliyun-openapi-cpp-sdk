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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	auto allOrderListNode = dataNode["OrderList"]["Order"];
	for (auto dataNodeOrderListOrder : allOrderListNode)
	{
		Data::Order orderObject;
		if(!dataNodeOrderListOrder["Alias"].isNull())
			orderObject.alias = dataNodeOrderListOrder["Alias"].asString();
		if(!dataNodeOrderListOrder["CredentialGroupId"].isNull())
			orderObject.credentialGroupId = std::stol(dataNodeOrderListOrder["CredentialGroupId"].asString());
		if(!dataNodeOrderListOrder["CsbId"].isNull())
			orderObject.csbId = std::stol(dataNodeOrderListOrder["CsbId"].asString());
		if(!dataNodeOrderListOrder["GmtCreate"].isNull())
			orderObject.gmtCreate = std::stol(dataNodeOrderListOrder["GmtCreate"].asString());
		if(!dataNodeOrderListOrder["GmtModified"].isNull())
			orderObject.gmtModified = std::stol(dataNodeOrderListOrder["GmtModified"].asString());
		if(!dataNodeOrderListOrder["GroupName"].isNull())
			orderObject.groupName = dataNodeOrderListOrder["GroupName"].asString();
		if(!dataNodeOrderListOrder["Id"].isNull())
			orderObject.id = std::stol(dataNodeOrderListOrder["Id"].asString());
		if(!dataNodeOrderListOrder["ProjectName"].isNull())
			orderObject.projectName = dataNodeOrderListOrder["ProjectName"].asString();
		if(!dataNodeOrderListOrder["ServiceId"].isNull())
			orderObject.serviceId = std::stol(dataNodeOrderListOrder["ServiceId"].asString());
		if(!dataNodeOrderListOrder["ServiceName"].isNull())
			orderObject.serviceName = dataNodeOrderListOrder["ServiceName"].asString();
		if(!dataNodeOrderListOrder["ServiceStatus"].isNull())
			orderObject.serviceStatus = std::stoi(dataNodeOrderListOrder["ServiceStatus"].asString());
		if(!dataNodeOrderListOrder["ServiceVersion"].isNull())
			orderObject.serviceVersion = dataNodeOrderListOrder["ServiceVersion"].asString();
		if(!dataNodeOrderListOrder["StatisticName"].isNull())
			orderObject.statisticName = dataNodeOrderListOrder["StatisticName"].asString();
		if(!dataNodeOrderListOrder["Status"].isNull())
			orderObject.status = std::stoi(dataNodeOrderListOrder["Status"].asString());
		if(!dataNodeOrderListOrder["StrictWhiteListJson"].isNull())
			orderObject.strictWhiteListJson = dataNodeOrderListOrder["StrictWhiteListJson"].asString();
		if(!dataNodeOrderListOrder["UserId"].isNull())
			orderObject.userId = dataNodeOrderListOrder["UserId"].asString();
		if(!dataNodeOrderListOrder["UserName"].isNull())
			orderObject.userName = dataNodeOrderListOrder["UserName"].asString();
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

