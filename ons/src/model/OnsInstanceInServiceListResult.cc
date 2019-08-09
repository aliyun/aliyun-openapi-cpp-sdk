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

#include <alibabacloud/ons/model/OnsInstanceInServiceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

OnsInstanceInServiceListResult::OnsInstanceInServiceListResult() :
	ServiceResult()
{}

OnsInstanceInServiceListResult::OnsInstanceInServiceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnsInstanceInServiceListResult::~OnsInstanceInServiceListResult()
{}

void OnsInstanceInServiceListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allData = value["Data"]["InstanceVO"];
	for (auto value : allData)
	{
		InstanceVO dataObject;
		if(!value["InstanceId"].isNull())
			dataObject.instanceId = value["InstanceId"].asString();
		if(!value["InstanceStatus"].isNull())
			dataObject.instanceStatus = std::stoi(value["InstanceStatus"].asString());
		if(!value["ReleaseTime"].isNull())
			dataObject.releaseTime = std::stol(value["ReleaseTime"].asString());
		if(!value["InstanceType"].isNull())
			dataObject.instanceType = std::stoi(value["InstanceType"].asString());
		if(!value["InstanceName"].isNull())
			dataObject.instanceName = value["InstanceName"].asString();
		if(!value["IndependentNaming"].isNull())
			dataObject.independentNaming = value["IndependentNaming"].asString() == "true";
		data_.push_back(dataObject);
	}
	if(!value["HelpUrl"].isNull())
		helpUrl_ = value["HelpUrl"].asString();

}

std::vector<OnsInstanceInServiceListResult::InstanceVO> OnsInstanceInServiceListResult::getData()const
{
	return data_;
}

std::string OnsInstanceInServiceListResult::getHelpUrl()const
{
	return helpUrl_;
}

