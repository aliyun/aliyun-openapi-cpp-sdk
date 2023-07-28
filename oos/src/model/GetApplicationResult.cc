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

#include <alibabacloud/oos/model/GetApplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

GetApplicationResult::GetApplicationResult() :
	ServiceResult()
{}

GetApplicationResult::GetApplicationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetApplicationResult::~GetApplicationResult()
{}

void GetApplicationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto applicationNode = value["Application"];
	if(!applicationNode["Description"].isNull())
		application_.description = applicationNode["Description"].asString();
	if(!applicationNode["UpdateDate"].isNull())
		application_.updateDate = applicationNode["UpdateDate"].asString();
	if(!applicationNode["ResourceGroupId"].isNull())
		application_.resourceGroupId = applicationNode["ResourceGroupId"].asString();
	if(!applicationNode["Tags"].isNull())
		application_.tags = applicationNode["Tags"].asString();
	if(!applicationNode["Name"].isNull())
		application_.name = applicationNode["Name"].asString();
	if(!applicationNode["CreateDate"].isNull())
		application_.createDate = applicationNode["CreateDate"].asString();
	if(!applicationNode["ApplicationType"].isNull())
		application_.applicationType = applicationNode["ApplicationType"].asString();
	auto alarmConfigNode = applicationNode["AlarmConfig"];
	if(!alarmConfigNode["HealthCheckUrl"].isNull())
		application_.alarmConfig.healthCheckUrl = alarmConfigNode["HealthCheckUrl"].asString();
		auto allContactGroups = alarmConfigNode["ContactGroups"]["ContactGroup"];
		for (auto value : allContactGroups)
			application_.alarmConfig.contactGroups.push_back(value.asString());
		auto allTemplateIds = alarmConfigNode["TemplateIds"]["TemplateId"];
		for (auto value : allTemplateIds)
			application_.alarmConfig.templateIds.push_back(value.asString());

}

GetApplicationResult::Application GetApplicationResult::getApplication()const
{
	return application_;
}

