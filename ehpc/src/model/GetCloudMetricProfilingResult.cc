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

#include <alibabacloud/ehpc/model/GetCloudMetricProfilingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

GetCloudMetricProfilingResult::GetCloudMetricProfilingResult() :
	ServiceResult()
{}

GetCloudMetricProfilingResult::GetCloudMetricProfilingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCloudMetricProfilingResult::~GetCloudMetricProfilingResult()
{}

void GetCloudMetricProfilingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSvgUrlsNode = value["SvgUrls"]["SvgInfo"];
	for (auto valueSvgUrlsSvgInfo : allSvgUrlsNode)
	{
		SvgInfo svgUrlsObject;
		if(!valueSvgUrlsSvgInfo["Name"].isNull())
			svgUrlsObject.name = valueSvgUrlsSvgInfo["Name"].asString();
		if(!valueSvgUrlsSvgInfo["Type"].isNull())
			svgUrlsObject.type = valueSvgUrlsSvgInfo["Type"].asString();
		if(!valueSvgUrlsSvgInfo["Url"].isNull())
			svgUrlsObject.url = valueSvgUrlsSvgInfo["Url"].asString();
		if(!valueSvgUrlsSvgInfo["Size"].isNull())
			svgUrlsObject.size = std::stoi(valueSvgUrlsSvgInfo["Size"].asString());
		svgUrls_.push_back(svgUrlsObject);
	}

}

std::vector<GetCloudMetricProfilingResult::SvgInfo> GetCloudMetricProfilingResult::getSvgUrls()const
{
	return svgUrls_;
}

