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

#include <alibabacloud/eflo/model/GetSubnetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

GetSubnetResult::GetSubnetResult() :
	ServiceResult()
{}

GetSubnetResult::GetSubnetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSubnetResult::~GetSubnetResult()
{}

void GetSubnetResult::parse(const std::string &payload)
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
	if(!contentNode["TenantId"].isNull())
		content_.tenantId = contentNode["TenantId"].asString();
	if(!contentNode["RegionId"].isNull())
		content_.regionId = contentNode["RegionId"].asString();
	if(!contentNode["ZoneId"].isNull())
		content_.zoneId = contentNode["ZoneId"].asString();
	if(!contentNode["SubnetId"].isNull())
		content_.subnetId = contentNode["SubnetId"].asString();
	if(!contentNode["SubnetName"].isNull())
		content_.subnetName = contentNode["SubnetName"].asString();
	if(!contentNode["Cidr"].isNull())
		content_.cidr = contentNode["Cidr"].asString();
	if(!contentNode["VpdId"].isNull())
		content_.vpdId = contentNode["VpdId"].asString();
	if(!contentNode["Type"].isNull())
		content_.type = contentNode["Type"].asString();
	if(!contentNode["Status"].isNull())
		content_.status = contentNode["Status"].asString();
	if(!contentNode["Message"].isNull())
		content_.message = contentNode["Message"].asString();
	if(!contentNode["NcCount"].isNull())
		content_.ncCount = std::stoi(contentNode["NcCount"].asString());
	if(!contentNode["NetworkInterfaceCount"].isNull())
		content_.networkInterfaceCount = std::stoi(contentNode["NetworkInterfaceCount"].asString());
	if(!contentNode["LbCount"].isNull())
		content_.lbCount = std::stol(contentNode["LbCount"].asString());
	if(!contentNode["ResourceGroupId"].isNull())
		content_.resourceGroupId = contentNode["ResourceGroupId"].asString();
	if(!contentNode["PrivateIpCount"].isNull())
		content_.privateIpCount = std::stol(contentNode["PrivateIpCount"].asString());
	if(!contentNode["AvailableIps"].isNull())
		content_.availableIps = std::stoi(contentNode["AvailableIps"].asString());
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
	auto vpdBaseInfoNode = contentNode["VpdBaseInfo"];
	if(!vpdBaseInfoNode["VpdId"].isNull())
		content_.vpdBaseInfo.vpdId = vpdBaseInfoNode["VpdId"].asString();
	if(!vpdBaseInfoNode["VpdName"].isNull())
		content_.vpdBaseInfo.vpdName = vpdBaseInfoNode["VpdName"].asString();
	if(!vpdBaseInfoNode["Cidr"].isNull())
		content_.vpdBaseInfo.cidr = vpdBaseInfoNode["Cidr"].asString();
	if(!vpdBaseInfoNode["CreateTime"].isNull())
		content_.vpdBaseInfo.createTime = vpdBaseInfoNode["CreateTime"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetSubnetResult::getMessage()const
{
	return message_;
}

GetSubnetResult::Content GetSubnetResult::getContent()const
{
	return content_;
}

int GetSubnetResult::getCode()const
{
	return code_;
}

