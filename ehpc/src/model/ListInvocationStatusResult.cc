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

#include <alibabacloud/ehpc/model/ListInvocationStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListInvocationStatusResult::ListInvocationStatusResult() :
	ServiceResult()
{}

ListInvocationStatusResult::ListInvocationStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInvocationStatusResult::~ListInvocationStatusResult()
{}

void ListInvocationStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInvokeInstancesNode = value["InvokeInstances"]["InvokeInstance"];
	for (auto valueInvokeInstancesInvokeInstance : allInvokeInstancesNode)
	{
		InvokeInstance invokeInstancesObject;
		if(!valueInvokeInstancesInvokeInstance["InstanceId"].isNull())
			invokeInstancesObject.instanceId = valueInvokeInstancesInvokeInstance["InstanceId"].asString();
		if(!valueInvokeInstancesInvokeInstance["InstanceInvokeStatus"].isNull())
			invokeInstancesObject.instanceInvokeStatus = valueInvokeInstancesInvokeInstance["InstanceInvokeStatus"].asString();
		invokeInstances_.push_back(invokeInstancesObject);
	}
	if(!value["CommandId"].isNull())
		commandId_ = value["CommandId"].asString();
	if(!value["InvokeStatus"].isNull())
		invokeStatus_ = value["InvokeStatus"].asString();

}

std::string ListInvocationStatusResult::getInvokeStatus()const
{
	return invokeStatus_;
}

std::string ListInvocationStatusResult::getCommandId()const
{
	return commandId_;
}

std::vector<ListInvocationStatusResult::InvokeInstance> ListInvocationStatusResult::getInvokeInstances()const
{
	return invokeInstances_;
}

