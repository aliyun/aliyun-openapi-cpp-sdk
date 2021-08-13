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

#include <alibabacloud/smartag/model/DescribeSagLanListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSagLanListResult::DescribeSagLanListResult() :
	ServiceResult()
{}

DescribeSagLanListResult::DescribeSagLanListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSagLanListResult::~DescribeSagLanListResult()
{}

void DescribeSagLanListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
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
	auto allLansNode = value["Lans"]["Lan"];
	for (auto valueLansLan : allLansNode)
	{
		Lan lansObject;
		if(!valueLansLan["Lease"].isNull())
			lansObject.lease = valueLansLan["Lease"].asString();
		if(!valueLansLan["Mask"].isNull())
			lansObject.mask = valueLansLan["Mask"].asString();
		if(!valueLansLan["EndIp"].isNull())
			lansObject.endIp = valueLansLan["EndIp"].asString();
		if(!valueLansLan["PortName"].isNull())
			lansObject.portName = valueLansLan["PortName"].asString();
		if(!valueLansLan["StartIp"].isNull())
			lansObject.startIp = valueLansLan["StartIp"].asString();
		if(!valueLansLan["IPType"].isNull())
			lansObject.iPType = valueLansLan["IPType"].asString();
		if(!valueLansLan["IP"].isNull())
			lansObject.iP = valueLansLan["IP"].asString();
		lans_.push_back(lansObject);
	}

}

std::vector<DescribeSagLanListResult::TaskState> DescribeSagLanListResult::getTaskStates()const
{
	return taskStates_;
}

std::vector<DescribeSagLanListResult::Lan> DescribeSagLanListResult::getLans()const
{
	return lans_;
}

