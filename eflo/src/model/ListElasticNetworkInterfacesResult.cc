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

#include <alibabacloud/eflo/model/ListElasticNetworkInterfacesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

ListElasticNetworkInterfacesResult::ListElasticNetworkInterfacesResult() :
	ServiceResult()
{}

ListElasticNetworkInterfacesResult::ListElasticNetworkInterfacesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListElasticNetworkInterfacesResult::~ListElasticNetworkInterfacesResult()
{}

void ListElasticNetworkInterfacesResult::parse(const std::string &payload)
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
		if(!contentNodeDataDataItem["ZoneId"].isNull())
			dataItemObject.zoneId = contentNodeDataDataItem["ZoneId"].asString();
		if(!contentNodeDataDataItem["ElasticNetworkInterfaceId"].isNull())
			dataItemObject.elasticNetworkInterfaceId = contentNodeDataDataItem["ElasticNetworkInterfaceId"].asString();
		if(!contentNodeDataDataItem["NodeId"].isNull())
			dataItemObject.nodeId = contentNodeDataDataItem["NodeId"].asString();
		if(!contentNodeDataDataItem["Status"].isNull())
			dataItemObject.status = contentNodeDataDataItem["Status"].asString();
		if(!contentNodeDataDataItem["Ip"].isNull())
			dataItemObject.ip = contentNodeDataDataItem["Ip"].asString();
		if(!contentNodeDataDataItem["VpcId"].isNull())
			dataItemObject.vpcId = contentNodeDataDataItem["VpcId"].asString();
		if(!contentNodeDataDataItem["VSwitchId"].isNull())
			dataItemObject.vSwitchId = contentNodeDataDataItem["VSwitchId"].asString();
		if(!contentNodeDataDataItem["Message"].isNull())
			dataItemObject.message = contentNodeDataDataItem["Message"].asString();
		if(!contentNodeDataDataItem["Mac"].isNull())
			dataItemObject.mac = contentNodeDataDataItem["Mac"].asString();
		if(!contentNodeDataDataItem["Type"].isNull())
			dataItemObject.type = contentNodeDataDataItem["Type"].asString();
		if(!contentNodeDataDataItem["Gateway"].isNull())
			dataItemObject.gateway = contentNodeDataDataItem["Gateway"].asString();
		if(!contentNodeDataDataItem["Mask"].isNull())
			dataItemObject.mask = contentNodeDataDataItem["Mask"].asString();
		if(!contentNodeDataDataItem["CreateTime"].isNull())
			dataItemObject.createTime = contentNodeDataDataItem["CreateTime"].asString();
		if(!contentNodeDataDataItem["GmtModified"].isNull())
			dataItemObject.gmtModified = contentNodeDataDataItem["GmtModified"].asString();
		if(!contentNodeDataDataItem["Description"].isNull())
			dataItemObject.description = contentNodeDataDataItem["Description"].asString();
		if(!contentNodeDataDataItem["SecurityGroupId"].isNull())
			dataItemObject.securityGroupId = contentNodeDataDataItem["SecurityGroupId"].asString();
		content_.data.push_back(dataItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListElasticNetworkInterfacesResult::getMessage()const
{
	return message_;
}

ListElasticNetworkInterfacesResult::Content ListElasticNetworkInterfacesResult::getContent()const
{
	return content_;
}

int ListElasticNetworkInterfacesResult::getCode()const
{
	return code_;
}

