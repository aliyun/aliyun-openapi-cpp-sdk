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

#include <alibabacloud/geoip/model/DescribeGeoipInstanceDataInfosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Geoip;
using namespace AlibabaCloud::Geoip::Model;

DescribeGeoipInstanceDataInfosResult::DescribeGeoipInstanceDataInfosResult() :
	ServiceResult()
{}

DescribeGeoipInstanceDataInfosResult::DescribeGeoipInstanceDataInfosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGeoipInstanceDataInfosResult::~DescribeGeoipInstanceDataInfosResult()
{}

void DescribeGeoipInstanceDataInfosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataInfosNode = value["DataInfos"]["DataInfo"];
	for (auto valueDataInfosDataInfo : allDataInfosNode)
	{
		DataInfo dataInfosObject;
		if(!valueDataInfosDataInfo["Type"].isNull())
			dataInfosObject.type = valueDataInfosDataInfo["Type"].asString();
		if(!valueDataInfosDataInfo["Version"].isNull())
			dataInfosObject.version = valueDataInfosDataInfo["Version"].asString();
		if(!valueDataInfosDataInfo["UpdateTime"].isNull())
			dataInfosObject.updateTime = valueDataInfosDataInfo["UpdateTime"].asString();
		if(!valueDataInfosDataInfo["UpdateTimestamp"].isNull())
			dataInfosObject.updateTimestamp = std::stol(valueDataInfosDataInfo["UpdateTimestamp"].asString());
		if(!valueDataInfosDataInfo["DownloadCount"].isNull())
			dataInfosObject.downloadCount = std::stol(valueDataInfosDataInfo["DownloadCount"].asString());
		dataInfos_.push_back(dataInfosObject);
	}

}

std::vector<DescribeGeoipInstanceDataInfosResult::DataInfo> DescribeGeoipInstanceDataInfosResult::getDataInfos()const
{
	return dataInfos_;
}

