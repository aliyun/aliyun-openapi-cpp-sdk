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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["InstanceVO"];
	for (auto valueDataInstanceVO : allDataNode)
	{
		InstanceVO dataObject;
		if(!valueDataInstanceVO["InstanceId"].isNull())
			dataObject.instanceId = valueDataInstanceVO["InstanceId"].asString();
		if(!valueDataInstanceVO["InstanceStatus"].isNull())
			dataObject.instanceStatus = std::stoi(valueDataInstanceVO["InstanceStatus"].asString());
		if(!valueDataInstanceVO["ReleaseTime"].isNull())
			dataObject.releaseTime = std::stol(valueDataInstanceVO["ReleaseTime"].asString());
		if(!valueDataInstanceVO["InstanceType"].isNull())
			dataObject.instanceType = std::stoi(valueDataInstanceVO["InstanceType"].asString());
		if(!valueDataInstanceVO["InstanceName"].isNull())
			dataObject.instanceName = valueDataInstanceVO["InstanceName"].asString();
		if(!valueDataInstanceVO["IndependentNaming"].isNull())
			dataObject.independentNaming = valueDataInstanceVO["IndependentNaming"].asString() == "true";
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

