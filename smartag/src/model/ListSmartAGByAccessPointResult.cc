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

#include <alibabacloud/smartag/model/ListSmartAGByAccessPointResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

ListSmartAGByAccessPointResult::ListSmartAGByAccessPointResult() :
	ServiceResult()
{}

ListSmartAGByAccessPointResult::ListSmartAGByAccessPointResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSmartAGByAccessPointResult::~ListSmartAGByAccessPointResult()
{}

void ListSmartAGByAccessPointResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSmartAccessGatewaysNode = value["SmartAccessGateways"]["SmartAccessGateway"];
	for (auto valueSmartAccessGatewaysSmartAccessGateway : allSmartAccessGatewaysNode)
	{
		SmartAccessGateway smartAccessGatewaysObject;
		if(!valueSmartAccessGatewaysSmartAccessGateway["RoutingStrategy"].isNull())
			smartAccessGatewaysObject.routingStrategy = valueSmartAccessGatewaysSmartAccessGateway["RoutingStrategy"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["SmartAGName"].isNull())
			smartAccessGatewaysObject.smartAGName = valueSmartAccessGatewaysSmartAccessGateway["SmartAGName"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["SmartAGId"].isNull())
			smartAccessGatewaysObject.smartAGId = valueSmartAccessGatewaysSmartAccessGateway["SmartAGId"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["SmartAGStatus"].isNull())
			smartAccessGatewaysObject.smartAGStatus = valueSmartAccessGatewaysSmartAccessGateway["SmartAGStatus"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["SmartAGDescription"].isNull())
			smartAccessGatewaysObject.smartAGDescription = valueSmartAccessGatewaysSmartAccessGateway["SmartAGDescription"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["AssociatedCcnId"].isNull())
			smartAccessGatewaysObject.associatedCcnId = valueSmartAccessGatewaysSmartAccessGateway["AssociatedCcnId"].asString();
		if(!valueSmartAccessGatewaysSmartAccessGateway["HardwareVersion"].isNull())
			smartAccessGatewaysObject.hardwareVersion = valueSmartAccessGatewaysSmartAccessGateway["HardwareVersion"].asString();
		smartAccessGateways_.push_back(smartAccessGatewaysObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListSmartAGByAccessPointResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListSmartAGByAccessPointResult::SmartAccessGateway> ListSmartAGByAccessPointResult::getSmartAccessGateways()const
{
	return smartAccessGateways_;
}

