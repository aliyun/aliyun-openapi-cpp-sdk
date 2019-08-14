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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allImageLibList = value["ImageLibList"]["ImageLib"];
	for (auto value : allImageLibList)
	{
		ImageLib imageLibListObject;
		if(!value["ImageCount"].isNull())
			imageLibListObject.imageCount = std::stoi(value["ImageCount"].asString());
		if(!value["ModifiedTime"].isNull())
			imageLibListObject.modifiedTime = value["ModifiedTime"].asString();
		if(!value["Code"].isNull())
			imageLibListObject.code = value["Code"].asString();
		if(!value["Name"].isNull())
			imageLibListObject.name = value["Name"].asString();
		if(!value["Id"].isNull())
			imageLibListObject.id = std::stoi(value["Id"].asString());
		if(!value["Source"].isNull())
			imageLibListObject.source = value["Source"].asString();
		if(!value["Category"].isNull())
			imageLibListObject.category = value["Category"].asString();
		if(!value["ServiceModule"].isNull())
			imageLibListObject.serviceModule = value["ServiceModule"].asString();
		if(!value["Scene"].isNull())
			imageLibListObject.scene = value["Scene"].asString();
		if(!value["Enable"].isNull())
			imageLibListObject.enable = value["Enable"].asString();
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

