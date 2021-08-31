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

#include <alibabacloud/edas/model/GetSpringCloudTestMethodResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetSpringCloudTestMethodResult::GetSpringCloudTestMethodResult() :
	ServiceResult()
{}

GetSpringCloudTestMethodResult::GetSpringCloudTestMethodResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSpringCloudTestMethodResult::~GetSpringCloudTestMethodResult()
{}

void GetSpringCloudTestMethodResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Path"].isNull())
		data_.path = dataNode["Path"].asString();
	if(!dataNode["HttpHeaders"].isNull())
		data_.httpHeaders = dataNode["HttpHeaders"].asString();
	if(!dataNode["Params"].isNull())
		data_.params = dataNode["Params"].asString();
		auto allRequestMethods = dataNode["RequestMethods"]["RequestMethod"];
		for (auto value : allRequestMethods)
			data_.requestMethods.push_back(value.asString());
		auto allUrls = dataNode["Urls"]["Url"];
		for (auto value : allUrls)
			data_.urls.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetSpringCloudTestMethodResult::getMessage()const
{
	return message_;
}

GetSpringCloudTestMethodResult::Data GetSpringCloudTestMethodResult::getData()const
{
	return data_;
}

int GetSpringCloudTestMethodResult::getCode()const
{
	return code_;
}

bool GetSpringCloudTestMethodResult::getSuccess()const
{
	return success_;
}

