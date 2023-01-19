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

#include <alibabacloud/sas/model/DescribeImageInfoListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeImageInfoListResult::DescribeImageInfoListResult() :
	ServiceResult()
{}

DescribeImageInfoListResult::DescribeImageInfoListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageInfoListResult::~DescribeImageInfoListResult()
{}

void DescribeImageInfoListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImageInfosNode = value["ImageInfos"]["ImageInfo"];
	for (auto valueImageInfosImageInfo : allImageInfosNode)
	{
		ImageInfo imageInfosObject;
		if(!valueImageInfosImageInfo["Status"].isNull())
			imageInfosObject.status = valueImageInfosImageInfo["Status"].asString();
		if(!valueImageInfosImageInfo["Endpoints"].isNull())
			imageInfosObject.endpoints = valueImageInfosImageInfo["Endpoints"].asString();
		if(!valueImageInfosImageInfo["RiskStatus"].isNull())
			imageInfosObject.riskStatus = valueImageInfosImageInfo["RiskStatus"].asString();
		if(!valueImageInfosImageInfo["VulStatus"].isNull())
			imageInfosObject.vulStatus = valueImageInfosImageInfo["VulStatus"].asString();
		if(!valueImageInfosImageInfo["ImageCreate"].isNull())
			imageInfosObject.imageCreate = std::stol(valueImageInfosImageInfo["ImageCreate"].asString());
		if(!valueImageInfosImageInfo["AlarmStatus"].isNull())
			imageInfosObject.alarmStatus = valueImageInfosImageInfo["AlarmStatus"].asString();
		if(!valueImageInfosImageInfo["Digest"].isNull())
			imageInfosObject.digest = valueImageInfosImageInfo["Digest"].asString();
		if(!valueImageInfosImageInfo["RegistryType"].isNull())
			imageInfosObject.registryType = valueImageInfosImageInfo["RegistryType"].asString();
		if(!valueImageInfosImageInfo["ImageUpdate"].isNull())
			imageInfosObject.imageUpdate = std::stol(valueImageInfosImageInfo["ImageUpdate"].asString());
		if(!valueImageInfosImageInfo["Tag"].isNull())
			imageInfosObject.tag = valueImageInfosImageInfo["Tag"].asString();
		if(!valueImageInfosImageInfo["InstanceId"].isNull())
			imageInfosObject.instanceId = valueImageInfosImageInfo["InstanceId"].asString();
		if(!valueImageInfosImageInfo["RepoType"].isNull())
			imageInfosObject.repoType = valueImageInfosImageInfo["RepoType"].asString();
		if(!valueImageInfosImageInfo["RegionId"].isNull())
			imageInfosObject.regionId = valueImageInfosImageInfo["RegionId"].asString();
		if(!valueImageInfosImageInfo["Uuid"].isNull())
			imageInfosObject.uuid = valueImageInfosImageInfo["Uuid"].asString();
		if(!valueImageInfosImageInfo["ImageSize"].isNull())
			imageInfosObject.imageSize = std::stol(valueImageInfosImageInfo["ImageSize"].asString());
		if(!valueImageInfosImageInfo["RepoId"].isNull())
			imageInfosObject.repoId = valueImageInfosImageInfo["RepoId"].asString();
		if(!valueImageInfosImageInfo["TagImmutable"].isNull())
			imageInfosObject.tagImmutable = std::stoi(valueImageInfosImageInfo["TagImmutable"].asString());
		if(!valueImageInfosImageInfo["VulCount"].isNull())
			imageInfosObject.vulCount = std::stoi(valueImageInfosImageInfo["VulCount"].asString());
		if(!valueImageInfosImageInfo["AlarmCount"].isNull())
			imageInfosObject.alarmCount = std::stoi(valueImageInfosImageInfo["AlarmCount"].asString());
		if(!valueImageInfosImageInfo["ImageId"].isNull())
			imageInfosObject.imageId = valueImageInfosImageInfo["ImageId"].asString();
		if(!valueImageInfosImageInfo["RepoName"].isNull())
			imageInfosObject.repoName = valueImageInfosImageInfo["RepoName"].asString();
		if(!valueImageInfosImageInfo["RepoNamespace"].isNull())
			imageInfosObject.repoNamespace = valueImageInfosImageInfo["RepoNamespace"].asString();
		imageInfos_.push_back(imageInfosObject);
	}

}

std::vector<DescribeImageInfoListResult::ImageInfo> DescribeImageInfoListResult::getImageInfos()const
{
	return imageInfos_;
}

