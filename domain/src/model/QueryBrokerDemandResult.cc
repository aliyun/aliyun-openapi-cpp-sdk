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
	auto allData = value["Data"]["Demand"];
	for (auto value : allData)
	{
		Demand dataObject;
		if(!value["BizId"].isNull())
			dataObject.bizId = value["BizId"].asString();
		if(!value["Status"].isNull())
			dataObject.status = value["Status"].asString();
		if(!value["DemandDomain"].isNull())
			dataObject.demandDomain = value["DemandDomain"].asString();
		if(!value["DemandPrice"].isNull())
			dataObject.demandPrice = std::stof(value["DemandPrice"].asString());
		if(!value["Mobile"].isNull())
			dataObject.mobile = value["Mobile"].asString();
		if(!value["Description"].isNull())
			dataObject.description = value["Description"].asString();
		if(!value["PublishTime"].isNull())
			dataObject.publishTime = std::stol(value["PublishTime"].asString());
		if(!value["PayDomain"].isNull())
			dataObject.payDomain = value["PayDomain"].asString();
		if(!value["PayPrice"].isNull())
			dataObject.payPrice = std::stof(value["PayPrice"].asString());
		if(!value["PayTime"].isNull())
			dataObject.payTime = std::stol(value["PayTime"].asString());
		if(!value["ProduceType"].isNull())
			dataObject.produceType = std::stoi(value["ProduceType"].asString());
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

