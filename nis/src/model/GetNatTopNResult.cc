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

#include <alibabacloud/nis/model/GetNatTopNResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nis;
using namespace AlibabaCloud::Nis::Model;

GetNatTopNResult::GetNatTopNResult() :
	ServiceResult()
{}

GetNatTopNResult::GetNatTopNResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNatTopNResult::~GetNatTopNResult()
{}

void GetNatTopNResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNatGatewayTopNNode = value["NatGatewayTopN"]["NatGatewayTopNItem"];
	for (auto valueNatGatewayTopNNatGatewayTopNItem : allNatGatewayTopNNode)
	{
		NatGatewayTopNItem natGatewayTopNObject;
		if(!valueNatGatewayTopNNatGatewayTopNItem["Ip"].isNull())
			natGatewayTopNObject.ip = valueNatGatewayTopNNatGatewayTopNItem["Ip"].asString();
		if(!valueNatGatewayTopNNatGatewayTopNItem["InBps"].isNull())
			natGatewayTopNObject.inBps = std::stof(valueNatGatewayTopNNatGatewayTopNItem["InBps"].asString());
		if(!valueNatGatewayTopNNatGatewayTopNItem["OutBps"].isNull())
			natGatewayTopNObject.outBps = std::stof(valueNatGatewayTopNNatGatewayTopNItem["OutBps"].asString());
		if(!valueNatGatewayTopNNatGatewayTopNItem["InPps"].isNull())
			natGatewayTopNObject.inPps = std::stof(valueNatGatewayTopNNatGatewayTopNItem["InPps"].asString());
		if(!valueNatGatewayTopNNatGatewayTopNItem["OutPps"].isNull())
			natGatewayTopNObject.outPps = std::stof(valueNatGatewayTopNNatGatewayTopNItem["OutPps"].asString());
		if(!valueNatGatewayTopNNatGatewayTopNItem["InFlowPerMinute"].isNull())
			natGatewayTopNObject.inFlowPerMinute = std::stof(valueNatGatewayTopNNatGatewayTopNItem["InFlowPerMinute"].asString());
		if(!valueNatGatewayTopNNatGatewayTopNItem["OutFlowPerMinute"].isNull())
			natGatewayTopNObject.outFlowPerMinute = std::stof(valueNatGatewayTopNNatGatewayTopNItem["OutFlowPerMinute"].asString());
		if(!valueNatGatewayTopNNatGatewayTopNItem["NewSessionPerSecond"].isNull())
			natGatewayTopNObject.newSessionPerSecond = std::stof(valueNatGatewayTopNNatGatewayTopNItem["NewSessionPerSecond"].asString());
		if(!valueNatGatewayTopNNatGatewayTopNItem["ActiveSessionCount"].isNull())
			natGatewayTopNObject.activeSessionCount = std::stof(valueNatGatewayTopNNatGatewayTopNItem["ActiveSessionCount"].asString());
		natGatewayTopN_.push_back(natGatewayTopNObject);
	}
	if(!value["IsTopNOpen"].isNull())
		isTopNOpen_ = value["IsTopNOpen"].asString() == "true";

}

std::vector<GetNatTopNResult::NatGatewayTopNItem> GetNatTopNResult::getNatGatewayTopN()const
{
	return natGatewayTopN_;
}

bool GetNatTopNResult::getIsTopNOpen()const
{
	return isTopNOpen_;
}

