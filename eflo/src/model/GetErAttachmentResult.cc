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

#include <alibabacloud/eflo/model/GetErAttachmentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

GetErAttachmentResult::GetErAttachmentResult() :
	ServiceResult()
{}

GetErAttachmentResult::GetErAttachmentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetErAttachmentResult::~GetErAttachmentResult()
{}

void GetErAttachmentResult::parse(const std::string &payload)
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
	if(!contentNode["Status"].isNull())
		content_.status = contentNode["Status"].asString();
	if(!contentNode["RegionId"].isNull())
		content_.regionId = contentNode["RegionId"].asString();
	if(!contentNode["TenantId"].isNull())
		content_.tenantId = contentNode["TenantId"].asString();
	if(!contentNode["ErAttachmentName"].isNull())
		content_.erAttachmentName = contentNode["ErAttachmentName"].asString();
	if(!contentNode["ErAttachmentId"].isNull())
		content_.erAttachmentId = contentNode["ErAttachmentId"].asString();
	if(!contentNode["ErId"].isNull())
		content_.erId = contentNode["ErId"].asString();
	if(!contentNode["InstanceType"].isNull())
		content_.instanceType = contentNode["InstanceType"].asString();
	if(!contentNode["InstanceId"].isNull())
		content_.instanceId = contentNode["InstanceId"].asString();
	if(!contentNode["InstanceName"].isNull())
		content_.instanceName = contentNode["InstanceName"].asString();
	if(!contentNode["AutoReceiveAllRoute"].isNull())
		content_.autoReceiveAllRoute = contentNode["AutoReceiveAllRoute"].asString() == "true";
	if(!contentNode["Across"].isNull())
		content_.across = contentNode["Across"].asString() == "true";
	if(!contentNode["ResourceTenantId"].isNull())
		content_.resourceTenantId = contentNode["ResourceTenantId"].asString();
	if(!contentNode["ResourceGroupId"].isNull())
		content_.resourceGroupId = contentNode["ResourceGroupId"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetErAttachmentResult::getMessage()const
{
	return message_;
}

GetErAttachmentResult::Content GetErAttachmentResult::getContent()const
{
	return content_;
}

int GetErAttachmentResult::getCode()const
{
	return code_;
}

