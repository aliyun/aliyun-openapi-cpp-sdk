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

#include <alibabacloud/ivpd/model/PreviewModelForPackageDesignResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivpd;
using namespace AlibabaCloud::Ivpd::Model;

PreviewModelForPackageDesignResult::PreviewModelForPackageDesignResult() :
	ServiceResult()
{}

PreviewModelForPackageDesignResult::PreviewModelForPackageDesignResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PreviewModelForPackageDesignResult::~PreviewModelForPackageDesignResult()
{}

void PreviewModelForPackageDesignResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PreviewUrl"].isNull())
		data_.previewUrl = dataNode["PreviewUrl"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string PreviewModelForPackageDesignResult::getMessage()const
{
	return message_;
}

PreviewModelForPackageDesignResult::Data PreviewModelForPackageDesignResult::getData()const
{
	return data_;
}

std::string PreviewModelForPackageDesignResult::getCode()const
{
	return code_;
}

