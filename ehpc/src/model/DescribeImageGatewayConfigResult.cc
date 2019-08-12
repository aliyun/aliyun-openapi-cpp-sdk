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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto imagegwNode = value["Imagegw"];
	if(!imagegwNode["DefaultImageLocation"].isNull())
		imagegw_.defaultImageLocation = imagegwNode["DefaultImageLocation"].asString();
	if(!imagegwNode["PullUpdateTimeout"].isNull())
		imagegw_.pullUpdateTimeout = std::stol(imagegwNode["PullUpdateTimeout"].asString());
	if(!imagegwNode["MongoDBURI"].isNull())
		imagegw_.mongoDBURI = imagegwNode["MongoDBURI"].asString();
	if(!imagegwNode["ImageExpirationTimeout"].isNull())
		imagegw_.imageExpirationTimeout = imagegwNode["ImageExpirationTimeout"].asString();
	if(!imagegwNode["UpdateDateTime"].isNull())
		imagegw_.updateDateTime = imagegwNode["UpdateDateTime"].asString();
	auto allLocations = value["Locations"]["LocationInfo"];
	for (auto value : allLocations)
	{
		Imagegw::LocationInfo locationInfoObject;
		if(!value["Location"].isNull())
			locationInfoObject.location = value["Location"].asString();
		if(!value["RemoteType"].isNull())
			locationInfoObject.remoteType = value["RemoteType"].asString();
		if(!value["Authentication"].isNull())
			locationInfoObject.authentication = value["Authentication"].asString();
		if(!value["URL"].isNull())
			locationInfoObject.uRL = value["URL"].asString();
		imagegw_.locations.push_back(locationInfoObject);
	}

}

DescribeImageGatewayConfigResult::Imagegw DescribeImageGatewayConfigResult::getImagegw()const
{
	return imagegw_;
}

