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

#include <alibabacloud/ecd/model/DescribeImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeImagesResult::DescribeImagesResult() :
	ServiceResult()
{}

DescribeImagesResult::DescribeImagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImagesResult::~DescribeImagesResult()
{}

void DescribeImagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImagesNode = value["Images"]["Image"];
	for (auto valueImagesImage : allImagesNode)
	{
		Image imagesObject;
		if(!valueImagesImage["CreationTime"].isNull())
			imagesObject.creationTime = valueImagesImage["CreationTime"].asString();
		if(!valueImagesImage["Status"].isNull())
			imagesObject.status = valueImagesImage["Status"].asString();
		if(!valueImagesImage["Progress"].isNull())
			imagesObject.progress = valueImagesImage["Progress"].asString();
		if(!valueImagesImage["DataDiskSize"].isNull())
			imagesObject.dataDiskSize = std::stoi(valueImagesImage["DataDiskSize"].asString());
		if(!valueImagesImage["ImageType"].isNull())
			imagesObject.imageType = valueImagesImage["ImageType"].asString();
		if(!valueImagesImage["Description"].isNull())
			imagesObject.description = valueImagesImage["Description"].asString();
		if(!valueImagesImage["Size"].isNull())
			imagesObject.size = std::stoi(valueImagesImage["Size"].asString());
		if(!valueImagesImage["OsType"].isNull())
			imagesObject.osType = valueImagesImage["OsType"].asString();
		if(!valueImagesImage["ProtocolType"].isNull())
			imagesObject.protocolType = valueImagesImage["ProtocolType"].asString();
		if(!valueImagesImage["Name"].isNull())
			imagesObject.name = valueImagesImage["Name"].asString();
		if(!valueImagesImage["ImageId"].isNull())
			imagesObject.imageId = valueImagesImage["ImageId"].asString();
		if(!valueImagesImage["GpuCategory"].isNull())
			imagesObject.gpuCategory = valueImagesImage["GpuCategory"].asString() == "true";
		if(!valueImagesImage["GpuDriverVersion"].isNull())
			imagesObject.gpuDriverVersion = valueImagesImage["GpuDriverVersion"].asString();
		if(!valueImagesImage["AppVersion"].isNull())
			imagesObject.appVersion = valueImagesImage["AppVersion"].asString();
		if(!valueImagesImage["VolumeEncryptionEnabled"].isNull())
			imagesObject.volumeEncryptionEnabled = valueImagesImage["VolumeEncryptionEnabled"].asString() == "true";
		if(!valueImagesImage["VolumeEncryptionKey"].isNull())
			imagesObject.volumeEncryptionKey = valueImagesImage["VolumeEncryptionKey"].asString();
		if(!valueImagesImage["SharedCount"].isNull())
			imagesObject.sharedCount = std::stoi(valueImagesImage["SharedCount"].asString());
		if(!valueImagesImage["SessionType"].isNull())
			imagesObject.sessionType = valueImagesImage["SessionType"].asString();
		if(!valueImagesImage["UpdateTime"].isNull())
			imagesObject.updateTime = valueImagesImage["UpdateTime"].asString();
		if(!valueImagesImage["Platform"].isNull())
			imagesObject.platform = valueImagesImage["Platform"].asString();
		auto allSupportedLanguages = value["SupportedLanguages"]["Language"];
		for (auto value : allSupportedLanguages)
			imagesObject.supportedLanguages.push_back(value.asString());
		images_.push_back(imagesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeImagesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeImagesResult::Image> DescribeImagesResult::getImages()const
{
	return images_;
}

