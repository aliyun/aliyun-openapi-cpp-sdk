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

#include <alibabacloud/eflo/model/GetErRouteMapResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

GetErRouteMapResult::GetErRouteMapResult() :
	ServiceResult()
{}

GetErRouteMapResult::GetErRouteMapResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetErRouteMapResult::~GetErRouteMapResult()
{}

void GetErRouteMapResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["RegionId"].isNull())
		content_.regionId = contentNode["RegionId"].asString();
	if(!contentNode["TenantId"].isNull())
		content_.tenantId = contentNode["TenantId"].asString();
	if(!contentNode["GmtCreate"].isNull())
		content_.gmtCreate = contentNode["GmtCreate"].asString();
	if(!contentNode["GmtModified"].isNull())
		content_.gmtModified = contentNode["GmtModified"].asString();
	if(!contentNode["Message"].isNull())
		content_.message = contentNode["Message"].asString();
	if(!contentNode["Status"].isNull())
		content_.status = contentNode["Status"].asString();
	if(!contentNode["ErRouteMapId"].isNull())
		content_.erRouteMapId = contentNode["ErRouteMapId"].asString();
	if(!contentNode["ErId"].isNull())
		content_.erId = contentNode["ErId"].asString();
	if(!contentNode["RouteMapNum"].isNull())
		content_.routeMapNum = std::stoi(contentNode["RouteMapNum"].asString());
	if(!contentNode["Description"].isNull())
		content_.description = contentNode["Description"].asString();
	if(!contentNode["DestinationCidrBlock"].isNull())
		content_.destinationCidrBlock = contentNode["DestinationCidrBlock"].asString();
	if(!contentNode["TransmissionInstanceName"].isNull())
		content_.transmissionInstanceName = contentNode["TransmissionInstanceName"].asString();
	if(!contentNode["TransmissionInstanceId"].isNull())
		content_.transmissionInstanceId = contentNode["TransmissionInstanceId"].asString();
	if(!contentNode["TransmissionInstanceType"].isNull())
		content_.transmissionInstanceType = contentNode["TransmissionInstanceType"].asString();
	if(!contentNode["ReceptionInstanceName"].isNull())
		content_.receptionInstanceName = contentNode["ReceptionInstanceName"].asString();
	if(!contentNode["ReceptionInstanceId"].isNull())
		content_.receptionInstanceId = contentNode["ReceptionInstanceId"].asString();
	if(!contentNode["ReceptionInstanceType"].isNull())
		content_.receptionInstanceType = contentNode["ReceptionInstanceType"].asString();
	if(!contentNode["Action"].isNull())
		content_.action = contentNode["Action"].asString();
	if(!contentNode["TransmissionInstanceOwner"].isNull())
		content_.transmissionInstanceOwner = contentNode["TransmissionInstanceOwner"].asString();
	if(!contentNode["ReceptionInstanceOwner"].isNull())
		content_.receptionInstanceOwner = contentNode["ReceptionInstanceOwner"].asString();
	if(!contentNode["ResourceGroupId"].isNull())
		content_.resourceGroupId = contentNode["ResourceGroupId"].asString();
	if(!contentNode["ErRouteMapName"].isNull())
		content_.erRouteMapName = contentNode["ErRouteMapName"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetErRouteMapResult::getMessage()const
{
	return message_;
}

GetErRouteMapResult::Content GetErRouteMapResult::getContent()const
{
	return content_;
}

int GetErRouteMapResult::getCode()const
{
	return code_;
}

