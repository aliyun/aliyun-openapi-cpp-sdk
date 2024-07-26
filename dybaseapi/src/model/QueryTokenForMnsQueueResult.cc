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

#include <alibabacloud/dybaseapi/model/QueryTokenForMnsQueueResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dybaseapi;
using namespace AlibabaCloud::Dybaseapi::Model;

QueryTokenForMnsQueueResult::QueryTokenForMnsQueueResult() :
	ServiceResult()
{}

QueryTokenForMnsQueueResult::QueryTokenForMnsQueueResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTokenForMnsQueueResult::~QueryTokenForMnsQueueResult()
{}

void QueryTokenForMnsQueueResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto messageTokenDTONode = value["MessageTokenDTO"];
	if(!messageTokenDTONode["AccessKeySecret"].isNull())
		messageTokenDTO_.accessKeySecret = messageTokenDTONode["AccessKeySecret"].asString();
	if(!messageTokenDTONode["ExpireTime"].isNull())
		messageTokenDTO_.expireTime = messageTokenDTONode["ExpireTime"].asString();
	if(!messageTokenDTONode["SecurityToken"].isNull())
		messageTokenDTO_.securityToken = messageTokenDTONode["SecurityToken"].asString();
	if(!messageTokenDTONode["AccessKeyId"].isNull())
		messageTokenDTO_.accessKeyId = messageTokenDTONode["AccessKeyId"].asString();
	if(!messageTokenDTONode["CreateTime"].isNull())
		messageTokenDTO_.createTime = messageTokenDTONode["CreateTime"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

QueryTokenForMnsQueueResult::MessageTokenDTO QueryTokenForMnsQueueResult::getMessageTokenDTO()const
{
	return messageTokenDTO_;
}

std::string QueryTokenForMnsQueueResult::getMessage()const
{
	return message_;
}

std::string QueryTokenForMnsQueueResult::getCode()const
{
	return code_;
}

