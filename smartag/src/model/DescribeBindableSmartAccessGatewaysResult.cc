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

#include <alibabacloud/smartag/model/DescribeBindableSmartAccessGatewaysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeBindableSmartAccessGatewaysResult::DescribeBindableSmartAccessGatewaysResult() :
	ServiceResult()
{}

DescribeBindableSmartAccessGatewaysResult::DescribeBindableSmartAccessGatewaysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBindableSmartAccessGatewaysResult::~DescribeBindableSmartAccessGatewaysResult()
{}

void DescribeBindableSmartAccessGatewaysResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSmartAccessGateways = value["SmartAccessGateways"]["SmartAccessGateway"];
	for (auto value : allSmartAccessGateways)
	{
		SmartAccessGateway smartAccessGatewaysObject;
		if(!value["SmartAGId"].isNull())
			smartAccessGatewaysObject.smartAGId = value["SmartAGId"].asString();
		if(!value["Name"].isNull())
			smartAccessGatewaysObject.name = value["Name"].asString();
		if(!value["SmartAGUid"].isNull())
			smartAccessGatewaysObject.smartAGUid = std::stol(value["SmartAGUid"].asString());
		smartAccessGateways_.push_back(smartAccessGatewaysObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeBindableSmartAccessGatewaysResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeBindableSmartAccessGatewaysResult::getPageSize()const
{
	return pageSize_;
}

int DescribeBindableSmartAccessGatewaysResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeBindableSmartAccessGatewaysResult::SmartAccessGateway> DescribeBindableSmartAccessGatewaysResult::getSmartAccessGateways()const
{
	return smartAccessGateways_;
}

