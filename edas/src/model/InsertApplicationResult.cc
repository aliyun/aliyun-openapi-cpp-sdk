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

#include <alibabacloud/edas/model/InsertApplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

InsertApplicationResult::InsertApplicationResult() :
	ServiceResult()
{}

InsertApplicationResult::InsertApplicationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

InsertApplicationResult::~InsertApplicationResult()
{}

void InsertApplicationResult::parse(const std::string &payload)
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
	if(!applicationInfoNode["Owner"].isNull())
		applicationInfo_.owner = applicationInfoNode["Owner"].asString();
	if(!applicationInfoNode["Dockerize"].isNull())
		applicationInfo_.dockerize = applicationInfoNode["Dockerize"].asString() == "true";
	if(!applicationInfoNode["Port"].isNull())
		applicationInfo_.port = std::stoi(applicationInfoNode["Port"].asString());
	if(!applicationInfoNode["RegionName"].isNull())
		applicationInfo_.regionName = applicationInfoNode["RegionName"].asString();
	if(!applicationInfoNode["ChangeOrderId"].isNull())
		applicationInfo_.changeOrderId = applicationInfoNode["ChangeOrderId"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string InsertApplicationResult::getMessage()const
{
	return message_;
}

InsertApplicationResult::ApplicationInfo InsertApplicationResult::getApplicationInfo()const
{
	return applicationInfo_;
}

int InsertApplicationResult::getCode()const
{
	return code_;
}

