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

#include <alibabacloud/smartag/model/DescribeSagWifiResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSagWifiResult::DescribeSagWifiResult() :
	ServiceResult()
{}

DescribeSagWifiResult::DescribeSagWifiResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSagWifiResult::~DescribeSagWifiResult()
{}

void DescribeSagWifiResult::parse(const std::string &payload)
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
	if(!value["IsEnable"].isNull())
		isEnable_ = value["IsEnable"].asString();
	if(!value["IsAuth"].isNull())
		isAuth_ = value["IsAuth"].asString();
	if(!value["Bandwidth"].isNull())
		bandwidth_ = value["Bandwidth"].asString();
	if(!value["Channel"].isNull())
		channel_ = value["Channel"].asString();
	if(!value["Ssid"].isNull())
		ssid_ = value["Ssid"].asString();
	if(!value["AuthenticationType"].isNull())
		authenticationType_ = value["AuthenticationType"].asString();
	if(!value["EncryptAlgorithm"].isNull())
		encryptAlgorithm_ = value["EncryptAlgorithm"].asString();
	if(!value["IsBroadcast"].isNull())
		isBroadcast_ = value["IsBroadcast"].asString();

}

std::string DescribeSagWifiResult::getIsEnable()const
{
	return isEnable_;
}

std::string DescribeSagWifiResult::getIsAuth()const
{
	return isAuth_;
}

std::string DescribeSagWifiResult::getBandwidth()const
{
	return bandwidth_;
}

std::string DescribeSagWifiResult::getChannel()const
{
	return channel_;
}

std::vector<DescribeSagWifiResult::TaskState> DescribeSagWifiResult::getTaskStates()const
{
	return taskStates_;
}

std::string DescribeSagWifiResult::getSsid()const
{
	return ssid_;
}

std::string DescribeSagWifiResult::getAuthenticationType()const
{
	return authenticationType_;
}

std::string DescribeSagWifiResult::getEncryptAlgorithm()const
{
	return encryptAlgorithm_;
}

std::string DescribeSagWifiResult::getIsBroadcast()const
{
	return isBroadcast_;
}

