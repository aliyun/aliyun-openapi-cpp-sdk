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

#include <alibabacloud/sophonsoar/model/DescribePopApiResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sophonsoar;
using namespace AlibabaCloud::Sophonsoar::Model;

DescribePopApiResult::DescribePopApiResult() :
	ServiceResult()
{}

DescribePopApiResult::DescribePopApiResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePopApiResult::~DescribePopApiResult()
{}

void DescribePopApiResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOpenApiMetaListNode = value["OpenApiMetaList"]["OpenApiMetaListItem"];
	for (auto valueOpenApiMetaListOpenApiMetaListItem : allOpenApiMetaListNode)
	{
		OpenApiMetaListItem openApiMetaListObject;
		if(!valueOpenApiMetaListOpenApiMetaListItem["Name"].isNull())
			openApiMetaListObject.name = valueOpenApiMetaListOpenApiMetaListItem["Name"].asString();
		if(!valueOpenApiMetaListOpenApiMetaListItem["Required"].isNull())
			openApiMetaListObject.required = valueOpenApiMetaListOpenApiMetaListItem["Required"].asString() == "true";
		if(!valueOpenApiMetaListOpenApiMetaListItem["ExampleValue"].isNull())
			openApiMetaListObject.exampleValue = valueOpenApiMetaListOpenApiMetaListItem["ExampleValue"].asString();
		if(!valueOpenApiMetaListOpenApiMetaListItem["Description"].isNull())
			openApiMetaListObject.description = valueOpenApiMetaListOpenApiMetaListItem["Description"].asString();
		if(!valueOpenApiMetaListOpenApiMetaListItem["In"].isNull())
			openApiMetaListObject.in = valueOpenApiMetaListOpenApiMetaListItem["In"].asString();
		if(!valueOpenApiMetaListOpenApiMetaListItem["Visibility"].isNull())
			openApiMetaListObject.visibility = valueOpenApiMetaListOpenApiMetaListItem["Visibility"].asString();
		if(!valueOpenApiMetaListOpenApiMetaListItem["Type"].isNull())
			openApiMetaListObject.type = valueOpenApiMetaListOpenApiMetaListItem["Type"].asString();
		if(!valueOpenApiMetaListOpenApiMetaListItem["IsRequired"].isNull())
			openApiMetaListObject.isRequired = valueOpenApiMetaListOpenApiMetaListItem["IsRequired"].asString() == "true";
		openApiMetaList_.push_back(openApiMetaListObject);
	}
	if(!value["PopCode"].isNull())
		popCode_ = value["PopCode"].asString();
	if(!value["Version"].isNull())
		version_ = value["Version"].asString();
	if(!value["ApiName"].isNull())
		apiName_ = value["ApiName"].asString();
	if(!value["ApiMeta"].isNull())
		apiMeta_ = value["ApiMeta"].asString();

}

std::string DescribePopApiResult::getApiMeta()const
{
	return apiMeta_;
}

std::vector<DescribePopApiResult::OpenApiMetaListItem> DescribePopApiResult::getOpenApiMetaList()const
{
	return openApiMetaList_;
}

std::string DescribePopApiResult::getVersion()const
{
	return version_;
}

std::string DescribePopApiResult::getApiName()const
{
	return apiName_;
}

std::string DescribePopApiResult::getPopCode()const
{
	return popCode_;
}

