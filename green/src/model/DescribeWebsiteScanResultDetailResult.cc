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

#include <alibabacloud/green/model/DescribeWebsiteScanResultDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeWebsiteScanResultDetailResult::DescribeWebsiteScanResultDetailResult() :
	ServiceResult()
{}

DescribeWebsiteScanResultDetailResult::DescribeWebsiteScanResultDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebsiteScanResultDetailResult::~DescribeWebsiteScanResultDetailResult()
{}

void DescribeWebsiteScanResultDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImageScanResultsNode = value["ImageScanResults"]["ImageScanResult"];
	for (auto valueImageScanResultsImageScanResult : allImageScanResultsNode)
	{
		ImageScanResult imageScanResultsObject;
		if(!valueImageScanResultsImageScanResult["Url"].isNull())
			imageScanResultsObject.url = valueImageScanResultsImageScanResult["Url"].asString();
		auto allLabels = value["Labels"]["StringItem"];
		for (auto value : allLabels)
			imageScanResultsObject.labels.push_back(value.asString());
		imageScanResults_.push_back(imageScanResultsObject);
	}
	auto allHitKeywords = value["HitKeywords"]["StringItem"];
	for (const auto &item : allHitKeywords)
		hitKeywords_.push_back(item.asString());
	if(!value["Baseline"].isNull())
		baseline_ = value["Baseline"].asString();
	if(!value["Content"].isNull())
		content_ = value["Content"].asString();
	if(!value["TamperedSource"].isNull())
		tamperedSource_ = value["TamperedSource"].asString();
	if(!value["ResourceType"].isNull())
		resourceType_ = value["ResourceType"].asString();

}

std::vector<std::string> DescribeWebsiteScanResultDetailResult::getHitKeywords()const
{
	return hitKeywords_;
}

std::vector<DescribeWebsiteScanResultDetailResult::ImageScanResult> DescribeWebsiteScanResultDetailResult::getImageScanResults()const
{
	return imageScanResults_;
}

std::string DescribeWebsiteScanResultDetailResult::getContent()const
{
	return content_;
}

std::string DescribeWebsiteScanResultDetailResult::getResourceType()const
{
	return resourceType_;
}

std::string DescribeWebsiteScanResultDetailResult::getBaseline()const
{
	return baseline_;
}

std::string DescribeWebsiteScanResultDetailResult::getTamperedSource()const
{
	return tamperedSource_;
}

