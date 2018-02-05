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

#include <alibabacloud/rds/model/DescribeDBInstanceNetworkDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstanceNetworkDetailResult::DescribeDBInstanceNetworkDetailResult() :
	ServiceResult()
{}

DescribeDBInstanceNetworkDetailResult::DescribeDBInstanceNetworkDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceNetworkDetailResult::~DescribeDBInstanceNetworkDetailResult()
{}

void DescribeDBInstanceNetworkDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allNetworkDetail = value["NetworkDetail"]["NetworkKey"];
	for (auto value : allNetworkDetail)
	{
		NetworkKey networkDetailObject;
		if(!value["Key"].isNull())
			networkDetailObject.key = value["Key"].asString();
		if(!value["Unit"].isNull())
			networkDetailObject.unit = value["Unit"].asString();
		auto allValues = value["Values"]["NetworkValue"];
		for (auto value : allValues)
		{
			NetworkKey::NetworkValue valuesObject;
			if(!value["Value"].isNull())
				valuesObject.value = value["Value"].asString();
			if(!value["DateTime"].isNull())
				valuesObject.dateTime = value["DateTime"].asString();
			networkDetailObject.values.push_back(valuesObject);
		}
		networkDetail_.push_back(networkDetailObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["NewConnection"].isNull())
		newConnection_ = value["NewConnection"].asString();
	if(!value["ActiveConnection"].isNull())
		activeConnection_ = value["ActiveConnection"].asString();
	if(!value["AbortedConnection"].isNull())
		abortedConnection_ = value["AbortedConnection"].asString();
	if(!value["NetworkRequest"].isNull())
		networkRequest_ = value["NetworkRequest"].asString();
	if(!value["NetworkTrafficIn"].isNull())
		networkTrafficIn_ = value["NetworkTrafficIn"].asString();
	if(!value["NetworkTrafficOut"].isNull())
		networkTrafficOut_ = value["NetworkTrafficOut"].asString();
	if(!value["NetworkLatency"].isNull())
		networkLatency_ = value["NetworkLatency"].asString();
	if(!value["BackendLatency"].isNull())
		backendLatency_ = value["BackendLatency"].asString();
	if(!value["NetworkErrors"].isNull())
		networkErrors_ = value["NetworkErrors"].asString();

}

std::string DescribeDBInstanceNetworkDetailResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDBInstanceNetworkDetailResult::getNetworkLatency()const
{
	return networkLatency_;
}

std::string DescribeDBInstanceNetworkDetailResult::getNetworkTrafficOut()const
{
	return networkTrafficOut_;
}

std::string DescribeDBInstanceNetworkDetailResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDBInstanceNetworkDetailResult::getNetworkRequest()const
{
	return networkRequest_;
}

std::string DescribeDBInstanceNetworkDetailResult::getAbortedConnection()const
{
	return abortedConnection_;
}

std::string DescribeDBInstanceNetworkDetailResult::getBackendLatency()const
{
	return backendLatency_;
}

std::string DescribeDBInstanceNetworkDetailResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string DescribeDBInstanceNetworkDetailResult::getActiveConnection()const
{
	return activeConnection_;
}

std::string DescribeDBInstanceNetworkDetailResult::getNetworkErrors()const
{
	return networkErrors_;
}

std::string DescribeDBInstanceNetworkDetailResult::getNewConnection()const
{
	return newConnection_;
}

std::string DescribeDBInstanceNetworkDetailResult::getNetworkTrafficIn()const
{
	return networkTrafficIn_;
}

std::vector<DescribeDBInstanceNetworkDetailResult::NetworkKey> DescribeDBInstanceNetworkDetailResult::getNetworkDetail()const
{
	return networkDetail_;
}

