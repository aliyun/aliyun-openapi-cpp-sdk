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

#include <alibabacloud/cms/model/CreateSiteMonitorResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

CreateSiteMonitorResult::CreateSiteMonitorResult() :
	ServiceResult()
{}

CreateSiteMonitorResult::CreateSiteMonitorResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateSiteMonitorResult::~CreateSiteMonitorResult()
{}

void CreateSiteMonitorResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allAttachAlertResultNode = dataNode["AttachAlertResult"]["Contact"];
	for (auto dataNodeAttachAlertResultContact : allAttachAlertResultNode)
	{
		Data::Contact contactObject;
		if(!dataNodeAttachAlertResultContact["Message"].isNull())
			contactObject.message = dataNodeAttachAlertResultContact["Message"].asString();
		if(!dataNodeAttachAlertResultContact["RequestId"].isNull())
			contactObject.requestId = dataNodeAttachAlertResultContact["RequestId"].asString();
		if(!dataNodeAttachAlertResultContact["Code"].isNull())
			contactObject.code = dataNodeAttachAlertResultContact["Code"].asString();
		if(!dataNodeAttachAlertResultContact["Success"].isNull())
			contactObject.success = dataNodeAttachAlertResultContact["Success"].asString();
		if(!dataNodeAttachAlertResultContact["RuleId"].isNull())
			contactObject.ruleId = dataNodeAttachAlertResultContact["RuleId"].asString();
		data_.attachAlertResult.push_back(contactObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["AlertRule"].isNull())
		alertRule_ = value["AlertRule"].asString();

}

std::string CreateSiteMonitorResult::getMessage()const
{
	return message_;
}

CreateSiteMonitorResult::Data CreateSiteMonitorResult::getData()const
{
	return data_;
}

std::string CreateSiteMonitorResult::getCode()const
{
	return code_;
}

std::string CreateSiteMonitorResult::getSuccess()const
{
	return success_;
}

std::string CreateSiteMonitorResult::getAlertRule()const
{
	return alertRule_;
}

