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

#include <alibabacloud/trademark/model/QueryCredentialsInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

QueryCredentialsInfoResult::QueryCredentialsInfoResult() :
	ServiceResult()
{}

QueryCredentialsInfoResult::QueryCredentialsInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCredentialsInfoResult::~QueryCredentialsInfoResult()
{}

void QueryCredentialsInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto credentialsInfoNode = value["CredentialsInfo"];
	if(!credentialsInfoNode["CardNumber"].isNull())
		credentialsInfo_.cardNumber = credentialsInfoNode["CardNumber"].asString();
	if(!credentialsInfoNode["Address"].isNull())
		credentialsInfo_.address = credentialsInfoNode["Address"].asString();
	if(!credentialsInfoNode["CompanyName"].isNull())
		credentialsInfo_.companyName = credentialsInfoNode["CompanyName"].asString();
	if(!credentialsInfoNode["PersonName"].isNull())
		credentialsInfo_.personName = credentialsInfoNode["PersonName"].asString();
	if(!credentialsInfoNode["Province"].isNull())
		credentialsInfo_.province = credentialsInfoNode["Province"].asString();

}

QueryCredentialsInfoResult::CredentialsInfo QueryCredentialsInfoResult::getCredentialsInfo()const
{
	return credentialsInfo_;
}

