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

#include <alibabacloud/cbn/model/ListTransitRouterAvailableResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

ListTransitRouterAvailableResourceResult::ListTransitRouterAvailableResourceResult() :
	ServiceResult()
{}

ListTransitRouterAvailableResourceResult::ListTransitRouterAvailableResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTransitRouterAvailableResourceResult::~ListTransitRouterAvailableResourceResult()
{}

void ListTransitRouterAvailableResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSlaveZones = value["SlaveZones"]["SlaveZone"];
	for (const auto &item : allSlaveZones)
		slaveZones_.push_back(item.asString());
	auto allMasterZones = value["MasterZones"]["MasterZone"];
	for (const auto &item : allMasterZones)
		masterZones_.push_back(item.asString());
	auto allAvailableZones = value["AvailableZones"]["AvailableZone"];
	for (const auto &item : allAvailableZones)
		availableZones_.push_back(item.asString());
	if(!value["SupportMulticast"].isNull())
		supportMulticast_ = value["SupportMulticast"].asString() == "true";

}

std::vector<std::string> ListTransitRouterAvailableResourceResult::getSlaveZones()const
{
	return slaveZones_;
}

bool ListTransitRouterAvailableResourceResult::getSupportMulticast()const
{
	return supportMulticast_;
}

std::vector<std::string> ListTransitRouterAvailableResourceResult::getMasterZones()const
{
	return masterZones_;
}

std::vector<std::string> ListTransitRouterAvailableResourceResult::getAvailableZones()const
{
	return availableZones_;
}

