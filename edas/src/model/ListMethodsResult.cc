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

#include <alibabacloud/edas/model/ListMethodsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListMethodsResult::ListMethodsResult() :
	ServiceResult()
{}

ListMethodsResult::ListMethodsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMethodsResult::~ListMethodsResult()
{}

void ListMethodsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allServiceMethodListNode = value["ServiceMethodList"]["ServiceMethod"];
	for (auto valueServiceMethodListServiceMethod : allServiceMethodListNode)
	{
		ServiceMethod serviceMethodListObject;
		if(!valueServiceMethodListServiceMethod["AppName"].isNull())
			serviceMethodListObject.appName = valueServiceMethodListServiceMethod["AppName"].asString();
		if(!valueServiceMethodListServiceMethod["ServiceName"].isNull())
			serviceMethodListObject.serviceName = valueServiceMethodListServiceMethod["ServiceName"].asString();
		if(!valueServiceMethodListServiceMethod["MethodName"].isNull())
			serviceMethodListObject.methodName = valueServiceMethodListServiceMethod["MethodName"].asString();
		if(!valueServiceMethodListServiceMethod["Output"].isNull())
			serviceMethodListObject.output = valueServiceMethodListServiceMethod["Output"].asString();
		auto allInputParams = value["InputParams"]["InputParam"];
		for (auto value : allInputParams)
			serviceMethodListObject.inputParams.push_back(value.asString());
		auto allParamTypes = value["ParamTypes"]["ParamType"];
		for (auto value : allParamTypes)
			serviceMethodListObject.paramTypes.push_back(value.asString());
		serviceMethodList_.push_back(serviceMethodListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListMethodsResult::getMessage()const
{
	return message_;
}

std::vector<ListMethodsResult::ServiceMethod> ListMethodsResult::getServiceMethodList()const
{
	return serviceMethodList_;
}

int ListMethodsResult::getCode()const
{
	return code_;
}

