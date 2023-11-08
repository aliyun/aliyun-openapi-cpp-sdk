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

#include <alibabacloud/amqp-open/model/ListExchangesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Amqp_open;
using namespace AlibabaCloud::Amqp_open::Model;

ListExchangesResult::ListExchangesResult() :
	ServiceResult()
{}

ListExchangesResult::ListExchangesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListExchangesResult::~ListExchangesResult()
{}

void ListExchangesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["MaxResults"].isNull())
		data_.maxResults = std::stoi(dataNode["MaxResults"].asString());
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	auto allExchangesNode = dataNode["Exchanges"]["ExchangeVO"];
	for (auto dataNodeExchangesExchangeVO : allExchangesNode)
	{
		Data::ExchangeVO exchangeVOObject;
		if(!dataNodeExchangesExchangeVO["AutoDeleteState"].isNull())
			exchangeVOObject.autoDeleteState = dataNodeExchangesExchangeVO["AutoDeleteState"].asString() == "true";
		if(!dataNodeExchangesExchangeVO["CreateTime"].isNull())
			exchangeVOObject.createTime = std::stol(dataNodeExchangesExchangeVO["CreateTime"].asString());
		if(!dataNodeExchangesExchangeVO["Attributes"].isNull())
			exchangeVOObject.attributes = dataNodeExchangesExchangeVO["Attributes"].asString();
		if(!dataNodeExchangesExchangeVO["VHostName"].isNull())
			exchangeVOObject.vHostName = dataNodeExchangesExchangeVO["VHostName"].asString();
		if(!dataNodeExchangesExchangeVO["Name"].isNull())
			exchangeVOObject.name = dataNodeExchangesExchangeVO["Name"].asString();
		if(!dataNodeExchangesExchangeVO["ExchangeType"].isNull())
			exchangeVOObject.exchangeType = dataNodeExchangesExchangeVO["ExchangeType"].asString();
		data_.exchanges.push_back(exchangeVOObject);
	}

}

ListExchangesResult::Data ListExchangesResult::getData()const
{
	return data_;
}

