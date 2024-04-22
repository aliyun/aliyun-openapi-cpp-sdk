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

#include <alibabacloud/sae/model/DescribeNamespaceResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DescribeNamespaceResourcesResult::DescribeNamespaceResourcesResult() :
	ServiceResult()
{}

DescribeNamespaceResourcesResult::DescribeNamespaceResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNamespaceResourcesResult::~DescribeNamespaceResourcesResult()
{}

void DescribeNamespaceResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["VpcId"].isNull())
		data_.vpcId = dataNode["VpcId"].asString();
	if(!dataNode["LastChangeOrderId"].isNull())
		data_.lastChangeOrderId = dataNode["LastChangeOrderId"].asString();
	if(!dataNode["BelongRegion"].isNull())
		data_.belongRegion = dataNode["BelongRegion"].asString();
	if(!dataNode["NamespaceId"].isNull())
		data_.namespaceId = dataNode["NamespaceId"].asString();
	if(!dataNode["SecurityGroupId"].isNull())
		data_.securityGroupId = dataNode["SecurityGroupId"].asString();
	if(!dataNode["UserId"].isNull())
		data_.userId = dataNode["UserId"].asString();
	if(!dataNode["NamespaceName"].isNull())
		data_.namespaceName = dataNode["NamespaceName"].asString();
	if(!dataNode["LastChangeOrderStatus"].isNull())
		data_.lastChangeOrderStatus = dataNode["LastChangeOrderStatus"].asString();
	if(!dataNode["VpcName"].isNull())
		data_.vpcName = dataNode["VpcName"].asString();
	if(!dataNode["VSwitchId"].isNull())
		data_.vSwitchId = dataNode["VSwitchId"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["LastChangeOrderRunning"].isNull())
		data_.lastChangeOrderRunning = dataNode["LastChangeOrderRunning"].asString() == "true";
	if(!dataNode["AppCount"].isNull())
		data_.appCount = std::stol(dataNode["AppCount"].asString());
	if(!dataNode["VSwitchName"].isNull())
		data_.vSwitchName = dataNode["VSwitchName"].asString();
	if(!dataNode["NotificationExpired"].isNull())
		data_.notificationExpired = dataNode["NotificationExpired"].asString() == "true";
	if(!dataNode["TenantId"].isNull())
		data_.tenantId = dataNode["TenantId"].asString();
	if(!dataNode["JumpServerAppId"].isNull())
		data_.jumpServerAppId = dataNode["JumpServerAppId"].asString();
	if(!dataNode["JumpServerIp"].isNull())
		data_.jumpServerIp = dataNode["JumpServerIp"].asString();
	if(!dataNode["NameSpaceShortId"].isNull())
		data_.nameSpaceShortId = dataNode["NameSpaceShortId"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeNamespaceResourcesResult::getMessage()const
{
	return message_;
}

std::string DescribeNamespaceResourcesResult::getTraceId()const
{
	return traceId_;
}

DescribeNamespaceResourcesResult::Data DescribeNamespaceResourcesResult::getData()const
{
	return data_;
}

std::string DescribeNamespaceResourcesResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeNamespaceResourcesResult::getCode()const
{
	return code_;
}

bool DescribeNamespaceResourcesResult::getSuccess()const
{
	return success_;
}

