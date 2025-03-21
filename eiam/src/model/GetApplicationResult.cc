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

#include <alibabacloud/eiam/model/GetApplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

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
	if(!applicationNode["ApiInvokeStatus"].isNull())
		application_.apiInvokeStatus = applicationNode["ApiInvokeStatus"].asString();
	if(!applicationNode["ApplicationId"].isNull())
		application_.applicationId = applicationNode["ApplicationId"].asString();
	if(!applicationNode["ApplicationName"].isNull())
		application_.applicationName = applicationNode["ApplicationName"].asString();
	if(!applicationNode["ApplicationSourceType"].isNull())
		application_.applicationSourceType = applicationNode["ApplicationSourceType"].asString();
	if(!applicationNode["ApplicationTemplateId"].isNull())
		application_.applicationTemplateId = applicationNode["ApplicationTemplateId"].asString();
	if(!applicationNode["AuthorizationType"].isNull())
		application_.authorizationType = applicationNode["AuthorizationType"].asString();
	if(!applicationNode["ClientId"].isNull())
		application_.clientId = applicationNode["ClientId"].asString();
	if(!applicationNode["CreateTime"].isNull())
		application_.createTime = std::stol(applicationNode["CreateTime"].asString());
	if(!applicationNode["Description"].isNull())
		application_.description = applicationNode["Description"].asString();
	if(!applicationNode["Features"].isNull())
		application_.features = applicationNode["Features"].asString();
	if(!applicationNode["InstanceId"].isNull())
		application_.instanceId = applicationNode["InstanceId"].asString();
	if(!applicationNode["LogoUrl"].isNull())
		application_.logoUrl = applicationNode["LogoUrl"].asString();
	if(!applicationNode["ManagedServiceCode"].isNull())
		application_.managedServiceCode = applicationNode["ManagedServiceCode"].asString();
	if(!applicationNode["ServiceManaged"].isNull())
		application_.serviceManaged = applicationNode["ServiceManaged"].asString() == "true";
	if(!applicationNode["SsoType"].isNull())
		application_.ssoType = applicationNode["SsoType"].asString();
	if(!applicationNode["Status"].isNull())
		application_.status = applicationNode["Status"].asString();
	if(!applicationNode["UpdateTime"].isNull())
		application_.updateTime = std::stol(applicationNode["UpdateTime"].asString());
	if(!applicationNode["M2MClientStatus"].isNull())
		application_.m2MClientStatus = applicationNode["M2MClientStatus"].asString();
	if(!applicationNode["ResourceServerStatus"].isNull())
		application_.resourceServerStatus = applicationNode["ResourceServerStatus"].asString();
	if(!applicationNode["ResourceServerIdentifier"].isNull())
		application_.resourceServerIdentifier = applicationNode["ResourceServerIdentifier"].asString();
		auto allApplicationVisibility = applicationNode["ApplicationVisibility"]["应用可见性"];
		for (auto value : allApplicationVisibility)
			application_.applicationVisibility.push_back(value.asString());

}

GetApplicationResult::Application GetApplicationResult::getApplication()const
{
	return application_;
}

