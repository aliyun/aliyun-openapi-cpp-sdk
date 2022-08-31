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

#include <alibabacloud/rds/model/DescribeDBProxyEndpointResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBProxyEndpointResult::DescribeDBProxyEndpointResult() :
	ServiceResult()
{}

DescribeDBProxyEndpointResult::DescribeDBProxyEndpointResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBProxyEndpointResult::~DescribeDBProxyEndpointResult()
{}

void DescribeDBProxyEndpointResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEndpointConnectItemsNode = value["EndpointConnectItems"]["EndpointConnectItemsItem"];
	for (auto valueEndpointConnectItemsEndpointConnectItemsItem : allEndpointConnectItemsNode)
	{
		EndpointConnectItemsItem endpointConnectItemsObject;
		if(!valueEndpointConnectItemsEndpointConnectItemsItem["DbProxyEndpointPort"].isNull())
			endpointConnectItemsObject.dbProxyEndpointPort = valueEndpointConnectItemsEndpointConnectItemsItem["DbProxyEndpointPort"].asString();
		if(!valueEndpointConnectItemsEndpointConnectItemsItem["DbProxyEndpointConnectString"].isNull())
			endpointConnectItemsObject.dbProxyEndpointConnectString = valueEndpointConnectItemsEndpointConnectItemsItem["DbProxyEndpointConnectString"].asString();
		if(!valueEndpointConnectItemsEndpointConnectItemsItem["DbProxyEndpointNetType"].isNull())
			endpointConnectItemsObject.dbProxyEndpointNetType = valueEndpointConnectItemsEndpointConnectItemsItem["DbProxyEndpointNetType"].asString();
		endpointConnectItems_.push_back(endpointConnectItemsObject);
	}
	if(!value["DBProxyConnectStringNetType"].isNull())
		dBProxyConnectStringNetType_ = value["DBProxyConnectStringNetType"].asString();
	if(!value["DBProxyFeatures"].isNull())
		dBProxyFeatures_ = value["DBProxyFeatures"].asString();
	if(!value["ReadOnlyInstanceWeight"].isNull())
		readOnlyInstanceWeight_ = value["ReadOnlyInstanceWeight"].asString();
	if(!value["ReadOnlyInstanceDistributionType"].isNull())
		readOnlyInstanceDistributionType_ = value["ReadOnlyInstanceDistributionType"].asString();
	if(!value["ReadOnlyInstanceMaxDelayTime"].isNull())
		readOnlyInstanceMaxDelayTime_ = value["ReadOnlyInstanceMaxDelayTime"].asString();
	if(!value["DbProxyEndpointReadWriteMode"].isNull())
		dbProxyEndpointReadWriteMode_ = value["DbProxyEndpointReadWriteMode"].asString();
	if(!value["DbProxyEndpointAliases"].isNull())
		dbProxyEndpointAliases_ = value["DbProxyEndpointAliases"].asString();
	if(!value["DBProxyEndpointId"].isNull())
		dBProxyEndpointId_ = value["DBProxyEndpointId"].asString();
	if(!value["DBProxyConnectStringPort"].isNull())
		dBProxyConnectStringPort_ = value["DBProxyConnectStringPort"].asString();
	if(!value["DBProxyConnectString"].isNull())
		dBProxyConnectString_ = value["DBProxyConnectString"].asString();
	if(!value["DBProxyEngineType"].isNull())
		dBProxyEngineType_ = value["DBProxyEngineType"].asString();

}

std::string DescribeDBProxyEndpointResult::getReadOnlyInstanceDistributionType()const
{
	return readOnlyInstanceDistributionType_;
}

std::string DescribeDBProxyEndpointResult::getDbProxyEndpointReadWriteMode()const
{
	return dbProxyEndpointReadWriteMode_;
}

std::string DescribeDBProxyEndpointResult::getDBProxyConnectString()const
{
	return dBProxyConnectString_;
}

std::string DescribeDBProxyEndpointResult::getDBProxyEndpointId()const
{
	return dBProxyEndpointId_;
}

std::string DescribeDBProxyEndpointResult::getDbProxyEndpointAliases()const
{
	return dbProxyEndpointAliases_;
}

std::string DescribeDBProxyEndpointResult::getDBProxyFeatures()const
{
	return dBProxyFeatures_;
}

std::string DescribeDBProxyEndpointResult::getReadOnlyInstanceWeight()const
{
	return readOnlyInstanceWeight_;
}

std::string DescribeDBProxyEndpointResult::getReadOnlyInstanceMaxDelayTime()const
{
	return readOnlyInstanceMaxDelayTime_;
}

std::string DescribeDBProxyEndpointResult::getDBProxyConnectStringNetType()const
{
	return dBProxyConnectStringNetType_;
}

std::vector<DescribeDBProxyEndpointResult::EndpointConnectItemsItem> DescribeDBProxyEndpointResult::getEndpointConnectItems()const
{
	return endpointConnectItems_;
}

std::string DescribeDBProxyEndpointResult::getDBProxyConnectStringPort()const
{
	return dBProxyConnectStringPort_;
}

std::string DescribeDBProxyEndpointResult::getDBProxyEngineType()const
{
	return dBProxyEngineType_;
}

