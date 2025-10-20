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

#include <alibabacloud/eiam/model/GetApplicationTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

GetApplicationTemplateResult::GetApplicationTemplateResult() :
	ServiceResult()
{}

GetApplicationTemplateResult::GetApplicationTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetApplicationTemplateResult::~GetApplicationTemplateResult()
{}

void GetApplicationTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto applicationTemplateNode = value["ApplicationTemplate"];
	if(!applicationTemplateNode["ApplicationTemplateId"].isNull())
		applicationTemplate_.applicationTemplateId = applicationTemplateNode["ApplicationTemplateId"].asString();
	if(!applicationTemplateNode["ApplicationTemplateName"].isNull())
		applicationTemplate_.applicationTemplateName = applicationTemplateNode["ApplicationTemplateName"].asString();
	if(!applicationTemplateNode["Description"].isNull())
		applicationTemplate_.description = applicationTemplateNode["Description"].asString();
	if(!applicationTemplateNode["LogoUrl"].isNull())
		applicationTemplate_.logoUrl = applicationTemplateNode["LogoUrl"].asString();
	if(!applicationTemplateNode["HelpDocumentUrl"].isNull())
		applicationTemplate_.helpDocumentUrl = applicationTemplateNode["HelpDocumentUrl"].asString();
	if(!applicationTemplateNode["CreateTime"].isNull())
		applicationTemplate_.createTime = std::stol(applicationTemplateNode["CreateTime"].asString());
	if(!applicationTemplateNode["UpdateTime"].isNull())
		applicationTemplate_.updateTime = std::stol(applicationTemplateNode["UpdateTime"].asString());
	if(!applicationTemplateNode["ServiceManaged"].isNull())
		applicationTemplate_.serviceManaged = applicationTemplateNode["ServiceManaged"].asString() == "true";
	if(!applicationTemplateNode["ManagedServiceCode"].isNull())
		applicationTemplate_.managedServiceCode = applicationTemplateNode["ManagedServiceCode"].asString();
	if(!applicationTemplateNode["ServiceConsoleUrl"].isNull())
		applicationTemplate_.serviceConsoleUrl = applicationTemplateNode["ServiceConsoleUrl"].asString();
	auto saleInfoNode = applicationTemplateNode["SaleInfo"];
	if(!saleInfoNode["AlwaysFree"].isNull())
		applicationTemplate_.saleInfo.alwaysFree = saleInfoNode["AlwaysFree"].asString() == "true";
		auto allSsoTypes = applicationTemplateNode["SsoTypes"]["ssoType"];
		for (auto value : allSsoTypes)
			applicationTemplate_.ssoTypes.push_back(value.asString());

}

GetApplicationTemplateResult::ApplicationTemplate GetApplicationTemplateResult::getApplicationTemplate()const
{
	return applicationTemplate_;
}

