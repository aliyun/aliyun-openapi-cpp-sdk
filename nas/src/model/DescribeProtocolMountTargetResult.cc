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

#include <alibabacloud/nas/model/DescribeProtocolMountTargetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

DescribeProtocolMountTargetResult::DescribeProtocolMountTargetResult() :
	ServiceResult()
{}

DescribeProtocolMountTargetResult::DescribeProtocolMountTargetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeProtocolMountTargetResult::~DescribeProtocolMountTargetResult()
{}

void DescribeProtocolMountTargetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProtocolMountTargetsNode = value["ProtocolMountTargets"]["protocolMountTarget"];
	for (auto valueProtocolMountTargetsprotocolMountTarget : allProtocolMountTargetsNode)
	{
		ProtocolMountTarget protocolMountTargetsObject;
		if(!valueProtocolMountTargetsprotocolMountTarget["ExportId"].isNull())
			protocolMountTargetsObject.exportId = valueProtocolMountTargetsprotocolMountTarget["ExportId"].asString();
		if(!valueProtocolMountTargetsprotocolMountTarget["ProtocolMountTargetDomain"].isNull())
			protocolMountTargetsObject.protocolMountTargetDomain = valueProtocolMountTargetsprotocolMountTarget["ProtocolMountTargetDomain"].asString();
		if(!valueProtocolMountTargetsprotocolMountTarget["ProtocolType"].isNull())
			protocolMountTargetsObject.protocolType = valueProtocolMountTargetsprotocolMountTarget["ProtocolType"].asString();
		if(!valueProtocolMountTargetsprotocolMountTarget["VpcId"].isNull())
			protocolMountTargetsObject.vpcId = valueProtocolMountTargetsprotocolMountTarget["VpcId"].asString();
		if(!valueProtocolMountTargetsprotocolMountTarget["VSwitchId"].isNull())
			protocolMountTargetsObject.vSwitchId = valueProtocolMountTargetsprotocolMountTarget["VSwitchId"].asString();
		if(!valueProtocolMountTargetsprotocolMountTarget["FsetId"].isNull())
			protocolMountTargetsObject.fsetId = valueProtocolMountTargetsprotocolMountTarget["FsetId"].asString();
		if(!valueProtocolMountTargetsprotocolMountTarget["Path"].isNull())
			protocolMountTargetsObject.path = valueProtocolMountTargetsprotocolMountTarget["Path"].asString();
		if(!valueProtocolMountTargetsprotocolMountTarget["AccessGroupName"].isNull())
			protocolMountTargetsObject.accessGroupName = valueProtocolMountTargetsprotocolMountTarget["AccessGroupName"].asString();
		if(!valueProtocolMountTargetsprotocolMountTarget["CreateTime"].isNull())
			protocolMountTargetsObject.createTime = valueProtocolMountTargetsprotocolMountTarget["CreateTime"].asString();
		if(!valueProtocolMountTargetsprotocolMountTarget["Status"].isNull())
			protocolMountTargetsObject.status = valueProtocolMountTargetsprotocolMountTarget["Status"].asString();
		if(!valueProtocolMountTargetsprotocolMountTarget["ProtocolServiceId"].isNull())
			protocolMountTargetsObject.protocolServiceId = valueProtocolMountTargetsprotocolMountTarget["ProtocolServiceId"].asString();
		if(!valueProtocolMountTargetsprotocolMountTarget["Description"].isNull())
			protocolMountTargetsObject.description = valueProtocolMountTargetsprotocolMountTarget["Description"].asString();
		protocolMountTargets_.push_back(protocolMountTargetsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeProtocolMountTargetResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeProtocolMountTargetResult::ProtocolMountTarget> DescribeProtocolMountTargetResult::getProtocolMountTargets()const
{
	return protocolMountTargets_;
}

