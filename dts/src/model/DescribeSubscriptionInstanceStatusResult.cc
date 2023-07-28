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

#include <alibabacloud/dts/model/DescribeSubscriptionInstanceStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeSubscriptionInstanceStatusResult::DescribeSubscriptionInstanceStatusResult() :
	ServiceResult()
{}

DescribeSubscriptionInstanceStatusResult::DescribeSubscriptionInstanceStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSubscriptionInstanceStatusResult::~DescribeSubscriptionInstanceStatusResult()
{}

void DescribeSubscriptionInstanceStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSubscriptionObjectNode = value["SubscriptionObject"]["SynchronousObject"];
	for (auto valueSubscriptionObjectSynchronousObject : allSubscriptionObjectNode)
	{
		SynchronousObject subscriptionObjectObject;
		if(!valueSubscriptionObjectSynchronousObject["DatabaseName"].isNull())
			subscriptionObjectObject.databaseName = valueSubscriptionObjectSynchronousObject["DatabaseName"].asString();
		if(!valueSubscriptionObjectSynchronousObject["WholeDatabase"].isNull())
			subscriptionObjectObject.wholeDatabase = valueSubscriptionObjectSynchronousObject["WholeDatabase"].asString();
		auto allTableList = value["TableList"]["Table"];
		for (auto value : allTableList)
			subscriptionObjectObject.tableList.push_back(value.asString());
		subscriptionObject_.push_back(subscriptionObjectObject);
	}
	auto sourceEndpointNode = value["SourceEndpoint"];
	if(!sourceEndpointNode["InstanceType"].isNull())
		sourceEndpoint_.instanceType = sourceEndpointNode["InstanceType"].asString();
	if(!sourceEndpointNode["InstanceID"].isNull())
		sourceEndpoint_.instanceID = sourceEndpointNode["InstanceID"].asString();
	auto subscriptionDataTypeNode = value["SubscriptionDataType"];
	if(!subscriptionDataTypeNode["DML"].isNull())
		subscriptionDataType_.dML = subscriptionDataTypeNode["DML"].asString() == "true";
	if(!subscriptionDataTypeNode["DDL"].isNull())
		subscriptionDataType_.dDL = subscriptionDataTypeNode["DDL"].asString() == "true";
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["BeginTimestamp"].isNull())
		beginTimestamp_ = value["BeginTimestamp"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["PayType"].isNull())
		payType_ = value["PayType"].asString();
	if(!value["ConsumptionClient"].isNull())
		consumptionClient_ = value["ConsumptionClient"].asString();
	if(!value["SubscriptionInstanceName"].isNull())
		subscriptionInstanceName_ = value["SubscriptionInstanceName"].asString();
	if(!value["SubscriptionInstanceID"].isNull())
		subscriptionInstanceID_ = value["SubscriptionInstanceID"].asString();
	if(!value["EndTimestamp"].isNull())
		endTimestamp_ = value["EndTimestamp"].asString();
	if(!value["ConsumptionCheckpoint"].isNull())
		consumptionCheckpoint_ = value["ConsumptionCheckpoint"].asString();

}

std::string DescribeSubscriptionInstanceStatusResult::getStatus()const
{
	return status_;
}

std::vector<DescribeSubscriptionInstanceStatusResult::SynchronousObject> DescribeSubscriptionInstanceStatusResult::getSubscriptionObject()const
{
	return subscriptionObject_;
}

DescribeSubscriptionInstanceStatusResult::SubscriptionDataType DescribeSubscriptionInstanceStatusResult::getSubscriptionDataType()const
{
	return subscriptionDataType_;
}

std::string DescribeSubscriptionInstanceStatusResult::getSubscriptionInstanceName()const
{
	return subscriptionInstanceName_;
}

std::string DescribeSubscriptionInstanceStatusResult::getConsumptionCheckpoint()const
{
	return consumptionCheckpoint_;
}

std::string DescribeSubscriptionInstanceStatusResult::getConsumptionClient()const
{
	return consumptionClient_;
}

DescribeSubscriptionInstanceStatusResult::SourceEndpoint DescribeSubscriptionInstanceStatusResult::getSourceEndpoint()const
{
	return sourceEndpoint_;
}

std::string DescribeSubscriptionInstanceStatusResult::getEndTimestamp()const
{
	return endTimestamp_;
}

std::string DescribeSubscriptionInstanceStatusResult::getPayType()const
{
	return payType_;
}

std::string DescribeSubscriptionInstanceStatusResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeSubscriptionInstanceStatusResult::getSubscriptionInstanceID()const
{
	return subscriptionInstanceID_;
}

std::string DescribeSubscriptionInstanceStatusResult::getBeginTimestamp()const
{
	return beginTimestamp_;
}

