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

#include <alibabacloud/eiam/model/GetLoginRedirectApplicationForBrandResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

GetLoginRedirectApplicationForBrandResult::GetLoginRedirectApplicationForBrandResult() :
	ServiceResult()
{}

GetLoginRedirectApplicationForBrandResult::GetLoginRedirectApplicationForBrandResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLoginRedirectApplicationForBrandResult::~GetLoginRedirectApplicationForBrandResult()
{}

void GetLoginRedirectApplicationForBrandResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto brandLoginRedirectApplicationNode = value["BrandLoginRedirectApplication"];
	if(!brandLoginRedirectApplicationNode["InstanceId"].isNull())
		brandLoginRedirectApplication_.instanceId = brandLoginRedirectApplicationNode["InstanceId"].asString();
	if(!brandLoginRedirectApplicationNode["BrandId"].isNull())
		brandLoginRedirectApplication_.brandId = brandLoginRedirectApplicationNode["BrandId"].asString();
	if(!brandLoginRedirectApplicationNode["ApplicationId"].isNull())
		brandLoginRedirectApplication_.applicationId = brandLoginRedirectApplicationNode["ApplicationId"].asString();

}

GetLoginRedirectApplicationForBrandResult::BrandLoginRedirectApplication GetLoginRedirectApplicationForBrandResult::getBrandLoginRedirectApplication()const
{
	return brandLoginRedirectApplication_;
}

