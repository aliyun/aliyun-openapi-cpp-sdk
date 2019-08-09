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

#include <alibabacloud/emr/model/ListRequiredServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListRequiredServiceResult::ListRequiredServiceResult() :
	ServiceResult()
{}

ListRequiredServiceResult::ListRequiredServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRequiredServiceResult::~ListRequiredServiceResult()
{}

void ListRequiredServiceResult::parse(const std::string &payload)
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
		if(!value["ServiceDisplayName"].isNull())
			serviceListObject.serviceDisplayName = value["ServiceDisplayName"].asString();
		serviceList_.push_back(serviceListObject);
	}
	if(!value["NeedOtherService"].isNull())
		needOtherService_ = value["NeedOtherService"].asString() == "true";

}

std::vector<ListRequiredServiceResult::Service> ListRequiredServiceResult::getServiceList()const
{
	return serviceList_;
}

bool ListRequiredServiceResult::getNeedOtherService()const
{
	return needOtherService_;
}

