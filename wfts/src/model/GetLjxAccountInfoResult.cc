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

#include <alibabacloud/wfts/model/GetLjxAccountInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Wfts;
using namespace AlibabaCloud::Wfts::Model;

GetLjxAccountInfoResult::GetLjxAccountInfoResult() :
	ServiceResult()
{}

GetLjxAccountInfoResult::GetLjxAccountInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLjxAccountInfoResult::~GetLjxAccountInfoResult()
{}

void GetLjxAccountInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["LjxAccountInfoId"].isNull())
		ljxAccountInfoId_ = value["LjxAccountInfoId"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["Apple"].isNull())
		apple_ = value["Apple"].asString();

}

std::string GetLjxAccountInfoResult::getApple()const
{
	return apple_;
}

std::string GetLjxAccountInfoResult::getRequestId()const
{
	return requestId_;
}

std::string GetLjxAccountInfoResult::getLjxAccountInfoId()const
{
	return ljxAccountInfoId_;
}

