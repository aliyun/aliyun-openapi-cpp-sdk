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

#include <alibabacloud/yundun-ds/model/DescribeDataLimitSetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeDataLimitSetResult::DescribeDataLimitSetResult() :
	ServiceResult()
{}

DescribeDataLimitSetResult::DescribeDataLimitSetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataLimitSetResult::~DescribeDataLimitSetResult()
{}

void DescribeDataLimitSetResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataLimitSetNode = value["DataLimitSet"];
	if(!dataLimitSetNode["ResourceType"].isNull())
		dataLimitSet_.resourceType = std::stoi(dataLimitSetNode["ResourceType"].asString());
	auto allDataLimitList = value["DataLimitList"]["DataLimit"];
	for (auto value : allDataLimitList)
	{
		DataLimitSet::DataLimit dataLimitObject;
		if(!value["RegionId"].isNull())
			dataLimitObject.regionId = value["RegionId"].asString();
		if(!value["LocalName"].isNull())
			dataLimitObject.localName = value["LocalName"].asString();
		if(!value["ParentId"].isNull())
			dataLimitObject.parentId = value["ParentId"].asString();
		if(!value["Id"].isNull())
			dataLimitObject.id = std::stol(value["Id"].asString());
		if(!value["UserName"].isNull())
			dataLimitObject.userName = value["UserName"].asString();
		if(!value["GmtCreate"].isNull())
			dataLimitObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["Connector"].isNull())
			dataLimitObject.connector = value["Connector"].asString();
		if(!value["CheckStatus"].isNull())
			dataLimitObject.checkStatus = std::stoi(value["CheckStatus"].asString());
		if(!value["CheckStatusName"].isNull())
			dataLimitObject.checkStatusName = value["CheckStatusName"].asString();
		dataLimitSet_.dataLimitList.push_back(dataLimitObject);
	}
	auto allOssBucketList = value["OssBucketList"]["OssBucket"];
	for (auto value : allOssBucketList)
	{
		DataLimitSet::OssBucket ossBucketObject;
		if(!value["BucketName"].isNull())
			ossBucketObject.bucketName = value["BucketName"].asString();
		if(!value["RegionId"].isNull())
			ossBucketObject.regionId = value["RegionId"].asString();
		dataLimitSet_.ossBucketList.push_back(ossBucketObject);
	}
	auto allRegionList = value["RegionList"]["Region"];
	for (auto value : allRegionList)
	{
		DataLimitSet::Region regionObject;
		if(!value["LocalName"].isNull())
			regionObject.localName = value["LocalName"].asString();
		if(!value["RegionId"].isNull())
			regionObject.regionId = value["RegionId"].asString();
		dataLimitSet_.regionList.push_back(regionObject);
	}

}

DescribeDataLimitSetResult::DataLimitSet DescribeDataLimitSetResult::getDataLimitSet()const
{
	return dataLimitSet_;
}

