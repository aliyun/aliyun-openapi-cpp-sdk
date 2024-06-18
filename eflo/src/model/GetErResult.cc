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

#include <alibabacloud/eflo/model/GetErResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

GetErResult::GetErResult() :
	ServiceResult()
{}

GetErResult::GetErResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetErResult::~GetErResult()
{}

void GetErResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["CreateTime"].isNull())
		content_.createTime = contentNode["CreateTime"].asString();
	if(!contentNode["GmtModified"].isNull())
		content_.gmtModified = contentNode["GmtModified"].asString();
	if(!contentNode["Message"].isNull())
		content_.message = contentNode["Message"].asString();
	if(!contentNode["ErId"].isNull())
		content_.erId = contentNode["ErId"].asString();
	if(!contentNode["RegionId"].isNull())
		content_.regionId = contentNode["RegionId"].asString();
	if(!contentNode["TenantId"].isNull())
		content_.tenantId = contentNode["TenantId"].asString();
	if(!contentNode["Status"].isNull())
		content_.status = contentNode["Status"].asString();
	if(!contentNode["ErName"].isNull())
		content_.erName = contentNode["ErName"].asString();
	if(!contentNode["MasterZoneId"].isNull())
		content_.masterZoneId = contentNode["MasterZoneId"].asString();
	if(!contentNode["Description"].isNull())
		content_.description = contentNode["Description"].asString();
	if(!contentNode["ResourceGroupId"].isNull())
		content_.resourceGroupId = contentNode["ResourceGroupId"].asString();
	auto allErAttachmentsNode = contentNode["ErAttachments"]["ErAttachment"];
	for (auto contentNodeErAttachmentsErAttachment : allErAttachmentsNode)
	{
		Content::ErAttachment erAttachmentObject;
		if(!contentNodeErAttachmentsErAttachment["CreateTime"].isNull())
			erAttachmentObject.createTime = contentNodeErAttachmentsErAttachment["CreateTime"].asString();
		if(!contentNodeErAttachmentsErAttachment["GmtModified"].isNull())
			erAttachmentObject.gmtModified = contentNodeErAttachmentsErAttachment["GmtModified"].asString();
		if(!contentNodeErAttachmentsErAttachment["Message"].isNull())
			erAttachmentObject.message = contentNodeErAttachmentsErAttachment["Message"].asString();
		if(!contentNodeErAttachmentsErAttachment["Status"].isNull())
			erAttachmentObject.status = contentNodeErAttachmentsErAttachment["Status"].asString();
		if(!contentNodeErAttachmentsErAttachment["RegionId"].isNull())
			erAttachmentObject.regionId = contentNodeErAttachmentsErAttachment["RegionId"].asString();
		if(!contentNodeErAttachmentsErAttachment["TenantId"].isNull())
			erAttachmentObject.tenantId = contentNodeErAttachmentsErAttachment["TenantId"].asString();
		if(!contentNodeErAttachmentsErAttachment["ErAttachmentName"].isNull())
			erAttachmentObject.erAttachmentName = contentNodeErAttachmentsErAttachment["ErAttachmentName"].asString();
		if(!contentNodeErAttachmentsErAttachment["ErAttachmentId"].isNull())
			erAttachmentObject.erAttachmentId = contentNodeErAttachmentsErAttachment["ErAttachmentId"].asString();
		if(!contentNodeErAttachmentsErAttachment["ErId"].isNull())
			erAttachmentObject.erId = contentNodeErAttachmentsErAttachment["ErId"].asString();
		if(!contentNodeErAttachmentsErAttachment["InstanceType"].isNull())
			erAttachmentObject.instanceType = contentNodeErAttachmentsErAttachment["InstanceType"].asString();
		if(!contentNodeErAttachmentsErAttachment["InstanceId"].isNull())
			erAttachmentObject.instanceId = contentNodeErAttachmentsErAttachment["InstanceId"].asString();
		if(!contentNodeErAttachmentsErAttachment["InstanceName"].isNull())
			erAttachmentObject.instanceName = contentNodeErAttachmentsErAttachment["InstanceName"].asString();
		if(!contentNodeErAttachmentsErAttachment["AutoReceiveAllRoute"].isNull())
			erAttachmentObject.autoReceiveAllRoute = contentNodeErAttachmentsErAttachment["AutoReceiveAllRoute"].asString() == "true";
		if(!contentNodeErAttachmentsErAttachment["Across"].isNull())
			erAttachmentObject.across = contentNodeErAttachmentsErAttachment["Across"].asString() == "true";
		if(!contentNodeErAttachmentsErAttachment["ResourceTenantId"].isNull())
			erAttachmentObject.resourceTenantId = contentNodeErAttachmentsErAttachment["ResourceTenantId"].asString();
		if(!contentNodeErAttachmentsErAttachment["ResourceGroupId"].isNull())
			erAttachmentObject.resourceGroupId = contentNodeErAttachmentsErAttachment["ResourceGroupId"].asString();
		content_.erAttachments.push_back(erAttachmentObject);
	}
	auto allErRouteMapsNode = contentNode["ErRouteMaps"]["ErRouteMap"];
	for (auto contentNodeErRouteMapsErRouteMap : allErRouteMapsNode)
	{
		Content::ErRouteMap erRouteMapObject;
		if(!contentNodeErRouteMapsErRouteMap["RegionId"].isNull())
			erRouteMapObject.regionId = contentNodeErRouteMapsErRouteMap["RegionId"].asString();
		if(!contentNodeErRouteMapsErRouteMap["TenantId"].isNull())
			erRouteMapObject.tenantId = contentNodeErRouteMapsErRouteMap["TenantId"].asString();
		if(!contentNodeErRouteMapsErRouteMap["CreateTime"].isNull())
			erRouteMapObject.createTime = contentNodeErRouteMapsErRouteMap["CreateTime"].asString();
		if(!contentNodeErRouteMapsErRouteMap["GmtModified"].isNull())
			erRouteMapObject.gmtModified = contentNodeErRouteMapsErRouteMap["GmtModified"].asString();
		if(!contentNodeErRouteMapsErRouteMap["Message"].isNull())
			erRouteMapObject.message = contentNodeErRouteMapsErRouteMap["Message"].asString();
		if(!contentNodeErRouteMapsErRouteMap["Status"].isNull())
			erRouteMapObject.status = contentNodeErRouteMapsErRouteMap["Status"].asString();
		if(!contentNodeErRouteMapsErRouteMap["ErRouteMapId"].isNull())
			erRouteMapObject.erRouteMapId = contentNodeErRouteMapsErRouteMap["ErRouteMapId"].asString();
		if(!contentNodeErRouteMapsErRouteMap["ErId"].isNull())
			erRouteMapObject.erId = contentNodeErRouteMapsErRouteMap["ErId"].asString();
		if(!contentNodeErRouteMapsErRouteMap["RouteMapNum"].isNull())
			erRouteMapObject.routeMapNum = std::stoi(contentNodeErRouteMapsErRouteMap["RouteMapNum"].asString());
		if(!contentNodeErRouteMapsErRouteMap["Description"].isNull())
			erRouteMapObject.description = contentNodeErRouteMapsErRouteMap["Description"].asString();
		if(!contentNodeErRouteMapsErRouteMap["DestinationCidrBlock"].isNull())
			erRouteMapObject.destinationCidrBlock = contentNodeErRouteMapsErRouteMap["DestinationCidrBlock"].asString();
		if(!contentNodeErRouteMapsErRouteMap["TransmissionInstanceName"].isNull())
			erRouteMapObject.transmissionInstanceName = contentNodeErRouteMapsErRouteMap["TransmissionInstanceName"].asString();
		if(!contentNodeErRouteMapsErRouteMap["TransmissionInstanceId"].isNull())
			erRouteMapObject.transmissionInstanceId = contentNodeErRouteMapsErRouteMap["TransmissionInstanceId"].asString();
		if(!contentNodeErRouteMapsErRouteMap["TransmissionInstanceType"].isNull())
			erRouteMapObject.transmissionInstanceType = contentNodeErRouteMapsErRouteMap["TransmissionInstanceType"].asString();
		if(!contentNodeErRouteMapsErRouteMap["ReceptionInstanceName"].isNull())
			erRouteMapObject.receptionInstanceName = contentNodeErRouteMapsErRouteMap["ReceptionInstanceName"].asString();
		if(!contentNodeErRouteMapsErRouteMap["ReceptionInstanceId"].isNull())
			erRouteMapObject.receptionInstanceId = contentNodeErRouteMapsErRouteMap["ReceptionInstanceId"].asString();
		if(!contentNodeErRouteMapsErRouteMap["ReceptionInstanceType"].isNull())
			erRouteMapObject.receptionInstanceType = contentNodeErRouteMapsErRouteMap["ReceptionInstanceType"].asString();
		if(!contentNodeErRouteMapsErRouteMap["Action"].isNull())
			erRouteMapObject.action = contentNodeErRouteMapsErRouteMap["Action"].asString();
		if(!contentNodeErRouteMapsErRouteMap["TransmissionInstanceOwner"].isNull())
			erRouteMapObject.transmissionInstanceOwner = contentNodeErRouteMapsErRouteMap["TransmissionInstanceOwner"].asString();
		if(!contentNodeErRouteMapsErRouteMap["ReceptionInstanceOwner"].isNull())
			erRouteMapObject.receptionInstanceOwner = contentNodeErRouteMapsErRouteMap["ReceptionInstanceOwner"].asString();
		if(!contentNodeErRouteMapsErRouteMap["ResourceGroupId"].isNull())
			erRouteMapObject.resourceGroupId = contentNodeErRouteMapsErRouteMap["ResourceGroupId"].asString();
		if(!contentNodeErRouteMapsErRouteMap["ErRouteMapName"].isNull())
			erRouteMapObject.erRouteMapName = contentNodeErRouteMapsErRouteMap["ErRouteMapName"].asString();
		content_.erRouteMaps.push_back(erRouteMapObject);
	}
	auto allErRouteEntrysNode = contentNode["ErRouteEntrys"]["ErRouteEntry"];
	for (auto contentNodeErRouteEntrysErRouteEntry : allErRouteEntrysNode)
	{
		Content::ErRouteEntry erRouteEntryObject;
		if(!contentNodeErRouteEntrysErRouteEntry["ErId"].isNull())
			erRouteEntryObject.erId = contentNodeErRouteEntrysErRouteEntry["ErId"].asString();
		if(!contentNodeErRouteEntrysErRouteEntry["TenantId"].isNull())
			erRouteEntryObject.tenantId = contentNodeErRouteEntrysErRouteEntry["TenantId"].asString();
		if(!contentNodeErRouteEntrysErRouteEntry["ResourceTenantId"].isNull())
			erRouteEntryObject.resourceTenantId = contentNodeErRouteEntrysErRouteEntry["ResourceTenantId"].asString();
		if(!contentNodeErRouteEntrysErRouteEntry["RegionId"].isNull())
			erRouteEntryObject.regionId = contentNodeErRouteEntrysErRouteEntry["RegionId"].asString();
		if(!contentNodeErRouteEntrysErRouteEntry["ErRouteEntryId"].isNull())
			erRouteEntryObject.erRouteEntryId = contentNodeErRouteEntrysErRouteEntry["ErRouteEntryId"].asString();
		if(!contentNodeErRouteEntrysErRouteEntry["DestinationCidrBlock"].isNull())
			erRouteEntryObject.destinationCidrBlock = contentNodeErRouteEntrysErRouteEntry["DestinationCidrBlock"].asString();
		if(!contentNodeErRouteEntrysErRouteEntry["NextHopType"].isNull())
			erRouteEntryObject.nextHopType = contentNodeErRouteEntrysErRouteEntry["NextHopType"].asString();
		if(!contentNodeErRouteEntrysErRouteEntry["NextHopId"].isNull())
			erRouteEntryObject.nextHopId = contentNodeErRouteEntrysErRouteEntry["NextHopId"].asString();
		if(!contentNodeErRouteEntrysErRouteEntry["RouteType"].isNull())
			erRouteEntryObject.routeType = contentNodeErRouteEntrysErRouteEntry["RouteType"].asString();
		if(!contentNodeErRouteEntrysErRouteEntry["Status"].isNull())
			erRouteEntryObject.status = contentNodeErRouteEntrysErRouteEntry["Status"].asString();
		if(!contentNodeErRouteEntrysErRouteEntry["GmtModified"].isNull())
			erRouteEntryObject.gmtModified = contentNodeErRouteEntrysErRouteEntry["GmtModified"].asString();
		if(!contentNodeErRouteEntrysErRouteEntry["ResourceGroupId"].isNull())
			erRouteEntryObject.resourceGroupId = contentNodeErRouteEntrysErRouteEntry["ResourceGroupId"].asString();
		content_.erRouteEntrys.push_back(erRouteEntryObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetErResult::getMessage()const
{
	return message_;
}

GetErResult::Content GetErResult::getContent()const
{
	return content_;
}

int GetErResult::getCode()const
{
	return code_;
}

