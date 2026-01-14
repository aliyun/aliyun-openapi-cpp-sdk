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

#include <alibabacloud/quickbi-public/model/QueryUserByMobileAccountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryUserByMobileAccountResult::QueryUserByMobileAccountResult() :
	ServiceResult()
{}

QueryUserByMobileAccountResult::QueryUserByMobileAccountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryUserByMobileAccountResult::~QueryUserByMobileAccountResult()
{}

void QueryUserByMobileAccountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["BoundUserId"].isNull())
		result_.boundUserId = resultNode["BoundUserId"].asString();
	if(!resultNode["ThirdAccountName"].isNull())
		result_.thirdAccountName = resultNode["ThirdAccountName"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryUserByMobileAccountResult::getSuccess()const
{
	return success_;
}

QueryUserByMobileAccountResult::Result QueryUserByMobileAccountResult::getResult()const
{
	return result_;
}

