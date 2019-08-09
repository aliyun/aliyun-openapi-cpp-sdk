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

#include <alibabacloud/emr/model/PlanComponentTopoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

PlanComponentTopoResult::PlanComponentTopoResult() :
	ServiceResult()
{}

PlanComponentTopoResult::PlanComponentTopoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PlanComponentTopoResult::~PlanComponentTopoResult()
{}

void PlanComponentTopoResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allHostComponentList = value["HostComponentList"]["HostComponent"];
	for (auto value : allHostComponentList)
	{
		HostComponent hostComponentListObject;
		if(!value["ComponentName"].isNull())
			hostComponentListObject.componentName = value["ComponentName"].asString();
		if(!value["ServiceName"].isNull())
			hostComponentListObject.serviceName = value["ServiceName"].asString();
		if(!value["ServiceVersion"].isNull())
			hostComponentListObject.serviceVersion = value["ServiceVersion"].asString();
		if(!value["ServiceEcmVersion"].isNull())
			hostComponentListObject.serviceEcmVersion = value["ServiceEcmVersion"].asString();
		if(!value["ReadOnly"].isNull())
			hostComponentListObject.readOnly = value["ReadOnly"].asString() == "true";
		if(!value["Display"].isNull())
			hostComponentListObject.display = value["Display"].asString() == "true";
		auto allHostNameList = value["HostNameList"]["HostName"];
		for (auto value : allHostNameList)
			hostComponentListObject.hostNameList.push_back(value.asString());
		hostComponentList_.push_back(hostComponentListObject);
	}

}

std::vector<PlanComponentTopoResult::HostComponent> PlanComponentTopoResult::getHostComponentList()const
{
	return hostComponentList_;
}

