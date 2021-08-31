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

#include <alibabacloud/edas/model/InsertDeployGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

InsertDeployGroupResult::InsertDeployGroupResult() :
	ServiceResult()
{}

InsertDeployGroupResult::InsertDeployGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

InsertDeployGroupResult::~InsertDeployGroupResult()
{}

void InsertDeployGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto deployGroupEntityNode = value["DeployGroupEntity"];
	if(!deployGroupEntityNode["Id"].isNull())
		deployGroupEntity_.id = deployGroupEntityNode["Id"].asString();
	if(!deployGroupEntityNode["GroupName"].isNull())
		deployGroupEntity_.groupName = deployGroupEntityNode["GroupName"].asString();
	if(!deployGroupEntityNode["GroupType"].isNull())
		deployGroupEntity_.groupType = std::stoi(deployGroupEntityNode["GroupType"].asString());
	if(!deployGroupEntityNode["AppId"].isNull())
		deployGroupEntity_.appId = deployGroupEntityNode["AppId"].asString();
	if(!deployGroupEntityNode["ClusterId"].isNull())
		deployGroupEntity_.clusterId = deployGroupEntityNode["ClusterId"].asString();
	if(!deployGroupEntityNode["PackageVersionId"].isNull())
		deployGroupEntity_.packageVersionId = deployGroupEntityNode["PackageVersionId"].asString();
	if(!deployGroupEntityNode["AppVersionId"].isNull())
		deployGroupEntity_.appVersionId = deployGroupEntityNode["AppVersionId"].asString();
	if(!deployGroupEntityNode["CreateTime"].isNull())
		deployGroupEntity_.createTime = std::stol(deployGroupEntityNode["CreateTime"].asString());
	if(!deployGroupEntityNode["UpdateTime"].isNull())
		deployGroupEntity_.updateTime = std::stol(deployGroupEntityNode["UpdateTime"].asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string InsertDeployGroupResult::getMessage()const
{
	return message_;
}

InsertDeployGroupResult::DeployGroupEntity InsertDeployGroupResult::getDeployGroupEntity()const
{
	return deployGroupEntity_;
}

int InsertDeployGroupResult::getCode()const
{
	return code_;
}

