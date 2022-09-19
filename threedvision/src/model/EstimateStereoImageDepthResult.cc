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

#include <alibabacloud/threedvision/model/EstimateStereoImageDepthResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Threedvision;
using namespace AlibabaCloud::Threedvision::Model;

EstimateStereoImageDepthResult::EstimateStereoImageDepthResult() :
	ServiceResult()
{}

EstimateStereoImageDepthResult::EstimateStereoImageDepthResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

EstimateStereoImageDepthResult::~EstimateStereoImageDepthResult()
{}

void EstimateStereoImageDepthResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["DisparityMapURL"].isNull())
		data_.disparityMapURL = dataNode["DisparityMapURL"].asString();
	if(!dataNode["DisparityVisURL"].isNull())
		data_.disparityVisURL = dataNode["DisparityVisURL"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string EstimateStereoImageDepthResult::getMessage()const
{
	return message_;
}

EstimateStereoImageDepthResult::Data EstimateStereoImageDepthResult::getData()const
{
	return data_;
}

std::string EstimateStereoImageDepthResult::getCode()const
{
	return code_;
}

