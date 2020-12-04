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

#include <alibabacloud/domain/model/QueryBrokerDemandResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryBrokerDemandResult::QueryBrokerDemandResult() :
	ServiceResult()
{}

QueryBrokerDemandResult::QueryBrokerDemandResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryBrokerDemandResult::~QueryBrokerDemandResult()
{}

void QueryBrokerDemandResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Demand"];
	for (auto valueDataDemand : allDataNode)
	{
		Demand dataObject;
		if(!valueDataDemand["BizId"].isNull())
			dataObject.bizId = valueDataDemand["BizId"].asString();
		if(!valueDataDemand["Status"].isNull())
			dataObject.status = valueDataDemand["Status"].asString();
		if(!valueDataDemand["DemandDomain"].isNull())
			dataObject.demandDomain = valueDataDemand["DemandDomain"].asString();
		if(!valueDataDemand["DemandPrice"].isNull())
			dataObject.demandPrice = std::stof(valueDataDemand["DemandPrice"].asString());
		if(!valueDataDemand["Mobile"].isNull())
			dataObject.mobile = valueDataDemand["Mobile"].asString();
		if(!valueDataDemand["Description"].isNull())
			dataObject.description = valueDataDemand["Description"].asString();
		if(!valueDataDemand["PublishTime"].isNull())
			dataObject.publishTime = std::stol(valueDataDemand["PublishTime"].asString());
		if(!valueDataDemand["PayDomain"].isNull())
			dataObject.payDomain = valueDataDemand["PayDomain"].asString();
		if(!valueDataDemand["PayPrice"].isNull())
			dataObject.payPrice = std::stof(valueDataDemand["PayPrice"].asString());
		if(!valueDataDemand["PayTime"].isNull())
			dataObject.payTime = std::stol(valueDataDemand["PayTime"].asString());
		if(!valueDataDemand["ProduceType"].isNull())
			dataObject.produceType = std::stoi(valueDataDemand["ProduceType"].asString());
		if(!valueDataDemand["BargainSellerPrice"].isNull())
			dataObject.bargainSellerPrice = std::stof(valueDataDemand["BargainSellerPrice"].asString());
		if(!valueDataDemand["BargainSellerMobile"].isNull())
			dataObject.bargainSellerMobile = valueDataDemand["BargainSellerMobile"].asString();
		if(!valueDataDemand["ServicePayPrice"].isNull())
			dataObject.servicePayPrice = std::stof(valueDataDemand["ServicePayPrice"].asString());
		if(!valueDataDemand["OrderType"].isNull())
			dataObject.orderType = std::stoi(valueDataDemand["OrderType"].asString());
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

int QueryBrokerDemandResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int QueryBrokerDemandResult::getPageSize()const
{
	return pageSize_;
}

int QueryBrokerDemandResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<QueryBrokerDemandResult::Demand> QueryBrokerDemandResult::getData()const
{
	return data_;
}

int QueryBrokerDemandResult::getTotalItemNum()const
{
	return totalItemNum_;
}

