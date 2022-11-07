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

#include <alibabacloud/oos/model/GetApplicationGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

GetApplicationGroupResult::GetApplicationGroupResult() :
	ServiceResult()
{}

GetApplicationGroupResult::GetApplicationGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetApplicationGroupResult::~GetApplicationGroupResult()
{}

void GetApplicationGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto applicationGroupNode = value["ApplicationGroup"];
	if(!applicationGroupNode["CmsGroupId"].isNull())
		applicationGroup_.cmsGroupId = applicationGroupNode["CmsGroupId"].asString();
	if(!applicationGroupNode["DeployRegionId"].isNull())
		applicationGroup_.deployRegionId = applicationGroupNode["DeployRegionId"].asString();
	if(!applicationGroupNode["Description"].isNull())
		applicationGroup_.description = applicationGroupNode["Description"].asString();
	if(!applicationGroupNode["UpdateDate"].isNull())
		applicationGroup_.updateDate = applicationGroupNode["UpdateDate"].asString();
	if(!applicationGroupNode["ImportTagKey"].isNull())
		applicationGroup_.importTagKey = applicationGroupNode["ImportTagKey"].asString();
	if(!applicationGroupNode["ApplicationName"].isNull())
		applicationGroup_.applicationName = applicationGroupNode["ApplicationName"].asString();
	if(!applicationGroupNode["ImportTagValue"].isNull())
		applicationGroup_.importTagValue = applicationGroupNode["ImportTagValue"].asString();
	if(!applicationGroupNode["Name"].isNull())
		applicationGroup_.name = applicationGroupNode["Name"].asString();
	if(!applicationGroupNode["CreateDate"].isNull())
		applicationGroup_.createDate = applicationGroupNode["CreateDate"].asString();
	if(!applicationGroupNode["DeployParameters"].isNull())
		applicationGroup_.deployParameters = applicationGroupNode["DeployParameters"].asString();
	if(!applicationGroupNode["Status"].isNull())
		applicationGroup_.status = applicationGroupNode["Status"].asString();
	if(!applicationGroupNode["StatusReason"].isNull())
		applicationGroup_.statusReason = applicationGroupNode["StatusReason"].asString();
	if(!applicationGroupNode["DeployOutputs"].isNull())
		applicationGroup_.deployOutputs = applicationGroupNode["DeployOutputs"].asString();
	if(!applicationGroupNode["Progress"].isNull())
		applicationGroup_.progress = applicationGroupNode["Progress"].asString();

}

GetApplicationGroupResult::ApplicationGroup GetApplicationGroupResult::getApplicationGroup()const
{
	return applicationGroup_;
}

