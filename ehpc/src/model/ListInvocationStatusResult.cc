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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allInvokeInstances = value["InvokeInstances"]["InvokeInstance"];
	for (auto value : allInvokeInstances)
	{
		InvokeInstance invokeInstancesObject;
		if(!value["InstanceId"].isNull())
			invokeInstancesObject.instanceId = value["InstanceId"].asString();
		if(!value["InstanceInvokeStatus"].isNull())
			invokeInstancesObject.instanceInvokeStatus = value["InstanceInvokeStatus"].asString();
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

