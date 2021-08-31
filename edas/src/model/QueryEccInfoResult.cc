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

#include <alibabacloud/edas/model/QueryEccInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

QueryEccInfoResult::QueryEccInfoResult() :
	ServiceResult()
{}

QueryEccInfoResult::QueryEccInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryEccInfoResult::~QueryEccInfoResult()
{}

void QueryEccInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto eccInfoNode = value["EccInfo"];
	if(!eccInfoNode["AppId"].isNull())
		eccInfo_.appId = eccInfoNode["AppId"].asString();
	if(!eccInfoNode["EccId"].isNull())
		eccInfo_.eccId = eccInfoNode["EccId"].asString();
	if(!eccInfoNode["EcuId"].isNull())
		eccInfo_.ecuId = eccInfoNode["EcuId"].asString();
	if(!eccInfoNode["GroupId"].isNull())
		eccInfo_.groupId = eccInfoNode["GroupId"].asString();
	if(!eccInfoNode["GroupName"].isNull())
		eccInfo_.groupName = eccInfoNode["GroupName"].asString();
	if(!eccInfoNode["PackageMd5"].isNull())
		eccInfo_.packageMd5 = eccInfoNode["PackageMd5"].asString();
	if(!eccInfoNode["PackageVersion"].isNull())
		eccInfo_.packageVersion = eccInfoNode["PackageVersion"].asString();
	if(!eccInfoNode["VpcId"].isNull())
		eccInfo_.vpcId = eccInfoNode["VpcId"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

QueryEccInfoResult::EccInfo QueryEccInfoResult::getEccInfo()const
{
	return eccInfo_;
}

std::string QueryEccInfoResult::getMessage()const
{
	return message_;
}

int QueryEccInfoResult::getCode()const
{
	return code_;
}

