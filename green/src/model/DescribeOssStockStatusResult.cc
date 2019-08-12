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

#include <alibabacloud/green/model/DescribeOssStockStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeOssStockStatusResult::DescribeOssStockStatusResult() :
	ServiceResult()
{}

DescribeOssStockStatusResult::DescribeOssStockStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOssStockStatusResult::~DescribeOssStockStatusResult()
{}

void DescribeOssStockStatusResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allBucketList = value["BucketList"]["bucket"];
	for (auto value : allBucketList)
	{
		Bucket bucketListObject;
		if(!value["Selected"].isNull())
			bucketListObject.selected = value["Selected"].asString() == "true";
		if(!value["Bucket"].isNull())
			bucketListObject.bucket = value["Bucket"].asString();
		auto allPrefixes = value["Prefixes"]["prefixe"];
		for (auto value : allPrefixes)
			bucketListObject.prefixes.push_back(value.asString());
		bucketList_.push_back(bucketListObject);
	}
	auto allSceneList = value["SceneList"]["scene"];
	for (const auto &item : allSceneList)
		sceneList_.push_back(item.asString());
	auto allResouceTypeList = value["ResouceTypeList"]["resourceType"];
	for (const auto &item : allResouceTypeList)
		resouceTypeList_.push_back(item.asString());
	if(!value["StockStatus"].isNull())
		stockStatus_ = std::stoi(value["StockStatus"].asString());
	if(!value["FinishedTime"].isNull())
		finishedTime_ = value["FinishedTime"].asString();
	if(!value["ImageTotalCount"].isNull())
		imageTotalCount_ = std::stoi(value["ImageTotalCount"].asString());
	if(!value["ImagePornCount"].isNull())
		imagePornCount_ = std::stoi(value["ImagePornCount"].asString());
	if(!value["ImageTerrorismCount"].isNull())
		imageTerrorismCount_ = std::stoi(value["ImageTerrorismCount"].asString());
	if(!value["VideoTotalCount"].isNull())
		videoTotalCount_ = std::stoi(value["VideoTotalCount"].asString());
	if(!value["VideoPornCount"].isNull())
		videoPornCount_ = std::stoi(value["VideoPornCount"].asString());
	if(!value["VideoTerrorismCount"].isNull())
		videoTerrorismCount_ = std::stoi(value["VideoTerrorismCount"].asString());

}

int DescribeOssStockStatusResult::getImageTerrorismCount()const
{
	return imageTerrorismCount_;
}

int DescribeOssStockStatusResult::getVideoPornCount()const
{
	return videoPornCount_;
}

int DescribeOssStockStatusResult::getStockStatus()const
{
	return stockStatus_;
}

int DescribeOssStockStatusResult::getImagePornCount()const
{
	return imagePornCount_;
}

int DescribeOssStockStatusResult::getVideoTotalCount()const
{
	return videoTotalCount_;
}

int DescribeOssStockStatusResult::getImageTotalCount()const
{
	return imageTotalCount_;
}

std::vector<std::string> DescribeOssStockStatusResult::getSceneList()const
{
	return sceneList_;
}

std::vector<DescribeOssStockStatusResult::Bucket> DescribeOssStockStatusResult::getBucketList()const
{
	return bucketList_;
}

std::string DescribeOssStockStatusResult::getFinishedTime()const
{
	return finishedTime_;
}

std::vector<std::string> DescribeOssStockStatusResult::getResouceTypeList()const
{
	return resouceTypeList_;
}

int DescribeOssStockStatusResult::getVideoTerrorismCount()const
{
	return videoTerrorismCount_;
}

