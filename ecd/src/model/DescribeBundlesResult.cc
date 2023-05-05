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

#include <alibabacloud/ecd/model/DescribeBundlesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeBundlesResult::DescribeBundlesResult() :
	ServiceResult()
{}

DescribeBundlesResult::DescribeBundlesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBundlesResult::~DescribeBundlesResult()
{}

void DescribeBundlesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBundlesNode = value["Bundles"]["Bundle"];
	for (auto valueBundlesBundle : allBundlesNode)
	{
		Bundle bundlesObject;
		if(!valueBundlesBundle["Description"].isNull())
			bundlesObject.description = valueBundlesBundle["Description"].asString();
		if(!valueBundlesBundle["BundleType"].isNull())
			bundlesObject.bundleType = valueBundlesBundle["BundleType"].asString();
		if(!valueBundlesBundle["OsType"].isNull())
			bundlesObject.osType = valueBundlesBundle["OsType"].asString();
		if(!valueBundlesBundle["StockState"].isNull())
			bundlesObject.stockState = valueBundlesBundle["StockState"].asString();
		if(!valueBundlesBundle["DesktopType"].isNull())
			bundlesObject.desktopType = valueBundlesBundle["DesktopType"].asString();
		if(!valueBundlesBundle["ProtocolType"].isNull())
			bundlesObject.protocolType = valueBundlesBundle["ProtocolType"].asString();
		if(!valueBundlesBundle["BundleId"].isNull())
			bundlesObject.bundleId = valueBundlesBundle["BundleId"].asString();
		if(!valueBundlesBundle["ImageId"].isNull())
			bundlesObject.imageId = valueBundlesBundle["ImageId"].asString();
		if(!valueBundlesBundle["ImageName"].isNull())
			bundlesObject.imageName = valueBundlesBundle["ImageName"].asString();
		if(!valueBundlesBundle["Language"].isNull())
			bundlesObject.language = valueBundlesBundle["Language"].asString();
		if(!valueBundlesBundle["BundleName"].isNull())
			bundlesObject.bundleName = valueBundlesBundle["BundleName"].asString();
		if(!valueBundlesBundle["DesktopTypeFamily"].isNull())
			bundlesObject.desktopTypeFamily = valueBundlesBundle["DesktopTypeFamily"].asString();
		if(!valueBundlesBundle["CreationTime"].isNull())
			bundlesObject.creationTime = valueBundlesBundle["CreationTime"].asString();
		if(!valueBundlesBundle["SessionType"].isNull())
			bundlesObject.sessionType = valueBundlesBundle["SessionType"].asString();
		if(!valueBundlesBundle["VolumeEncryptionEnabled"].isNull())
			bundlesObject.volumeEncryptionEnabled = valueBundlesBundle["VolumeEncryptionEnabled"].asString() == "true";
		if(!valueBundlesBundle["VolumeEncryptionKey"].isNull())
			bundlesObject.volumeEncryptionKey = valueBundlesBundle["VolumeEncryptionKey"].asString();
		if(!valueBundlesBundle["Platform"].isNull())
			bundlesObject.platform = valueBundlesBundle["Platform"].asString();
		if(!valueBundlesBundle["ImageStatus"].isNull())
			bundlesObject.imageStatus = valueBundlesBundle["ImageStatus"].asString();
		auto allDisksNode = valueBundlesBundle["Disks"]["Disk"];
		for (auto valueBundlesBundleDisksDisk : allDisksNode)
		{
			Bundle::Disk disksObject;
			if(!valueBundlesBundleDisksDisk["DiskType"].isNull())
				disksObject.diskType = valueBundlesBundleDisksDisk["DiskType"].asString();
			if(!valueBundlesBundleDisksDisk["DiskSize"].isNull())
				disksObject.diskSize = std::stoi(valueBundlesBundleDisksDisk["DiskSize"].asString());
			if(!valueBundlesBundleDisksDisk["DiskPerformanceLevel"].isNull())
				disksObject.diskPerformanceLevel = valueBundlesBundleDisksDisk["DiskPerformanceLevel"].asString();
			bundlesObject.disks.push_back(disksObject);
		}
		auto desktopTypeAttributeNode = value["DesktopTypeAttribute"];
		if(!desktopTypeAttributeNode["CpuCount"].isNull())
			bundlesObject.desktopTypeAttribute.cpuCount = std::stoi(desktopTypeAttributeNode["CpuCount"].asString());
		if(!desktopTypeAttributeNode["GpuCount"].isNull())
			bundlesObject.desktopTypeAttribute.gpuCount = std::stof(desktopTypeAttributeNode["GpuCount"].asString());
		if(!desktopTypeAttributeNode["GpuSpec"].isNull())
			bundlesObject.desktopTypeAttribute.gpuSpec = desktopTypeAttributeNode["GpuSpec"].asString();
		if(!desktopTypeAttributeNode["MemorySize"].isNull())
			bundlesObject.desktopTypeAttribute.memorySize = std::stoi(desktopTypeAttributeNode["MemorySize"].asString());
		bundles_.push_back(bundlesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeBundlesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeBundlesResult::Bundle> DescribeBundlesResult::getBundles()const
{
	return bundles_;
}

