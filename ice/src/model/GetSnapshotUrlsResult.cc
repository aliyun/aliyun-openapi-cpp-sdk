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

#include <alibabacloud/ice/model/GetSnapshotUrlsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetSnapshotUrlsResult::GetSnapshotUrlsResult() :
	ServiceResult()
{}

GetSnapshotUrlsResult::GetSnapshotUrlsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSnapshotUrlsResult::~GetSnapshotUrlsResult()
{}

void GetSnapshotUrlsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSnapshotUrls = value["SnapshotUrls"]["SnapshotUrl"];
	for (const auto &item : allSnapshotUrls)
		snapshotUrls_.push_back(item.asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["WebVTTUrl"].isNull())
		webVTTUrl_ = value["WebVTTUrl"].asString();

}

int GetSnapshotUrlsResult::getTotal()const
{
	return total_;
}

std::vector<std::string> GetSnapshotUrlsResult::getSnapshotUrls()const
{
	return snapshotUrls_;
}

std::string GetSnapshotUrlsResult::getWebVTTUrl()const
{
	return webVTTUrl_;
}

