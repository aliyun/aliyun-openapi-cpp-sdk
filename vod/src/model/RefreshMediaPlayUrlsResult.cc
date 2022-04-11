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

#include <alibabacloud/vod/model/RefreshMediaPlayUrlsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

RefreshMediaPlayUrlsResult::RefreshMediaPlayUrlsResult() :
	ServiceResult()
{}

RefreshMediaPlayUrlsResult::RefreshMediaPlayUrlsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RefreshMediaPlayUrlsResult::~RefreshMediaPlayUrlsResult()
{}

void RefreshMediaPlayUrlsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["MediaRefreshJobId"].isNull())
		mediaRefreshJobId_ = value["MediaRefreshJobId"].asString();
	if(!value["NonExistMediaIds"].isNull())
		nonExistMediaIds_ = value["NonExistMediaIds"].asString();
	if(!value["ForbiddenMediaIds"].isNull())
		forbiddenMediaIds_ = value["ForbiddenMediaIds"].asString();

}

std::string RefreshMediaPlayUrlsResult::getNonExistMediaIds()const
{
	return nonExistMediaIds_;
}

std::string RefreshMediaPlayUrlsResult::getMediaRefreshJobId()const
{
	return mediaRefreshJobId_;
}

std::string RefreshMediaPlayUrlsResult::getForbiddenMediaIds()const
{
	return forbiddenMediaIds_;
}

