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

#include <alibabacloud/csb/model/FindOrderedServiceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CSB;
using namespace AlibabaCloud::CSB::Model;

FindOrderedServiceListResult::FindOrderedServiceListResult() :
	ServiceResult()
{}

FindOrderedServiceListResult::FindOrderedServiceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FindOrderedServiceListResult::~FindOrderedServiceListResult()
{}

void FindOrderedServiceListResult::parse(const std::string &payload)
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
	if(!dataNode["Total"].isNull())
		data_.total = std::stol(dataNode["Total"].asString());
	auto allOrderListNode = dataNode["OrderList"]["Order"];
	for (auto dataNodeOrderListOrder : allOrderListNode)
	{
		Data::Order orderObject;
		if(!dataNodeOrderListOrder["ServiceName"].isNull())
			orderObject.serviceName = dataNodeOrderListOrder["ServiceName"].asString();
		if(!dataNodeOrderListOrder["ServiceVersion"].isNull())
			orderObject.serviceVersion = dataNodeOrderListOrder["ServiceVersion"].asString();
		if(!dataNodeOrderListOrder["OrderStatus"].isNull())
			orderObject.orderStatus = std::stoi(dataNodeOrderListOrder["OrderStatus"].asString());
		if(!dataNodeOrderListOrder["GmtCreate"].isNull())
			orderObject.gmtCreate = std::stol(dataNodeOrderListOrder["GmtCreate"].asString());
		if(!dataNodeOrderListOrder["ServiceId"].isNull())
			orderObject.serviceId = dataNodeOrderListOrder["ServiceId"].asString();
		if(!dataNodeOrderListOrder["ServiceStatus"].isNull())
			orderObject.serviceStatus = std::stoi(dataNodeOrderListOrder["ServiceStatus"].asString());
		if(!dataNodeOrderListOrder["CredentialGroupId"].isNull())
			orderObject.credentialGroupId = std::stol(dataNodeOrderListOrder["CredentialGroupId"].asString());
		if(!dataNodeOrderListOrder["GmtModified"].isNull())
			orderObject.gmtModified = std::stol(dataNodeOrderListOrder["GmtModified"].asString());
		if(!dataNodeOrderListOrder["ProjectName"].isNull())
			orderObject.projectName = dataNodeOrderListOrder["ProjectName"].asString();
		if(!dataNodeOrderListOrder["Id"].isNull())
			orderObject.id = std::stol(dataNodeOrderListOrder["Id"].asString());
		if(!dataNodeOrderListOrder["CredentialGroupName"].isNull())
			orderObject.credentialGroupName = dataNodeOrderListOrder["CredentialGroupName"].asString();
		auto slaInfoNode = value["SlaInfo"];
		if(!slaInfoNode["Qps"].isNull())
			orderObject.slaInfo.qps = std::stol(slaInfoNode["Qps"].asString());
		if(!slaInfoNode["Qph"].isNull())
			orderObject.slaInfo.qph = std::stol(slaInfoNode["Qph"].asString());
		data_.orderList.push_back(orderObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string FindOrderedServiceListResult::getMessage()const
{
	return message_;
}

FindOrderedServiceListResult::Data FindOrderedServiceListResult::getData()const
{
	return data_;
}

int FindOrderedServiceListResult::getCode()const
{
	return code_;
}

