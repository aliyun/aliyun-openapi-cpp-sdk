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

#include <alibabacloud/ims/model/ListAppSecretIdsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ims;
using namespace AlibabaCloud::Ims::Model;

ListAppSecretIdsResult::ListAppSecretIdsResult() :
	ServiceResult()
{}

ListAppSecretIdsResult::ListAppSecretIdsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppSecretIdsResult::~ListAppSecretIdsResult()
{}

void ListAppSecretIdsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAppSecretsNode = value["AppSecrets"]["AppSecret"];
	for (auto valueAppSecretsAppSecret : allAppSecretsNode)
	{
		AppSecret appSecretsObject;
		if(!valueAppSecretsAppSecret["AppId"].isNull())
			appSecretsObject.appId = valueAppSecretsAppSecret["AppId"].asString();
		if(!valueAppSecretsAppSecret["AppSecretId"].isNull())
			appSecretsObject.appSecretId = valueAppSecretsAppSecret["AppSecretId"].asString();
		if(!valueAppSecretsAppSecret["CreateDate"].isNull())
			appSecretsObject.createDate = valueAppSecretsAppSecret["CreateDate"].asString();
		appSecrets_.push_back(appSecretsObject);
	}

}

std::vector<ListAppSecretIdsResult::AppSecret> ListAppSecretIdsResult::getAppSecrets()const
{
	return appSecrets_;
}

