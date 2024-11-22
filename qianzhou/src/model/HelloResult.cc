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

#include <alibabacloud/qianzhou/model/HelloResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qianzhou;
using namespace AlibabaCloud::Qianzhou::Model;

HelloResult::HelloResult() :
	ServiceResult()
{}

HelloResult::HelloResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

HelloResult::~HelloResult()
{}

void HelloResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["data"];
	if(!dataNode["date"].isNull())
		data_.date = dataNode["date"].asString();
	if(!dataNode["name"].isNull())
		data_.name = dataNode["name"].asString();
	if(!dataNode["success"].isNull())
		data_.success = dataNode["success"].asString() == "true";
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["msg"].isNull())
		msg_ = value["msg"].asString();

}

std::string HelloResult::getMsg()const
{
	return msg_;
}

std::string HelloResult::getRequestId()const
{
	return requestId_;
}

HelloResult::Data HelloResult::getData()const
{
	return data_;
}

std::string HelloResult::getCode()const
{
	return code_;
}

