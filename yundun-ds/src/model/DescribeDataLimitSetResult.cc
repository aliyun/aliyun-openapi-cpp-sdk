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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataLimitSetNode = value["DataLimitSet"];
	if(!dataLimitSetNode["ResourceType"].isNull())
		dataLimitSet_.resourceType = std::stoi(dataLimitSetNode["ResourceType"].asString());
	auto allDataLimitListNode = dataLimitSetNode["DataLimitList"]["DataLimit"];
	for (auto dataLimitSetNodeDataLimitListDataLimit : allDataLimitListNode)
	{
		DataLimitSet::DataLimit dataLimitObject;
		if(!dataLimitSetNodeDataLimitListDataLimit["RegionId"].isNull())
			dataLimitObject.regionId = dataLimitSetNodeDataLimitListDataLimit["RegionId"].asString();
		if(!dataLimitSetNodeDataLimitListDataLimit["LocalName"].isNull())
			dataLimitObject.localName = dataLimitSetNodeDataLimitListDataLimit["LocalName"].asString();
		if(!dataLimitSetNodeDataLimitListDataLimit["ParentId"].isNull())
			dataLimitObject.parentId = dataLimitSetNodeDataLimitListDataLimit["ParentId"].asString();
		if(!dataLimitSetNodeDataLimitListDataLimit["Id"].isNull())
			dataLimitObject.id = std::stol(dataLimitSetNodeDataLimitListDataLimit["Id"].asString());
		if(!dataLimitSetNodeDataLimitListDataLimit["UserName"].isNull())
			dataLimitObject.userName = dataLimitSetNodeDataLimitListDataLimit["UserName"].asString();
		if(!dataLimitSetNodeDataLimitListDataLimit["GmtCreate"].isNull())
			dataLimitObject.gmtCreate = std::stol(dataLimitSetNodeDataLimitListDataLimit["GmtCreate"].asString());
		if(!dataLimitSetNodeDataLimitListDataLimit["Connector"].isNull())
			dataLimitObject.connector = dataLimitSetNodeDataLimitListDataLimit["Connector"].asString();
		if(!dataLimitSetNodeDataLimitListDataLimit["CheckStatus"].isNull())
			dataLimitObject.checkStatus = std::stoi(dataLimitSetNodeDataLimitListDataLimit["CheckStatus"].asString());
		if(!dataLimitSetNodeDataLimitListDataLimit["CheckStatusName"].isNull())
			dataLimitObject.checkStatusName = dataLimitSetNodeDataLimitListDataLimit["CheckStatusName"].asString();
		dataLimitSet_.dataLimitList.push_back(dataLimitObject);
	}
	auto allOssBucketListNode = dataLimitSetNode["OssBucketList"]["OssBucket"];
	for (auto dataLimitSetNodeOssBucketListOssBucket : allOssBucketListNode)
	{
		DataLimitSet::OssBucket ossBucketObject;
		if(!dataLimitSetNodeOssBucketListOssBucket["BucketName"].isNull())
			ossBucketObject.bucketName = dataLimitSetNodeOssBucketListOssBucket["BucketName"].asString();
		if(!dataLimitSetNodeOssBucketListOssBucket["RegionId"].isNull())
			ossBucketObject.regionId = dataLimitSetNodeOssBucketListOssBucket["RegionId"].asString();
		dataLimitSet_.ossBucketList.push_back(ossBucketObject);
	}
	auto allRegionListNode = dataLimitSetNode["RegionList"]["Region"];
	for (auto dataLimitSetNodeRegionListRegion : allRegionListNode)
	{
		DataLimitSet::Region regionObject;
		if(!dataLimitSetNodeRegionListRegion["LocalName"].isNull())
			regionObject.localName = dataLimitSetNodeRegionListRegion["LocalName"].asString();
		if(!dataLimitSetNodeRegionListRegion["RegionId"].isNull())
			regionObject.regionId = dataLimitSetNodeRegionListRegion["RegionId"].asString();
		dataLimitSet_.regionList.push_back(regionObject);
	}

}

DescribeDataLimitSetResult::DataLimitSet DescribeDataLimitSetResult::getDataLimitSet()const
{
	return dataLimitSet_;
}

