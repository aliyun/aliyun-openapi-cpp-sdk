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

#include <alibabacloud/smartag/model/DescribeSagExpressConnectInterfaceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSagExpressConnectInterfaceListResult::DescribeSagExpressConnectInterfaceListResult() :
	ServiceResult()
{}

DescribeSagExpressConnectInterfaceListResult::DescribeSagExpressConnectInterfaceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSagExpressConnectInterfaceListResult::~DescribeSagExpressConnectInterfaceListResult()
{}

void DescribeSagExpressConnectInterfaceListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInterfacesNode = value["Interfaces"]["Interface"];
	for (auto valueInterfacesInterface : allInterfacesNode)
	{
		Interface interfacesObject;
		if(!valueInterfacesInterface["Mask"].isNull())
			interfacesObject.mask = valueInterfacesInterface["Mask"].asString();
		if(!valueInterfacesInterface["Vlan"].isNull())
			interfacesObject.vlan = valueInterfacesInterface["Vlan"].asString();
		if(!valueInterfacesInterface["IP"].isNull())
			interfacesObject.iP = valueInterfacesInterface["IP"].asString();
		interfaces_.push_back(interfacesObject);
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

std::vector<DescribeSagExpressConnectInterfaceListResult::Interface> DescribeSagExpressConnectInterfaceListResult::getInterfaces()const
{
	return interfaces_;
}

std::vector<DescribeSagExpressConnectInterfaceListResult::TaskState> DescribeSagExpressConnectInterfaceListResult::getTaskStates()const
{
	return taskStates_;
}

