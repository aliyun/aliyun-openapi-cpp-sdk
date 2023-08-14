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

#include <alibabacloud/ft/model/RpcDataUploadResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ft;
using namespace AlibabaCloud::Ft::Model;

RpcDataUploadResult::RpcDataUploadResult() :
	ServiceResult()
{}

RpcDataUploadResult::RpcDataUploadResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RpcDataUploadResult::~RpcDataUploadResult()
{}

void RpcDataUploadResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["url"].isNull())
		url_ = value["url"].asString();
	if(!value["totalBytes"].isNull())
		totalBytes_ = std::stol(value["totalBytes"].asString());
	if(!value["totalTime"].isNull())
		totalTime_ = std::stol(value["totalTime"].asString());
	if(!value["speed"].isNull())
		speed_ = value["speed"].asString();
	if(!value["params"].isNull())
		params_ = value["params"].asString();
	if(!value["headers"].isNull())
		headers_ = value["headers"].asString();

}

std::string RpcDataUploadResult::getSpeed()const
{
	return speed_;
}

std::string RpcDataUploadResult::getHeaders()const
{
	return headers_;
}

long RpcDataUploadResult::getTotalBytes()const
{
	return totalBytes_;
}

long RpcDataUploadResult::getTotalTime()const
{
	return totalTime_;
}

std::string RpcDataUploadResult::getParams()const
{
	return params_;
}

std::string RpcDataUploadResult::getUrl()const
{
	return url_;
}

