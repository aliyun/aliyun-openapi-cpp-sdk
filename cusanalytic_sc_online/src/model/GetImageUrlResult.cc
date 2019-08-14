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

#include <alibabacloud/cusanalytic_sc_online/model/GetImageUrlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cusanalytic_sc_online;
using namespace AlibabaCloud::Cusanalytic_sc_online::Model;

GetImageUrlResult::GetImageUrlResult() :
	ServiceResult()
{}

GetImageUrlResult::GetImageUrlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetImageUrlResult::~GetImageUrlResult()
{}

void GetImageUrlResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allUrls = value["Urls"]["ImageUrl"];
	for (auto value : allUrls)
	{
		ImageUrl urlsObject;
		if(!value["ObjectKey"].isNull())
			urlsObject.objectKey = value["ObjectKey"].asString();
		if(!value["Url"].isNull())
			urlsObject.url = value["Url"].asString();
		urls_.push_back(urlsObject);
	}
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetImageUrlResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<GetImageUrlResult::ImageUrl> GetImageUrlResult::getUrls()const
{
	return urls_;
}

bool GetImageUrlResult::getSuccess()const
{
	return success_;
}

