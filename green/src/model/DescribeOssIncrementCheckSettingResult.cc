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

#include <alibabacloud/green/model/DescribeOssIncrementCheckSettingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeOssIncrementCheckSettingResult::DescribeOssIncrementCheckSettingResult() :
	ServiceResult()
{}

DescribeOssIncrementCheckSettingResult::DescribeOssIncrementCheckSettingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOssIncrementCheckSettingResult::~DescribeOssIncrementCheckSettingResult()
{}

void DescribeOssIncrementCheckSettingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBucketConfigListNode = value["BucketConfigList"]["BucketConfig"];
	for (auto valueBucketConfigListBucketConfig : allBucketConfigListNode)
	{
		BucketConfig bucketConfigListObject;
		if(!valueBucketConfigListBucketConfig["Selected"].isNull())
			bucketConfigListObject.selected = valueBucketConfigListBucketConfig["Selected"].asString() == "true";
		if(!valueBucketConfigListBucketConfig["Bucket"].isNull())
			bucketConfigListObject.bucket = valueBucketConfigListBucketConfig["Bucket"].asString();
		auto allPrefixes = value["Prefixes"]["Prefix"];
		for (auto value : allPrefixes)
			bucketConfigListObject.prefixes.push_back(value.asString());
		bucketConfigList_.push_back(bucketConfigListObject);
	}
	auto imageAutoFreezeNode = value["ImageAutoFreeze"];
	if(!imageAutoFreezeNode["Enabled"].isNull())
		imageAutoFreeze_.enabled = imageAutoFreezeNode["Enabled"].asString() == "true";
	if(!imageAutoFreezeNode["Porn"].isNull())
		imageAutoFreeze_.porn = imageAutoFreezeNode["Porn"].asString();
	if(!imageAutoFreezeNode["Terrorism"].isNull())
		imageAutoFreeze_.terrorism = imageAutoFreezeNode["Terrorism"].asString();
	if(!imageAutoFreezeNode["Ad"].isNull())
		imageAutoFreeze_.ad = imageAutoFreezeNode["Ad"].asString();
	if(!imageAutoFreezeNode["Live"].isNull())
		imageAutoFreeze_.live = imageAutoFreezeNode["Live"].asString();
	auto audioAntispamFreezeConfigNode = value["AudioAntispamFreezeConfig"];
	if(!audioAntispamFreezeConfigNode["Type"].isNull())
		audioAntispamFreezeConfig_.type = audioAntispamFreezeConfigNode["Type"].asString();
	if(!audioAntispamFreezeConfigNode["Value"].isNull())
		audioAntispamFreezeConfig_.value = audioAntispamFreezeConfigNode["Value"].asString();
	auto allImageSceneList = value["ImageSceneList"]["ImageScene"];
	for (const auto &item : allImageSceneList)
		imageSceneList_.push_back(item.asString());
	auto allVideoSceneList = value["VideoSceneList"]["VideoScene"];
	for (const auto &item : allVideoSceneList)
		videoSceneList_.push_back(item.asString());
	auto allVideoAutoFreezeSceneList = value["VideoAutoFreezeSceneList"]["VideoAutoFreezeScene"];
	for (const auto &item : allVideoAutoFreezeSceneList)
		videoAutoFreezeSceneList_.push_back(item.asString());
	auto allAudioSceneList = value["AudioSceneList"]["AudioScene"];
	for (const auto &item : allAudioSceneList)
		audioSceneList_.push_back(item.asString());
	if(!value["ImageEnableLimit"].isNull())
		imageEnableLimit_ = value["ImageEnableLimit"].asString() == "true";
	if(!value["ImageScanLimit"].isNull())
		imageScanLimit_ = std::stol(value["ImageScanLimit"].asString());
	if(!value["ScanImageNoFileType"].isNull())
		scanImageNoFileType_ = value["ScanImageNoFileType"].asString() == "true";
	if(!value["VideoFrameInterval"].isNull())
		videoFrameInterval_ = std::stoi(value["VideoFrameInterval"].asString());
	if(!value["VideoMaxFrames"].isNull())
		videoMaxFrames_ = std::stoi(value["VideoMaxFrames"].asString());
	if(!value["VideoMaxSize"].isNull())
		videoMaxSize_ = std::stoi(value["VideoMaxSize"].asString());
	if(!value["AutoFreezeType"].isNull())
		autoFreezeType_ = value["AutoFreezeType"].asString();
	if(!value["CallbackId"].isNull())
		callbackId_ = value["CallbackId"].asString();
	if(!value["CallbackName"].isNull())
		callbackName_ = value["CallbackName"].asString();
	if(!value["AudioMaxSize"].isNull())
		audioMaxSize_ = std::stoi(value["AudioMaxSize"].asString());
	if(!value["AudioAutoFreezeOpened"].isNull())
		audioAutoFreezeOpened_ = value["AudioAutoFreezeOpened"].asString() == "true";

}

int DescribeOssIncrementCheckSettingResult::getAudioMaxSize()const
{
	return audioMaxSize_;
}

std::vector<std::string> DescribeOssIncrementCheckSettingResult::getVideoAutoFreezeSceneList()const
{
	return videoAutoFreezeSceneList_;
}

DescribeOssIncrementCheckSettingResult::AudioAntispamFreezeConfig DescribeOssIncrementCheckSettingResult::getAudioAntispamFreezeConfig()const
{
	return audioAntispamFreezeConfig_;
}

std::string DescribeOssIncrementCheckSettingResult::getCallbackId()const
{
	return callbackId_;
}

long DescribeOssIncrementCheckSettingResult::getImageScanLimit()const
{
	return imageScanLimit_;
}

bool DescribeOssIncrementCheckSettingResult::getScanImageNoFileType()const
{
	return scanImageNoFileType_;
}

std::vector<DescribeOssIncrementCheckSettingResult::BucketConfig> DescribeOssIncrementCheckSettingResult::getBucketConfigList()const
{
	return bucketConfigList_;
}

DescribeOssIncrementCheckSettingResult::ImageAutoFreeze DescribeOssIncrementCheckSettingResult::getImageAutoFreeze()const
{
	return imageAutoFreeze_;
}

std::vector<std::string> DescribeOssIncrementCheckSettingResult::getAudioSceneList()const
{
	return audioSceneList_;
}

int DescribeOssIncrementCheckSettingResult::getVideoFrameInterval()const
{
	return videoFrameInterval_;
}

bool DescribeOssIncrementCheckSettingResult::getAudioAutoFreezeOpened()const
{
	return audioAutoFreezeOpened_;
}

std::vector<std::string> DescribeOssIncrementCheckSettingResult::getVideoSceneList()const
{
	return videoSceneList_;
}

bool DescribeOssIncrementCheckSettingResult::getImageEnableLimit()const
{
	return imageEnableLimit_;
}

std::vector<std::string> DescribeOssIncrementCheckSettingResult::getImageSceneList()const
{
	return imageSceneList_;
}

std::string DescribeOssIncrementCheckSettingResult::getCallbackName()const
{
	return callbackName_;
}

std::string DescribeOssIncrementCheckSettingResult::getAutoFreezeType()const
{
	return autoFreezeType_;
}

int DescribeOssIncrementCheckSettingResult::getVideoMaxFrames()const
{
	return videoMaxFrames_;
}

int DescribeOssIncrementCheckSettingResult::getVideoMaxSize()const
{
	return videoMaxSize_;
}

