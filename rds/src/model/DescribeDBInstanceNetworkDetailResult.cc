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
		NetworkKey networkKeyObject;
		networkKeyObject.key = value["Key"].asString();
		networkKeyObject.unit = value["Unit"].asString();
		auto allValues = value["Values"]["NetworkValue"];
		for (auto value : allValues)
		{
			NetworkKey::NetworkValue networkValueObject;
			networkValueObject.value = value["Value"].asString();
			networkValueObject.dateTime = value["DateTime"].asString();
			networkKeyObject.values.push_back(networkValueObject);
		}
		networkDetail_.push_back(networkKeyObject);
	}
	dBInstanceId_ = value["DBInstanceId"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();
	newConnection_ = value["NewConnection"].asString();
	activeConnection_ = value["ActiveConnection"].asString();
	abortedConnection_ = value["AbortedConnection"].asString();
	networkRequest_ = value["NetworkRequest"].asString();
	networkTrafficIn_ = value["NetworkTrafficIn"].asString();
	networkTrafficOut_ = value["NetworkTrafficOut"].asString();
	networkLatency_ = value["NetworkLatency"].asString();
	backendLatency_ = value["BackendLatency"].asString();
	networkErrors_ = value["NetworkErrors"].asString();

}

std::string DescribeDBInstanceNetworkDetailResult::getEndTime()const
{
	return endTime_;
}

void DescribeDBInstanceNetworkDetailResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeDBInstanceNetworkDetailResult::getNetworkLatency()const
{
	return networkLatency_;
}

void DescribeDBInstanceNetworkDetailResult::setNetworkLatency(const std::string& networkLatency)
{
	networkLatency_ = networkLatency;
}

std::string DescribeDBInstanceNetworkDetailResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDBInstanceNetworkDetailResult::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
}

std::string DescribeDBInstanceNetworkDetailResult::getNetworkTrafficOut()const
{
	return networkTrafficOut_;
}

void DescribeDBInstanceNetworkDetailResult::setNetworkTrafficOut(const std::string& networkTrafficOut)
{
	networkTrafficOut_ = networkTrafficOut;
}

std::string DescribeDBInstanceNetworkDetailResult::getActiveConnection()const
{
	return activeConnection_;
}

void DescribeDBInstanceNetworkDetailResult::setActiveConnection(const std::string& activeConnection)
{
	activeConnection_ = activeConnection;
}

std::string DescribeDBInstanceNetworkDetailResult::getNetworkErrors()const
{
	return networkErrors_;
}

void DescribeDBInstanceNetworkDetailResult::setNetworkErrors(const std::string& networkErrors)
{
	networkErrors_ = networkErrors;
}

std::string DescribeDBInstanceNetworkDetailResult::getStartTime()const
{
	return startTime_;
}

void DescribeDBInstanceNetworkDetailResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

std::string DescribeDBInstanceNetworkDetailResult::getNetworkRequest()const
{
	return networkRequest_;
}

void DescribeDBInstanceNetworkDetailResult::setNetworkRequest(const std::string& networkRequest)
{
	networkRequest_ = networkRequest;
}

std::string DescribeDBInstanceNetworkDetailResult::getNewConnection()const
{
	return newConnection_;
}

void DescribeDBInstanceNetworkDetailResult::setNewConnection(const std::string& newConnection)
{
	newConnection_ = newConnection;
}

std::string DescribeDBInstanceNetworkDetailResult::getNetworkTrafficIn()const
{
	return networkTrafficIn_;
}

void DescribeDBInstanceNetworkDetailResult::setNetworkTrafficIn(const std::string& networkTrafficIn)
{
	networkTrafficIn_ = networkTrafficIn;
}

std::string DescribeDBInstanceNetworkDetailResult::getAbortedConnection()const
{
	return abortedConnection_;
}

void DescribeDBInstanceNetworkDetailResult::setAbortedConnection(const std::string& abortedConnection)
{
	abortedConnection_ = abortedConnection;
}

std::string DescribeDBInstanceNetworkDetailResult::getBackendLatency()const
{
	return backendLatency_;
}

void DescribeDBInstanceNetworkDetailResult::setBackendLatency(const std::string& backendLatency)
{
	backendLatency_ = backendLatency;
}

