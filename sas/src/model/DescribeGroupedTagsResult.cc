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

#include <alibabacloud/sas/model/DescribeGroupedTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeGroupedTagsResult::DescribeGroupedTagsResult() :
	ServiceResult()
{}

DescribeGroupedTagsResult::DescribeGroupedTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGroupedTagsResult::~DescribeGroupedTagsResult()
{}

void DescribeGroupedTagsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGroupedFileds = value["GroupedFileds"]["GroupedFiled"];
	for (auto value : allGroupedFileds)
	{
		GroupedFiled groupedFiledsObject;
		if(!value["Name"].isNull())
			groupedFiledsObject.name = value["Name"].asString();
		if(!value["TagId"].isNull())
			groupedFiledsObject.tagId = std::stoi(value["TagId"].asString());
		if(!value["Count"].isNull())
			groupedFiledsObject.count = value["Count"].asString();
		groupedFileds_.push_back(groupedFiledsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

int DescribeGroupedTagsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<DescribeGroupedTagsResult::GroupedFiled> DescribeGroupedTagsResult::getGroupedFileds()const
{
	return groupedFileds_;
}

int DescribeGroupedTagsResult::getCount()const
{
	return count_;
}

bool DescribeGroupedTagsResult::getSuccess()const
{
	return success_;
}

