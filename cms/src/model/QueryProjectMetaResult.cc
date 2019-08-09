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

#include <alibabacloud/cms/model/QueryProjectMetaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

QueryProjectMetaResult::QueryProjectMetaResult() :
	ServiceResult()
{}

QueryProjectMetaResult::QueryProjectMetaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryProjectMetaResult::~QueryProjectMetaResult()
{}

void QueryProjectMetaResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allResources = value["Resources"]["Resource"];
	for (auto value : allResources)
	{
		Resource resourcesObject;
		if(!value["Project"].isNull())
			resourcesObject.project = value["Project"].asString();
		if(!value["Description"].isNull())
			resourcesObject.description = value["Description"].asString();
		if(!value["Labels"].isNull())
			resourcesObject.labels = value["Labels"].asString();
		resources_.push_back(resourcesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::vector<QueryProjectMetaResult::Resource> QueryProjectMetaResult::getResources()const
{
	return resources_;
}

std::string QueryProjectMetaResult::getErrorCode()const
{
	return errorCode_;
}

std::string QueryProjectMetaResult::getErrorMessage()const
{
	return errorMessage_;
}

bool QueryProjectMetaResult::getSuccess()const
{
	return success_;
}

