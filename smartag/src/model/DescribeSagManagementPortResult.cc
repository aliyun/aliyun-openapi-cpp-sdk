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

#include <alibabacloud/smartag/model/DescribeSagManagementPortResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSagManagementPortResult::DescribeSagManagementPortResult() :
	ServiceResult()
{}

DescribeSagManagementPortResult::DescribeSagManagementPortResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSagManagementPortResult::~DescribeSagManagementPortResult()
{}

void DescribeSagManagementPortResult::parse(const std::string &payload)
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
	if(!value["Gateway"].isNull())
		gateway_ = value["Gateway"].asString();
	if(!value["IP"].isNull())
		iP_ = value["IP"].asString();
	if(!value["Mask"].isNull())
		mask_ = value["Mask"].asString();

}

std::string DescribeSagManagementPortResult::getGateway()const
{
	return gateway_;
}

std::string DescribeSagManagementPortResult::getIP()const
{
	return iP_;
}

std::string DescribeSagManagementPortResult::getMask()const
{
	return mask_;
}

std::vector<DescribeSagManagementPortResult::TaskState> DescribeSagManagementPortResult::getTaskStates()const
{
	return taskStates_;
}

