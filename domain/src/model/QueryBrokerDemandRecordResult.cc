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

#include <alibabacloud/domain/model/QueryBrokerDemandRecordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryBrokerDemandRecordResult::QueryBrokerDemandRecordResult() :
	ServiceResult()
{}

QueryBrokerDemandRecordResult::QueryBrokerDemandRecordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryBrokerDemandRecordResult::~QueryBrokerDemandRecordResult()
{}

void QueryBrokerDemandRecordResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["BrokerDemandRecord"];
	for (auto value : allData)
	{
		BrokerDemandRecord dataObject;
		if(!value["BizId"].isNull())
			dataObject.bizId = value["BizId"].asString();
		if(!value["Description"].isNull())
			dataObject.description = value["Description"].asString();
		if(!value["CreateTime"].isNull())
			dataObject.createTime = std::stol(value["CreateTime"].asString());
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

int QueryBrokerDemandRecordResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int QueryBrokerDemandRecordResult::getPageSize()const
{
	return pageSize_;
}

int QueryBrokerDemandRecordResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<QueryBrokerDemandRecordResult::BrokerDemandRecord> QueryBrokerDemandRecordResult::getData()const
{
	return data_;
}

int QueryBrokerDemandRecordResult::getTotalItemNum()const
{
	return totalItemNum_;
}

