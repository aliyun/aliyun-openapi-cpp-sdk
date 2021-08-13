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

#include <alibabacloud/smartag/model/DescribeSagWanListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSagWanListResult::DescribeSagWanListResult() :
	ServiceResult()
{}

DescribeSagWanListResult::DescribeSagWanListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSagWanListResult::~DescribeSagWanListResult()
{}

void DescribeSagWanListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWansNode = value["Wans"]["Wan"];
	for (auto valueWansWan : allWansNode)
	{
		Wan wansObject;
		if(!valueWansWan["Weight"].isNull())
			wansObject.weight = std::stoi(valueWansWan["Weight"].asString());
		if(!valueWansWan["Mask"].isNull())
			wansObject.mask = valueWansWan["Mask"].asString();
		if(!valueWansWan["Gateway"].isNull())
			wansObject.gateway = valueWansWan["Gateway"].asString();
		if(!valueWansWan["PortName"].isNull())
			wansObject.portName = valueWansWan["PortName"].asString();
		if(!valueWansWan["IPType"].isNull())
			wansObject.iPType = valueWansWan["IPType"].asString();
		if(!valueWansWan["Priority"].isNull())
			wansObject.priority = std::stoi(valueWansWan["Priority"].asString());
		if(!valueWansWan["BandWidth"].isNull())
			wansObject.bandWidth = std::stoi(valueWansWan["BandWidth"].asString());
		if(!valueWansWan["TrafficState"].isNull())
			wansObject.trafficState = valueWansWan["TrafficState"].asString();
		if(!valueWansWan["IP"].isNull())
			wansObject.iP = valueWansWan["IP"].asString();
		if(!valueWansWan["ISP"].isNull())
			wansObject.iSP = valueWansWan["ISP"].asString();
		if(!valueWansWan["Username"].isNull())
			wansObject.username = valueWansWan["Username"].asString();
		if(!valueWansWan["Vlan"].isNull())
			wansObject.vlan = valueWansWan["Vlan"].asString();
		if(!valueWansWan["SourceIps"].isNull())
			wansObject.sourceIps = valueWansWan["SourceIps"].asString();
		if(!valueWansWan["StartIp"].isNull())
			wansObject.startIp = valueWansWan["StartIp"].asString();
		if(!valueWansWan["StopIp"].isNull())
			wansObject.stopIp = valueWansWan["StopIp"].asString();
		wans_.push_back(wansObject);
	}
	auto allTaskStatesNode = value["TaskStates"]["TaskState"];
	for (auto valueTaskStatesTaskState : allTaskStatesNode)
	{
		TaskState taskStatesObject;
		if(!valueTaskStatesTaskState["ErrorMessage"].isNull())
			taskStatesObject.errorMessage = valueTaskStatesTaskState["ErrorMessage"].asString();
		if(!valueTaskStatesTaskState["State"].isNull())
			taskStatesObject.state = valueTaskStatesTaskState["State"].asString();
		if(!valueTaskStatesTaskState["ErrorCode"].isNull())
			taskStatesObject.errorCode = valueTaskStatesTaskState["ErrorCode"].asString();
		if(!valueTaskStatesTaskState["CreateTime"].isNull())
			taskStatesObject.createTime = valueTaskStatesTaskState["CreateTime"].asString();
		taskStates_.push_back(taskStatesObject);
	}

}

std::vector<DescribeSagWanListResult::Wan> DescribeSagWanListResult::getWans()const
{
	return wans_;
}

std::vector<DescribeSagWanListResult::TaskState> DescribeSagWanListResult::getTaskStates()const
{
	return taskStates_;
}

