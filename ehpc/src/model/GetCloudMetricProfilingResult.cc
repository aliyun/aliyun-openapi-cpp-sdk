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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSvgUrls = value["SvgUrls"]["SvgInfo"];
	for (auto value : allSvgUrls)
	{
		SvgInfo svgUrlsObject;
		if(!value["Name"].isNull())
			svgUrlsObject.name = value["Name"].asString();
		if(!value["Type"].isNull())
			svgUrlsObject.type = value["Type"].asString();
		if(!value["Url"].isNull())
			svgUrlsObject.url = value["Url"].asString();
		if(!value["Size"].isNull())
			svgUrlsObject.size = std::stoi(value["Size"].asString());
		svgUrls_.push_back(svgUrlsObject);
	}

}

std::vector<GetCloudMetricProfilingResult::SvgInfo> GetCloudMetricProfilingResult::getSvgUrls()const
{
	return svgUrls_;
}

