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

#include <alibabacloud/ehpc/model/DescribeImageGatewayConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

DescribeImageGatewayConfigResult::DescribeImageGatewayConfigResult() :
	ServiceResult()
{}

DescribeImageGatewayConfigResult::DescribeImageGatewayConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageGatewayConfigResult::~DescribeImageGatewayConfigResult()
{}

void DescribeImageGatewayConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto imagegwNode = value["Imagegw"];
	if(!imagegwNode["UpdateDateTime"].isNull())
		imagegw_.updateDateTime = imagegwNode["UpdateDateTime"].asString();
	if(!imagegwNode["ImageExpirationTimeout"].isNull())
		imagegw_.imageExpirationTimeout = imagegwNode["ImageExpirationTimeout"].asString();
	if(!imagegwNode["MongoDBURI"].isNull())
		imagegw_.mongoDBURI = imagegwNode["MongoDBURI"].asString();
	if(!imagegwNode["DefaultImageLocation"].isNull())
		imagegw_.defaultImageLocation = imagegwNode["DefaultImageLocation"].asString();
	if(!imagegwNode["PullUpdateTimeout"].isNull())
		imagegw_.pullUpdateTimeout = std::stol(imagegwNode["PullUpdateTimeout"].asString());
	auto allLocationsNode = imagegwNode["Locations"]["LocationInfo"];
	for (auto imagegwNodeLocationsLocationInfo : allLocationsNode)
	{
		Imagegw::LocationInfo locationInfoObject;
		if(!imagegwNodeLocationsLocationInfo["URL"].isNull())
			locationInfoObject.uRL = imagegwNodeLocationsLocationInfo["URL"].asString();
		if(!imagegwNodeLocationsLocationInfo["RemoteType"].isNull())
			locationInfoObject.remoteType = imagegwNodeLocationsLocationInfo["RemoteType"].asString();
		if(!imagegwNodeLocationsLocationInfo["Location"].isNull())
			locationInfoObject.location = imagegwNodeLocationsLocationInfo["Location"].asString();
		if(!imagegwNodeLocationsLocationInfo["Authentication"].isNull())
			locationInfoObject.authentication = imagegwNodeLocationsLocationInfo["Authentication"].asString();
		imagegw_.locations.push_back(locationInfoObject);
	}

}

DescribeImageGatewayConfigResult::Imagegw DescribeImageGatewayConfigResult::getImagegw()const
{
	return imagegw_;
}

