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

#include <alibabacloud/adb/model/DescribeDBClusterHealthStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeDBClusterHealthStatusResult::DescribeDBClusterHealthStatusResult() :
	ServiceResult()
{}

DescribeDBClusterHealthStatusResult::DescribeDBClusterHealthStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterHealthStatusResult::~DescribeDBClusterHealthStatusResult()
{}

void DescribeDBClusterHealthStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto cSNode = value["CS"];
	if(!cSNode["ActiveCount"].isNull())
		cS_.activeCount = std::stol(cSNode["ActiveCount"].asString());
	if(!cSNode["UnavailableCount"].isNull())
		cS_.unavailableCount = std::stol(cSNode["UnavailableCount"].asString());
	if(!cSNode["RiskCount"].isNull())
		cS_.riskCount = std::stol(cSNode["RiskCount"].asString());
	if(!cSNode["ExpectedCount"].isNull())
		cS_.expectedCount = std::stol(cSNode["ExpectedCount"].asString());
	if(!cSNode["Status"].isNull())
		cS_.status = cSNode["Status"].asString();
	auto executorNode = value["Executor"];
	if(!executorNode["ActiveCount"].isNull())
		executor_.activeCount = std::stol(executorNode["ActiveCount"].asString());
	if(!executorNode["UnavailableCount"].isNull())
		executor_.unavailableCount = std::stol(executorNode["UnavailableCount"].asString());
	if(!executorNode["RiskCount"].isNull())
		executor_.riskCount = std::stol(executorNode["RiskCount"].asString());
	if(!executorNode["ExpectedCount"].isNull())
		executor_.expectedCount = std::stol(executorNode["ExpectedCount"].asString());
	if(!executorNode["Status"].isNull())
		executor_.status = executorNode["Status"].asString();
	auto workerNode = value["Worker"];
	if(!workerNode["ActiveCount"].isNull())
		worker_.activeCount = std::stol(workerNode["ActiveCount"].asString());
	if(!workerNode["UnavailableCount"].isNull())
		worker_.unavailableCount = std::stol(workerNode["UnavailableCount"].asString());
	if(!workerNode["RiskCount"].isNull())
		worker_.riskCount = std::stol(workerNode["RiskCount"].asString());
	if(!workerNode["ExpectedCount"].isNull())
		worker_.expectedCount = std::stol(workerNode["ExpectedCount"].asString());
	if(!workerNode["Status"].isNull())
		worker_.status = workerNode["Status"].asString();
	if(!value["InstanceStatus"].isNull())
		instanceStatus_ = value["InstanceStatus"].asString();

}

DescribeDBClusterHealthStatusResult::CS DescribeDBClusterHealthStatusResult::getCS()const
{
	return cS_;
}

DescribeDBClusterHealthStatusResult::Executor DescribeDBClusterHealthStatusResult::getExecutor()const
{
	return executor_;
}

std::string DescribeDBClusterHealthStatusResult::getInstanceStatus()const
{
	return instanceStatus_;
}

DescribeDBClusterHealthStatusResult::Worker DescribeDBClusterHealthStatusResult::getWorker()const
{
	return worker_;
}

