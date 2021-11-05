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

#include <alibabacloud/dcdn/model/DescribeDcdnAclFieldsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnAclFieldsResult::DescribeDcdnAclFieldsResult() :
	ServiceResult()
{}

DescribeDcdnAclFieldsResult::DescribeDcdnAclFieldsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnAclFieldsResult::~DescribeDcdnAclFieldsResult()
{}

void DescribeDcdnAclFieldsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContentNode = value["Content"]["ContentItem"];
	for (auto valueContentContentItem : allContentNode)
	{
		ContentItem contentObject;
		if(!valueContentContentItem["Fields"].isNull())
			contentObject.fields = valueContentContentItem["Fields"].asString();
		content_.push_back(contentObject);
	}

}

std::vector<DescribeDcdnAclFieldsResult::ContentItem> DescribeDcdnAclFieldsResult::getContent()const
{
	return content_;
}

