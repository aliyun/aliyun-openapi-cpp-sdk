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

#include <alibabacloud/edas/model/InsertK8sApplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

InsertK8sApplicationResult::InsertK8sApplicationResult() :
	ServiceResult()
{}

InsertK8sApplicationResult::InsertK8sApplicationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

InsertK8sApplicationResult::~InsertK8sApplicationResult()
{}

void InsertK8sApplicationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto applicationInfoNode = value["ApplicationInfo"];
	if(!applicationInfoNode["AppName"].isNull())
		applicationInfo_.appName = applicationInfoNode["AppName"].asString();
	if(!applicationInfoNode["AppId"].isNull())
		applicationInfo_.appId = applicationInfoNode["AppId"].asString();
	if(!applicationInfoNode["UserId"].isNull())
		applicationInfo_.userId = applicationInfoNode["UserId"].asString();
	if(!applicationInfoNode["EdasId"].isNull())
		applicationInfo_.edasId = applicationInfoNode["EdasId"].asString();
	if(!applicationInfoNode["Owner"].isNull())
		applicationInfo_.owner = applicationInfoNode["Owner"].asString();
	if(!applicationInfoNode["Dockerize"].isNull())
		applicationInfo_.dockerize = applicationInfoNode["Dockerize"].asString() == "true";
	if(!applicationInfoNode["ClusterType"].isNull())
		applicationInfo_.clusterType = std::stoi(applicationInfoNode["ClusterType"].asString());
	if(!applicationInfoNode["RegionId"].isNull())
		applicationInfo_.regionId = applicationInfoNode["RegionId"].asString();
	if(!applicationInfoNode["ChangeOrderId"].isNull())
		applicationInfo_.changeOrderId = applicationInfoNode["ChangeOrderId"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string InsertK8sApplicationResult::getMessage()const
{
	return message_;
}

InsertK8sApplicationResult::ApplicationInfo InsertK8sApplicationResult::getApplicationInfo()const
{
	return applicationInfo_;
}

int InsertK8sApplicationResult::getCode()const
{
	return code_;
}

