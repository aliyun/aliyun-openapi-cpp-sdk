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

#include <alibabacloud/dts/model/DescribeSubscriptionInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeSubscriptionInstancesResult::DescribeSubscriptionInstancesResult() :
	ServiceResult()
{}

DescribeSubscriptionInstancesResult::DescribeSubscriptionInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSubscriptionInstancesResult::~DescribeSubscriptionInstancesResult()
{}

void DescribeSubscriptionInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSubscriptionInstancesNode = value["SubscriptionInstances"]["SubscriptionInstance"];
	for (auto valueSubscriptionInstancesSubscriptionInstance : allSubscriptionInstancesNode)
	{
		SubscriptionInstance subscriptionInstancesObject;
		if(!valueSubscriptionInstancesSubscriptionInstance["Status"].isNull())
			subscriptionInstancesObject.status = valueSubscriptionInstancesSubscriptionInstance["Status"].asString();
		if(!valueSubscriptionInstancesSubscriptionInstance["ErrorMessage"].isNull())
			subscriptionInstancesObject.errorMessage = valueSubscriptionInstancesSubscriptionInstance["ErrorMessage"].asString();
		if(!valueSubscriptionInstancesSubscriptionInstance["PayType"].isNull())
			subscriptionInstancesObject.payType = valueSubscriptionInstancesSubscriptionInstance["PayType"].asString();
		if(!valueSubscriptionInstancesSubscriptionInstance["ConsumptionClient"].isNull())
			subscriptionInstancesObject.consumptionClient = valueSubscriptionInstancesSubscriptionInstance["ConsumptionClient"].asString();
		if(!valueSubscriptionInstancesSubscriptionInstance["ConsumptionCheckpoint"].isNull())
			subscriptionInstancesObject.consumptionCheckpoint = valueSubscriptionInstancesSubscriptionInstance["ConsumptionCheckpoint"].asString();
		if(!valueSubscriptionInstancesSubscriptionInstance["EndTimestamp"].isNull())
			subscriptionInstancesObject.endTimestamp = valueSubscriptionInstancesSubscriptionInstance["EndTimestamp"].asString();
		if(!valueSubscriptionInstancesSubscriptionInstance["InstanceCreateTime"].isNull())
			subscriptionInstancesObject.instanceCreateTime = valueSubscriptionInstancesSubscriptionInstance["InstanceCreateTime"].asString();
		if(!valueSubscriptionInstancesSubscriptionInstance["BeginTimestamp"].isNull())
			subscriptionInstancesObject.beginTimestamp = valueSubscriptionInstancesSubscriptionInstance["BeginTimestamp"].asString();
		if(!valueSubscriptionInstancesSubscriptionInstance["SubscribeTopic"].isNull())
			subscriptionInstancesObject.subscribeTopic = valueSubscriptionInstancesSubscriptionInstance["SubscribeTopic"].asString();
		if(!valueSubscriptionInstancesSubscriptionInstance["SubscriptionInstanceName"].isNull())
			subscriptionInstancesObject.subscriptionInstanceName = valueSubscriptionInstancesSubscriptionInstance["SubscriptionInstanceName"].asString();
		if(!valueSubscriptionInstancesSubscriptionInstance["SubscriptionInstanceID"].isNull())
			subscriptionInstancesObject.subscriptionInstanceID = valueSubscriptionInstancesSubscriptionInstance["SubscriptionInstanceID"].asString();
		if(!valueSubscriptionInstancesSubscriptionInstance["JobCreateTime"].isNull())
			subscriptionInstancesObject.jobCreateTime = valueSubscriptionInstancesSubscriptionInstance["JobCreateTime"].asString();
		auto allSubscriptionObjectNode = valueSubscriptionInstancesSubscriptionInstance["SubscriptionObject"]["SynchronousObject"];
		for (auto valueSubscriptionInstancesSubscriptionInstanceSubscriptionObjectSynchronousObject : allSubscriptionObjectNode)
		{
			SubscriptionInstance::SynchronousObject subscriptionObjectObject;
			if(!valueSubscriptionInstancesSubscriptionInstanceSubscriptionObjectSynchronousObject["DatabaseName"].isNull())
				subscriptionObjectObject.databaseName = valueSubscriptionInstancesSubscriptionInstanceSubscriptionObjectSynchronousObject["DatabaseName"].asString();
			if(!valueSubscriptionInstancesSubscriptionInstanceSubscriptionObjectSynchronousObject["WholeDatabase"].isNull())
				subscriptionObjectObject.wholeDatabase = valueSubscriptionInstancesSubscriptionInstanceSubscriptionObjectSynchronousObject["WholeDatabase"].asString();
			auto allTableList = value["TableList"]["Table"];
			for (auto value : allTableList)
				subscriptionObjectObject.tableList.push_back(value.asString());
			subscriptionInstancesObject.subscriptionObject.push_back(subscriptionObjectObject);
		}
		auto allTagsNode = valueSubscriptionInstancesSubscriptionInstance["Tags"]["Tag"];
		for (auto valueSubscriptionInstancesSubscriptionInstanceTagsTag : allTagsNode)
		{
			SubscriptionInstance::Tag tagsObject;
			if(!valueSubscriptionInstancesSubscriptionInstanceTagsTag["Key"].isNull())
				tagsObject.key = valueSubscriptionInstancesSubscriptionInstanceTagsTag["Key"].asString();
			if(!valueSubscriptionInstancesSubscriptionInstanceTagsTag["Value"].isNull())
				tagsObject.value = valueSubscriptionInstancesSubscriptionInstanceTagsTag["Value"].asString();
			subscriptionInstancesObject.tags.push_back(tagsObject);
		}
		auto sourceEndpointNode = value["SourceEndpoint"];
		if(!sourceEndpointNode["InstanceType"].isNull())
			subscriptionInstancesObject.sourceEndpoint.instanceType = sourceEndpointNode["InstanceType"].asString();
		if(!sourceEndpointNode["InstanceID"].isNull())
			subscriptionInstancesObject.sourceEndpoint.instanceID = sourceEndpointNode["InstanceID"].asString();
		auto subscriptionDataTypeNode = value["SubscriptionDataType"];
		if(!subscriptionDataTypeNode["DML"].isNull())
			subscriptionInstancesObject.subscriptionDataType.dML = subscriptionDataTypeNode["DML"].asString() == "true";
		if(!subscriptionDataTypeNode["DDL"].isNull())
			subscriptionInstancesObject.subscriptionDataType.dDL = subscriptionDataTypeNode["DDL"].asString() == "true";
		auto subscriptionHostNode = value["SubscriptionHost"];
		if(!subscriptionHostNode["VPCHost"].isNull())
			subscriptionInstancesObject.subscriptionHost.vPCHost = subscriptionHostNode["VPCHost"].asString();
		if(!subscriptionHostNode["PublicHost"].isNull())
			subscriptionInstancesObject.subscriptionHost.publicHost = subscriptionHostNode["PublicHost"].asString();
		if(!subscriptionHostNode["PrivateHost"].isNull())
			subscriptionInstancesObject.subscriptionHost.privateHost = subscriptionHostNode["PrivateHost"].asString();
		subscriptionInstances_.push_back(subscriptionInstancesObject);
	}
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stol(value["TotalRecordCount"].asString());
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

long DescribeSubscriptionInstancesResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeSubscriptionInstancesResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeSubscriptionInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeSubscriptionInstancesResult::getErrMessage()const
{
	return errMessage_;
}

std::vector<DescribeSubscriptionInstancesResult::SubscriptionInstance> DescribeSubscriptionInstancesResult::getSubscriptionInstances()const
{
	return subscriptionInstances_;
}

std::string DescribeSubscriptionInstancesResult::getSuccess()const
{
	return success_;
}

std::string DescribeSubscriptionInstancesResult::getErrCode()const
{
	return errCode_;
}

