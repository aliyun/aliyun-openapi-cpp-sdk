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

#include <alibabacloud/vpc/model/CreateVpnAttachmentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateVpnAttachmentResult::CreateVpnAttachmentResult() :
	ServiceResult()
{}

CreateVpnAttachmentResult::CreateVpnAttachmentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateVpnAttachmentResult::~CreateVpnAttachmentResult()
{}

void CreateVpnAttachmentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["VpnConnectionId"].isNull())
		vpnConnectionId_ = value["VpnConnectionId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateVpnAttachmentResult::getMessage()const
{
	return message_;
}

long CreateVpnAttachmentResult::getCreateTime()const
{
	return createTime_;
}

std::string CreateVpnAttachmentResult::getVpnConnectionId()const
{
	return vpnConnectionId_;
}

std::string CreateVpnAttachmentResult::getCode()const
{
	return code_;
}

bool CreateVpnAttachmentResult::getSuccess()const
{
	return success_;
}

std::string CreateVpnAttachmentResult::getName()const
{
	return name_;
}

