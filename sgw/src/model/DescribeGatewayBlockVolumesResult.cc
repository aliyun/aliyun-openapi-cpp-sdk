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

#include <alibabacloud/sgw/model/DescribeGatewayBlockVolumesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeGatewayBlockVolumesResult::DescribeGatewayBlockVolumesResult() :
	ServiceResult()
{}

DescribeGatewayBlockVolumesResult::DescribeGatewayBlockVolumesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGatewayBlockVolumesResult::~DescribeGatewayBlockVolumesResult()
{}

void DescribeGatewayBlockVolumesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBlockVolumesNode = value["BlockVolumes"]["BlockVolume"];
	for (auto valueBlockVolumesBlockVolume : allBlockVolumesNode)
	{
		BlockVolume blockVolumesObject;
		if(!valueBlockVolumesBlockVolume["Name"].isNull())
			blockVolumesObject.name = valueBlockVolumesBlockVolume["Name"].asString();
		if(!valueBlockVolumesBlockVolume["DiskId"].isNull())
			blockVolumesObject.diskId = valueBlockVolumesBlockVolume["DiskId"].asString();
		if(!valueBlockVolumesBlockVolume["DiskType"].isNull())
			blockVolumesObject.diskType = valueBlockVolumesBlockVolume["DiskType"].asString();
		if(!valueBlockVolumesBlockVolume["Protocol"].isNull())
			blockVolumesObject.protocol = valueBlockVolumesBlockVolume["Protocol"].asString();
		if(!valueBlockVolumesBlockVolume["Size"].isNull())
			blockVolumesObject.size = std::stol(valueBlockVolumesBlockVolume["Size"].asString());
		if(!valueBlockVolumesBlockVolume["Enabled"].isNull())
			blockVolumesObject.enabled = valueBlockVolumesBlockVolume["Enabled"].asString() == "true";
		if(!valueBlockVolumesBlockVolume["State"].isNull())
			blockVolumesObject.state = valueBlockVolumesBlockVolume["State"].asString();
		if(!valueBlockVolumesBlockVolume["TotalUpload"].isNull())
			blockVolumesObject.totalUpload = std::stol(valueBlockVolumesBlockVolume["TotalUpload"].asString());
		if(!valueBlockVolumesBlockVolume["TotalDownload"].isNull())
			blockVolumesObject.totalDownload = std::stol(valueBlockVolumesBlockVolume["TotalDownload"].asString());
		if(!valueBlockVolumesBlockVolume["OssBucketName"].isNull())
			blockVolumesObject.ossBucketName = valueBlockVolumesBlockVolume["OssBucketName"].asString();
		if(!valueBlockVolumesBlockVolume["OssEndpoint"].isNull())
			blockVolumesObject.ossEndpoint = valueBlockVolumesBlockVolume["OssEndpoint"].asString();
		if(!valueBlockVolumesBlockVolume["OssBucketSsl"].isNull())
			blockVolumesObject.ossBucketSsl = valueBlockVolumesBlockVolume["OssBucketSsl"].asString() == "true";
		if(!valueBlockVolumesBlockVolume["LocalPath"].isNull())
			blockVolumesObject.localPath = valueBlockVolumesBlockVolume["LocalPath"].asString();
		if(!valueBlockVolumesBlockVolume["ChunkSize"].isNull())
			blockVolumesObject.chunkSize = std::stoi(valueBlockVolumesBlockVolume["ChunkSize"].asString());
		if(!valueBlockVolumesBlockVolume["CacheMode"].isNull())
			blockVolumesObject.cacheMode = valueBlockVolumesBlockVolume["CacheMode"].asString();
		if(!valueBlockVolumesBlockVolume["Address"].isNull())
			blockVolumesObject.address = valueBlockVolumesBlockVolume["Address"].asString();
		if(!valueBlockVolumesBlockVolume["SerialNumber"].isNull())
			blockVolumesObject.serialNumber = valueBlockVolumesBlockVolume["SerialNumber"].asString();
		if(!valueBlockVolumesBlockVolume["IndexId"].isNull())
			blockVolumesObject.indexId = valueBlockVolumesBlockVolume["IndexId"].asString();
		if(!valueBlockVolumesBlockVolume["Target"].isNull())
			blockVolumesObject.target = valueBlockVolumesBlockVolume["Target"].asString();
		if(!valueBlockVolumesBlockVolume["Port"].isNull())
			blockVolumesObject.port = std::stoi(valueBlockVolumesBlockVolume["Port"].asString());
		if(!valueBlockVolumesBlockVolume["LunId"].isNull())
			blockVolumesObject.lunId = std::stoi(valueBlockVolumesBlockVolume["LunId"].asString());
		if(!valueBlockVolumesBlockVolume["ChapEnabled"].isNull())
			blockVolumesObject.chapEnabled = valueBlockVolumesBlockVolume["ChapEnabled"].asString() == "true";
		if(!valueBlockVolumesBlockVolume["ChapInUser"].isNull())
			blockVolumesObject.chapInUser = valueBlockVolumesBlockVolume["ChapInUser"].asString();
		if(!valueBlockVolumesBlockVolume["ChapOutUser"].isNull())
			blockVolumesObject.chapOutUser = valueBlockVolumesBlockVolume["ChapOutUser"].asString();
		if(!valueBlockVolumesBlockVolume["Status"].isNull())
			blockVolumesObject.status = std::stoi(valueBlockVolumesBlockVolume["Status"].asString());
		if(!valueBlockVolumesBlockVolume["VolumeState"].isNull())
			blockVolumesObject.volumeState = std::stoi(valueBlockVolumesBlockVolume["VolumeState"].asString());
		blockVolumes_.push_back(blockVolumesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::vector<DescribeGatewayBlockVolumesResult::BlockVolume> DescribeGatewayBlockVolumesResult::getBlockVolumes()const
{
	return blockVolumes_;
}

std::string DescribeGatewayBlockVolumesResult::getMessage()const
{
	return message_;
}

std::string DescribeGatewayBlockVolumesResult::getCode()const
{
	return code_;
}

bool DescribeGatewayBlockVolumesResult::getSuccess()const
{
	return success_;
}

