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

#include <alibabacloud/polardb/model/CreateApplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

CreateApplicationResult::CreateApplicationResult() :
	ServiceResult()
{}

CreateApplicationResult::CreateApplicationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateApplicationResult::~CreateApplicationResult()
{}

void CreateApplicationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allComponentsNode = value["Components"]["Component"];
	for (auto valueComponentsComponent : allComponentsNode)
	{
		Component componentsObject;
		if(!valueComponentsComponent["ComponentId"].isNull())
			componentsObject.componentId = valueComponentsComponent["ComponentId"].asString();
		components_.push_back(componentsObject);
	}
	if(!value["ResourceAvailable"].isNull())
		resourceAvailable_ = value["ResourceAvailable"].asString() == "true";
	if(!value["ApplicationId"].isNull())
		applicationId_ = value["ApplicationId"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["OrderId"].isNull())
		orderId_ = value["OrderId"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::vector<CreateApplicationResult::Component> CreateApplicationResult::getComponents()const
{
	return components_;
}

std::string CreateApplicationResult::getDescription()const
{
	return description_;
}

std::string CreateApplicationResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

bool CreateApplicationResult::getResourceAvailable()const
{
	return resourceAvailable_;
}

std::string CreateApplicationResult::getApplicationId()const
{
	return applicationId_;
}

std::string CreateApplicationResult::getOrderId()const
{
	return orderId_;
}

