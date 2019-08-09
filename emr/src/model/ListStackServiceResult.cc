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

#include <alibabacloud/emr/model/ListStackServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListStackServiceResult::ListStackServiceResult() :
	ServiceResult()
{}

ListStackServiceResult::ListStackServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListStackServiceResult::~ListStackServiceResult()
{}

void ListStackServiceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allServiceList = value["ServiceList"]["Service"];
	for (auto value : allServiceList)
	{
		Service serviceListObject;
		if(!value["ServiceName"].isNull())
			serviceListObject.serviceName = value["ServiceName"].asString();
		if(!value["DisplayName"].isNull())
			serviceListObject.displayName = value["DisplayName"].asString();
		if(!value["Version"].isNull())
			serviceListObject.version = value["Version"].asString();
		if(!value["EcmVersion"].isNull())
			serviceListObject.ecmVersion = value["EcmVersion"].asString();
		if(!value["Comment"].isNull())
			serviceListObject.comment = value["Comment"].asString();
		auto allComponentList = value["ComponentList"]["Component"];
		for (auto value : allComponentList)
		{
			Service::Component componentListObject;
			if(!value["ComponentName"].isNull())
				componentListObject.componentName = value["ComponentName"].asString();
			if(!value["ComponentDisplayName"].isNull())
				componentListObject.componentDisplayName = value["ComponentDisplayName"].asString();
			serviceListObject.componentList.push_back(componentListObject);
		}
		serviceList_.push_back(serviceListObject);
	}
	if(!value["StackName"].isNull())
		stackName_ = value["StackName"].asString();
	if(!value["StackVersion"].isNull())
		stackVersion_ = value["StackVersion"].asString();

}

std::vector<ListStackServiceResult::Service> ListStackServiceResult::getServiceList()const
{
	return serviceList_;
}

std::string ListStackServiceResult::getStackName()const
{
	return stackName_;
}

std::string ListStackServiceResult::getStackVersion()const
{
	return stackVersion_;
}

