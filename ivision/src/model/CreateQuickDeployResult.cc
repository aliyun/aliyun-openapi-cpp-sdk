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

#include <alibabacloud/ivision/model/CreateQuickDeployResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

CreateQuickDeployResult::CreateQuickDeployResult() :
	ServiceResult()
{}

CreateQuickDeployResult::CreateQuickDeployResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateQuickDeployResult::~CreateQuickDeployResult()
{}

void CreateQuickDeployResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto quickDeployNode = value["QuickDeploy"];
	if(!quickDeployNode["ProjectId"].isNull())
		quickDeploy_.projectId = quickDeployNode["ProjectId"].asString();
	if(!quickDeployNode["IterationId"].isNull())
		quickDeploy_.iterationId = quickDeployNode["IterationId"].asString();
	if(!quickDeployNode["ModelId"].isNull())
		quickDeploy_.modelId = quickDeployNode["ModelId"].asString();
	if(!quickDeployNode["CreationTime"].isNull())
		quickDeploy_.creationTime = quickDeployNode["CreationTime"].asString();
	if(!quickDeployNode["DeployStatus"].isNull())
		quickDeploy_.deployStatus = quickDeployNode["DeployStatus"].asString();

}

CreateQuickDeployResult::QuickDeploy CreateQuickDeployResult::getQuickDeploy()const
{
	return quickDeploy_;
}

