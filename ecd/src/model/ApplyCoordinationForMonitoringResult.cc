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

#include <alibabacloud/ecd/model/ApplyCoordinationForMonitoringResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

ApplyCoordinationForMonitoringResult::ApplyCoordinationForMonitoringResult() :
	ServiceResult()
{}

ApplyCoordinationForMonitoringResult::ApplyCoordinationForMonitoringResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ApplyCoordinationForMonitoringResult::~ApplyCoordinationForMonitoringResult()
{}

void ApplyCoordinationForMonitoringResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCoordinateFlowModelsNode = value["CoordinateFlowModels"]["CoordinateFlowModel"];
	for (auto valueCoordinateFlowModelsCoordinateFlowModel : allCoordinateFlowModelsNode)
	{
		CoordinateFlowModel coordinateFlowModelsObject;
		if(!valueCoordinateFlowModelsCoordinateFlowModel["CoordinateStatus"].isNull())
			coordinateFlowModelsObject.coordinateStatus = valueCoordinateFlowModelsCoordinateFlowModel["CoordinateStatus"].asString();
		if(!valueCoordinateFlowModelsCoordinateFlowModel["InitiatorType"].isNull())
			coordinateFlowModelsObject.initiatorType = valueCoordinateFlowModelsCoordinateFlowModel["InitiatorType"].asString();
		if(!valueCoordinateFlowModelsCoordinateFlowModel["OwnerUserId"].isNull())
			coordinateFlowModelsObject.ownerUserId = valueCoordinateFlowModelsCoordinateFlowModel["OwnerUserId"].asString();
		if(!valueCoordinateFlowModelsCoordinateFlowModel["CoordinateTicket"].isNull())
			coordinateFlowModelsObject.coordinateTicket = valueCoordinateFlowModelsCoordinateFlowModel["CoordinateTicket"].asString();
		if(!valueCoordinateFlowModelsCoordinateFlowModel["CoId"].isNull())
			coordinateFlowModelsObject.coId = valueCoordinateFlowModelsCoordinateFlowModel["CoId"].asString();
		if(!valueCoordinateFlowModelsCoordinateFlowModel["ResourceId"].isNull())
			coordinateFlowModelsObject.resourceId = valueCoordinateFlowModelsCoordinateFlowModel["ResourceId"].asString();
		if(!valueCoordinateFlowModelsCoordinateFlowModel["ResourceName"].isNull())
			coordinateFlowModelsObject.resourceName = valueCoordinateFlowModelsCoordinateFlowModel["ResourceName"].asString();
		coordinateFlowModels_.push_back(coordinateFlowModelsObject);
	}

}

std::vector<ApplyCoordinationForMonitoringResult::CoordinateFlowModel> ApplyCoordinationForMonitoringResult::getCoordinateFlowModels()const
{
	return coordinateFlowModels_;
}

