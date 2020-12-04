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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBucketListNode = value["BucketList"]["bucket"];
	for (auto valueBucketListbucket : allBucketListNode)
	{
		Bucket bucketListObject;
		if(!valueBucketListbucket["Selected"].isNull())
			bucketListObject.selected = valueBucketListbucket["Selected"].asString() == "true";
		if(!valueBucketListbucket["Bucket"].isNull())
			bucketListObject.bucket = valueBucketListbucket["Bucket"].asString();
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
	if(!value["ImageAdCount"].isNull())
		imageAdCount_ = std::stoi(value["ImageAdCount"].asString());
	if(!value["ImageLiveCount"].isNull())
		imageLiveCount_ = std::stoi(value["ImageLiveCount"].asString());
	if(!value["VideoTotalCount"].isNull())
		videoTotalCount_ = std::stoi(value["VideoTotalCount"].asString());
	if(!value["VideoPornCount"].isNull())
		videoPornCount_ = std::stoi(value["VideoPornCount"].asString());
	if(!value["VideoTerrorismCount"].isNull())
		videoTerrorismCount_ = std::stoi(value["VideoTerrorismCount"].asString());
	if(!value["VideoAdCount"].isNull())
		videoAdCount_ = std::stoi(value["VideoAdCount"].asString());
	if(!value["VideoLiveCount"].isNull())
		videoLiveCount_ = std::stoi(value["VideoLiveCount"].asString());
	if(!value["VideoVoiceAntispamCount"].isNull())
		videoVoiceAntispamCount_ = std::stoi(value["VideoVoiceAntispamCount"].asString());
	if(!value["AudioTotalCount"].isNull())
		audioTotalCount_ = std::stoi(value["AudioTotalCount"].asString());
	if(!value["AudioAntispamCount"].isNull())
		audioAntispamCount_ = std::stoi(value["AudioAntispamCount"].asString());

}

int DescribeOssStockStatusResult::getAudioTotalCount()const
{
	return audioTotalCount_;
}

int DescribeOssStockStatusResult::getImageTerrorismCount()const
{
	return imageTerrorismCount_;
}

int DescribeOssStockStatusResult::getVideoPornCount()const
{
	return videoPornCount_;
}

int DescribeOssStockStatusResult::getImagePornCount()const
{
	return imagePornCount_;
}

int DescribeOssStockStatusResult::getAudioAntispamCount()const
{
	return audioAntispamCount_;
}

std::vector<std::string> DescribeOssStockStatusResult::getSceneList()const
{
	return sceneList_;
}

int DescribeOssStockStatusResult::getImageAdCount()const
{
	return imageAdCount_;
}

int DescribeOssStockStatusResult::getVideoLiveCount()const
{
	return videoLiveCount_;
}

std::vector<DescribeOssStockStatusResult::Bucket> DescribeOssStockStatusResult::getBucketList()const
{
	return bucketList_;
}

std::string DescribeOssStockStatusResult::getFinishedTime()const
{
	return finishedTime_;
}

int DescribeOssStockStatusResult::getStockStatus()const
{
	return stockStatus_;
}

int DescribeOssStockStatusResult::getVideoTotalCount()const
{
	return videoTotalCount_;
}

int DescribeOssStockStatusResult::getImageTotalCount()const
{
	return imageTotalCount_;
}

int DescribeOssStockStatusResult::getImageLiveCount()const
{
	return imageLiveCount_;
}

int DescribeOssStockStatusResult::getVideoAdCount()const
{
	return videoAdCount_;
}

int DescribeOssStockStatusResult::getVideoVoiceAntispamCount()const
{
	return videoVoiceAntispamCount_;
}

std::vector<std::string> DescribeOssStockStatusResult::getResouceTypeList()const
{
	return resouceTypeList_;
}

int DescribeOssStockStatusResult::getVideoTerrorismCount()const
{
	return videoTerrorismCount_;
}

