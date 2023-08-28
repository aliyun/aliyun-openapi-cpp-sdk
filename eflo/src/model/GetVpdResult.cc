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

#include <alibabacloud/eflo/model/GetVpdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

GetVpdResult::GetVpdResult() :
	ServiceResult()
{}

GetVpdResult::GetVpdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVpdResult::~GetVpdResult()
{}

void GetVpdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["RegionId"].isNull())
		content_.regionId = contentNode["RegionId"].asString();
	if(!contentNode["VpdId"].isNull())
		content_.vpdId = contentNode["VpdId"].asString();
	if(!contentNode["VpdName"].isNull())
		content_.vpdName = contentNode["VpdName"].asString();
	if(!contentNode["Cidr"].isNull())
		content_.cidr = contentNode["Cidr"].asString();
	if(!contentNode["ServiceCidr"].isNull())
		content_.serviceCidr = contentNode["ServiceCidr"].asString();
	if(!contentNode["Status"].isNull())
		content_.status = contentNode["Status"].asString();
	if(!contentNode["Message"].isNull())
		content_.message = contentNode["Message"].asString();
	if(!contentNode["NcCount"].isNull())
		content_.ncCount = std::stoi(contentNode["NcCount"].asString());
	if(!contentNode["NetworkInterfaceCount"].isNull())
		content_.networkInterfaceCount = std::stoi(contentNode["NetworkInterfaceCount"].asString());
	if(!contentNode["SubnetCount"].isNull())
		content_.subnetCount = std::stol(contentNode["SubnetCount"].asString());
	if(!contentNode["CreateTime"].isNull())
		content_.createTime = contentNode["CreateTime"].asString();
	if(!contentNode["GmtModified"].isNull())
		content_.gmtModified = contentNode["GmtModified"].asString();
	if(!contentNode["TenantId"].isNull())
		content_.tenantId = contentNode["TenantId"].asString();
	if(!contentNode["AttachErStatus"].isNull())
		content_.attachErStatus = contentNode["AttachErStatus"].asString() == "true";
	if(!contentNode["ResourceGroupId"].isNull())
		content_.resourceGroupId = contentNode["ResourceGroupId"].asString();
	if(!contentNode["Quota"].isNull())
		content_.quota = std::stoi(contentNode["Quota"].asString());
	if(!contentNode["PrivateIpCount"].isNull())
		content_.privateIpCount = std::stol(contentNode["PrivateIpCount"].asString());
	auto allErInfosNode = contentNode["ErInfos"]["ErInfo"];
	for (auto contentNodeErInfosErInfo : allErInfosNode)
	{
		Content::ErInfo erInfoObject;
		if(!contentNodeErInfosErInfo["CreateTime"].isNull())
			erInfoObject.createTime = contentNodeErInfosErInfo["CreateTime"].asString();
		if(!contentNodeErInfosErInfo["GmtModified"].isNull())
			erInfoObject.gmtModified = contentNodeErInfosErInfo["GmtModified"].asString();
		if(!contentNodeErInfosErInfo["Message"].isNull())
			erInfoObject.message = contentNodeErInfosErInfo["Message"].asString();
		if(!contentNodeErInfosErInfo["ErId"].isNull())
			erInfoObject.erId = contentNodeErInfosErInfo["ErId"].asString();
		if(!contentNodeErInfosErInfo["RegionId"].isNull())
			erInfoObject.regionId = contentNodeErInfosErInfo["RegionId"].asString();
		if(!contentNodeErInfosErInfo["TenantId"].isNull())
			erInfoObject.tenantId = contentNodeErInfosErInfo["TenantId"].asString();
		if(!contentNodeErInfosErInfo["Status"].isNull())
			erInfoObject.status = contentNodeErInfosErInfo["Status"].asString();
		if(!contentNodeErInfosErInfo["ErName"].isNull())
			erInfoObject.erName = contentNodeErInfosErInfo["ErName"].asString();
		if(!contentNodeErInfosErInfo["MasterZoneId"].isNull())
			erInfoObject.masterZoneId = contentNodeErInfosErInfo["MasterZoneId"].asString();
		if(!contentNodeErInfosErInfo["Description"].isNull())
			erInfoObject.description = contentNodeErInfosErInfo["Description"].asString();
		if(!contentNodeErInfosErInfo["Connections"].isNull())
			erInfoObject.connections = std::stol(contentNodeErInfosErInfo["Connections"].asString());
		if(!contentNodeErInfosErInfo["RouteMaps"].isNull())
			erInfoObject.routeMaps = std::stol(contentNodeErInfosErInfo["RouteMaps"].asString());
		content_.erInfos.push_back(erInfoObject);
	}
	auto allTagsNode = contentNode["Tags"]["Tag"];
	for (auto contentNodeTagsTag : allTagsNode)
	{
		Content::Tag tagObject;
		if(!contentNodeTagsTag["TagKey"].isNull())
			tagObject.tagKey = contentNodeTagsTag["TagKey"].asString();
		if(!contentNodeTagsTag["TagValue"].isNull())
			tagObject.tagValue = contentNodeTagsTag["TagValue"].asString();
		content_.tags.push_back(tagObject);
	}
		auto allSecondaryCidrBlocks = contentNode["SecondaryCidrBlocks"]["SecondaryCidrBlock"];
		for (auto value : allSecondaryCidrBlocks)
			content_.secondaryCidrBlocks.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetVpdResult::getMessage()const
{
	return message_;
}

GetVpdResult::Content GetVpdResult::getContent()const
{
	return content_;
}

int GetVpdResult::getCode()const
{
	return code_;
}

