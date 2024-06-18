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

#include <alibabacloud/eflo/model/ListErRouteMapsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

ListErRouteMapsResult::ListErRouteMapsResult() :
	ServiceResult()
{}

ListErRouteMapsResult::ListErRouteMapsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListErRouteMapsResult::~ListErRouteMapsResult()
{}

void ListErRouteMapsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["Total"].isNull())
		content_.total = std::stol(contentNode["Total"].asString());
	auto allDataNode = contentNode["Data"]["DataItem"];
	for (auto contentNodeDataDataItem : allDataNode)
	{
		Content::DataItem dataItemObject;
		if(!contentNodeDataDataItem["RegionId"].isNull())
			dataItemObject.regionId = contentNodeDataDataItem["RegionId"].asString();
		if(!contentNodeDataDataItem["TenantId"].isNull())
			dataItemObject.tenantId = contentNodeDataDataItem["TenantId"].asString();
		if(!contentNodeDataDataItem["CreateTime"].isNull())
			dataItemObject.createTime = contentNodeDataDataItem["CreateTime"].asString();
		if(!contentNodeDataDataItem["GmtModified"].isNull())
			dataItemObject.gmtModified = contentNodeDataDataItem["GmtModified"].asString();
		if(!contentNodeDataDataItem["Message"].isNull())
			dataItemObject.message = contentNodeDataDataItem["Message"].asString();
		if(!contentNodeDataDataItem["Status"].isNull())
			dataItemObject.status = contentNodeDataDataItem["Status"].asString();
		if(!contentNodeDataDataItem["ErRouteMapId"].isNull())
			dataItemObject.erRouteMapId = contentNodeDataDataItem["ErRouteMapId"].asString();
		if(!contentNodeDataDataItem["ErId"].isNull())
			dataItemObject.erId = contentNodeDataDataItem["ErId"].asString();
		if(!contentNodeDataDataItem["RouteMapNum"].isNull())
			dataItemObject.routeMapNum = std::stoi(contentNodeDataDataItem["RouteMapNum"].asString());
		if(!contentNodeDataDataItem["Description"].isNull())
			dataItemObject.description = contentNodeDataDataItem["Description"].asString();
		if(!contentNodeDataDataItem["DestinationCidrBlock"].isNull())
			dataItemObject.destinationCidrBlock = contentNodeDataDataItem["DestinationCidrBlock"].asString();
		if(!contentNodeDataDataItem["TransmissionInstanceName"].isNull())
			dataItemObject.transmissionInstanceName = contentNodeDataDataItem["TransmissionInstanceName"].asString();
		if(!contentNodeDataDataItem["TransmissionInstanceId"].isNull())
			dataItemObject.transmissionInstanceId = contentNodeDataDataItem["TransmissionInstanceId"].asString();
		if(!contentNodeDataDataItem["TransmissionInstanceType"].isNull())
			dataItemObject.transmissionInstanceType = contentNodeDataDataItem["TransmissionInstanceType"].asString();
		if(!contentNodeDataDataItem["ReceptionInstanceName"].isNull())
			dataItemObject.receptionInstanceName = contentNodeDataDataItem["ReceptionInstanceName"].asString();
		if(!contentNodeDataDataItem["ReceptionInstanceId"].isNull())
			dataItemObject.receptionInstanceId = contentNodeDataDataItem["ReceptionInstanceId"].asString();
		if(!contentNodeDataDataItem["ReceptionInstanceType"].isNull())
			dataItemObject.receptionInstanceType = contentNodeDataDataItem["ReceptionInstanceType"].asString();
		if(!contentNodeDataDataItem["Action"].isNull())
			dataItemObject.action = contentNodeDataDataItem["Action"].asString();
		if(!contentNodeDataDataItem["TransmissionInstanceOwner"].isNull())
			dataItemObject.transmissionInstanceOwner = contentNodeDataDataItem["TransmissionInstanceOwner"].asString();
		if(!contentNodeDataDataItem["ReceptionInstanceOwner"].isNull())
			dataItemObject.receptionInstanceOwner = contentNodeDataDataItem["ReceptionInstanceOwner"].asString();
		if(!contentNodeDataDataItem["ResourceGroupId"].isNull())
			dataItemObject.resourceGroupId = contentNodeDataDataItem["ResourceGroupId"].asString();
		content_.data.push_back(dataItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListErRouteMapsResult::getMessage()const
{
	return message_;
}

ListErRouteMapsResult::Content ListErRouteMapsResult::getContent()const
{
	return content_;
}

int ListErRouteMapsResult::getCode()const
{
	return code_;
}

