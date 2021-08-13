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

#include <alibabacloud/smartag/model/DescribeSagUserDnsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSagUserDnsResult::DescribeSagUserDnsResult() :
	ServiceResult()
{}

DescribeSagUserDnsResult::DescribeSagUserDnsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSagUserDnsResult::~DescribeSagUserDnsResult()
{}

void DescribeSagUserDnsResult::parse(const std::string &payload)
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
	if(!value["SlaveDns"].isNull())
		slaveDns_ = value["SlaveDns"].asString();
	if(!value["MasterDns"].isNull())
		masterDns_ = value["MasterDns"].asString();

}

std::string DescribeSagUserDnsResult::getSlaveDns()const
{
	return slaveDns_;
}

std::vector<DescribeSagUserDnsResult::TaskState> DescribeSagUserDnsResult::getTaskStates()const
{
	return taskStates_;
}

std::string DescribeSagUserDnsResult::getMasterDns()const
{
	return masterDns_;
}

