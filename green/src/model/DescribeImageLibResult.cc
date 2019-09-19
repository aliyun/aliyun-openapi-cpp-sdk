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

#include <alibabacloud/green/model/DescribeImageLibResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeImageLibResult::DescribeImageLibResult() :
	ServiceResult()
{}

DescribeImageLibResult::DescribeImageLibResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageLibResult::~DescribeImageLibResult()
{}

void DescribeImageLibResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImageLibListNode = value["ImageLibList"]["ImageLib"];
	for (auto valueImageLibListImageLib : allImageLibListNode)
	{
		ImageLib imageLibListObject;
		if(!valueImageLibListImageLib["ImageCount"].isNull())
			imageLibListObject.imageCount = std::stoi(valueImageLibListImageLib["ImageCount"].asString());
		if(!valueImageLibListImageLib["ModifiedTime"].isNull())
			imageLibListObject.modifiedTime = valueImageLibListImageLib["ModifiedTime"].asString();
		if(!valueImageLibListImageLib["Code"].isNull())
			imageLibListObject.code = valueImageLibListImageLib["Code"].asString();
		if(!valueImageLibListImageLib["Name"].isNull())
			imageLibListObject.name = valueImageLibListImageLib["Name"].asString();
		if(!valueImageLibListImageLib["Id"].isNull())
			imageLibListObject.id = std::stoi(valueImageLibListImageLib["Id"].asString());
		if(!valueImageLibListImageLib["Source"].isNull())
			imageLibListObject.source = valueImageLibListImageLib["Source"].asString();
		if(!valueImageLibListImageLib["Category"].isNull())
			imageLibListObject.category = valueImageLibListImageLib["Category"].asString();
		if(!valueImageLibListImageLib["ServiceModule"].isNull())
			imageLibListObject.serviceModule = valueImageLibListImageLib["ServiceModule"].asString();
		if(!valueImageLibListImageLib["Scene"].isNull())
			imageLibListObject.scene = valueImageLibListImageLib["Scene"].asString();
		if(!valueImageLibListImageLib["Enable"].isNull())
			imageLibListObject.enable = valueImageLibListImageLib["Enable"].asString();
		auto allBizTypes = value["BizTypes"]["StringItem"];
		for (auto value : allBizTypes)
			imageLibListObject.bizTypes.push_back(value.asString());
		imageLibList_.push_back(imageLibListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeImageLibResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeImageLibResult::ImageLib> DescribeImageLibResult::getImageLibList()const
{
	return imageLibList_;
}

