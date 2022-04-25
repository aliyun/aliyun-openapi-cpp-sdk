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

#include <alibabacloud/dataworks-public/model/GetInstanceErrorRankResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetInstanceErrorRankResult::GetInstanceErrorRankResult() :
	ServiceResult()
{}

GetInstanceErrorRankResult::GetInstanceErrorRankResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceErrorRankResult::~GetInstanceErrorRankResult()
{}

void GetInstanceErrorRankResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto instanceErrorRankNode = value["InstanceErrorRank"];
	if(!instanceErrorRankNode["UpdateTime"].isNull())
		instanceErrorRank_.updateTime = std::stol(instanceErrorRankNode["UpdateTime"].asString());
	auto allErrorRankNode = instanceErrorRankNode["ErrorRank"]["ErrorRankItem"];
	for (auto instanceErrorRankNodeErrorRankErrorRankItem : allErrorRankNode)
	{
		InstanceErrorRank::ErrorRankItem errorRankItemObject;
		if(!instanceErrorRankNodeErrorRankErrorRankItem["Owner"].isNull())
			errorRankItemObject.owner = instanceErrorRankNodeErrorRankErrorRankItem["Owner"].asString();
		if(!instanceErrorRankNodeErrorRankErrorRankItem["NodeName"].isNull())
			errorRankItemObject.nodeName = instanceErrorRankNodeErrorRankErrorRankItem["NodeName"].asString();
		if(!instanceErrorRankNodeErrorRankErrorRankItem["ProjectId"].isNull())
			errorRankItemObject.projectId = std::stol(instanceErrorRankNodeErrorRankErrorRankItem["ProjectId"].asString());
		if(!instanceErrorRankNodeErrorRankErrorRankItem["NodeId"].isNull())
			errorRankItemObject.nodeId = std::stol(instanceErrorRankNodeErrorRankErrorRankItem["NodeId"].asString());
		if(!instanceErrorRankNodeErrorRankErrorRankItem["Count"].isNull())
			errorRankItemObject.count = std::stoi(instanceErrorRankNodeErrorRankErrorRankItem["Count"].asString());
		if(!instanceErrorRankNodeErrorRankErrorRankItem["PrgType"].isNull())
			errorRankItemObject.prgType = std::stoi(instanceErrorRankNodeErrorRankErrorRankItem["PrgType"].asString());
		instanceErrorRank_.errorRank.push_back(errorRankItemObject);
	}

}

GetInstanceErrorRankResult::InstanceErrorRank GetInstanceErrorRankResult::getInstanceErrorRank()const
{
	return instanceErrorRank_;
}

