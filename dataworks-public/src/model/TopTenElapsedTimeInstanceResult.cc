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

#include <alibabacloud/dataworks-public/model/TopTenElapsedTimeInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

TopTenElapsedTimeInstanceResult::TopTenElapsedTimeInstanceResult() :
	ServiceResult()
{}

TopTenElapsedTimeInstanceResult::TopTenElapsedTimeInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TopTenElapsedTimeInstanceResult::~TopTenElapsedTimeInstanceResult()
{}

void TopTenElapsedTimeInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto instanceConsumeTimeRankNode = value["InstanceConsumeTimeRank"];
	if(!instanceConsumeTimeRankNode["UpdateTime"].isNull())
		instanceConsumeTimeRank_.updateTime = std::stol(instanceConsumeTimeRankNode["UpdateTime"].asString());
	auto allConsumeTimeRankNode = instanceConsumeTimeRankNode["ConsumeTimeRank"]["ConsumeTimeRankItem"];
	for (auto instanceConsumeTimeRankNodeConsumeTimeRankConsumeTimeRankItem : allConsumeTimeRankNode)
	{
		InstanceConsumeTimeRank::ConsumeTimeRankItem consumeTimeRankItemObject;
		if(!instanceConsumeTimeRankNodeConsumeTimeRankConsumeTimeRankItem["Owner"].isNull())
			consumeTimeRankItemObject.owner = instanceConsumeTimeRankNodeConsumeTimeRankConsumeTimeRankItem["Owner"].asString();
		if(!instanceConsumeTimeRankNodeConsumeTimeRankConsumeTimeRankItem["NodeName"].isNull())
			consumeTimeRankItemObject.nodeName = instanceConsumeTimeRankNodeConsumeTimeRankConsumeTimeRankItem["NodeName"].asString();
		if(!instanceConsumeTimeRankNodeConsumeTimeRankConsumeTimeRankItem["BusinessDate"].isNull())
			consumeTimeRankItemObject.businessDate = std::stol(instanceConsumeTimeRankNodeConsumeTimeRankConsumeTimeRankItem["BusinessDate"].asString());
		if(!instanceConsumeTimeRankNodeConsumeTimeRankConsumeTimeRankItem["ProgramType"].isNull())
			consumeTimeRankItemObject.programType = std::stoi(instanceConsumeTimeRankNodeConsumeTimeRankConsumeTimeRankItem["ProgramType"].asString());
		if(!instanceConsumeTimeRankNodeConsumeTimeRankConsumeTimeRankItem["InstanceId"].isNull())
			consumeTimeRankItemObject.instanceId = std::stol(instanceConsumeTimeRankNodeConsumeTimeRankConsumeTimeRankItem["InstanceId"].asString());
		if(!instanceConsumeTimeRankNodeConsumeTimeRankConsumeTimeRankItem["NodeId"].isNull())
			consumeTimeRankItemObject.nodeId = std::stol(instanceConsumeTimeRankNodeConsumeTimeRankConsumeTimeRankItem["NodeId"].asString());
		if(!instanceConsumeTimeRankNodeConsumeTimeRankConsumeTimeRankItem["Consumed"].isNull())
			consumeTimeRankItemObject.consumed = std::stol(instanceConsumeTimeRankNodeConsumeTimeRankConsumeTimeRankItem["Consumed"].asString());
		instanceConsumeTimeRank_.consumeTimeRank.push_back(consumeTimeRankItemObject);
	}

}

TopTenElapsedTimeInstanceResult::InstanceConsumeTimeRank TopTenElapsedTimeInstanceResult::getInstanceConsumeTimeRank()const
{
	return instanceConsumeTimeRank_;
}

