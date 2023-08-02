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

#include <alibabacloud/gpdb/model/DescribeCollectionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeCollectionResult::DescribeCollectionResult() :
	ServiceResult()
{}

DescribeCollectionResult::DescribeCollectionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCollectionResult::~DescribeCollectionResult()
{}

void DescribeCollectionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Dimension"].isNull())
		dimension_ = std::stoi(value["Dimension"].asString());
	if(!value["FullTextRetrievalFields"].isNull())
		fullTextRetrievalFields_ = value["FullTextRetrievalFields"].asString();
	if(!value["Metadata"].isNull())
		metadata_ = value["Metadata"].asString();
	if(!value["Metrics"].isNull())
		metrics_ = value["Metrics"].asString();
	if(!value["Parser"].isNull())
		parser_ = value["Parser"].asString();
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["Namespace"].isNull())
		_namespace_ = value["Namespace"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();

}

std::string DescribeCollectionResult::getStatus()const
{
	return status_;
}

std::string DescribeCollectionResult::getMetrics()const
{
	return metrics_;
}

std::string DescribeCollectionResult::getMessage()const
{
	return message_;
}

std::string DescribeCollectionResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string DescribeCollectionResult::getMetadata()const
{
	return metadata_;
}

std::string DescribeCollectionResult::get_Namespace()const
{
	return _namespace_;
}

int DescribeCollectionResult::getDimension()const
{
	return dimension_;
}

std::string DescribeCollectionResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeCollectionResult::getFullTextRetrievalFields()const
{
	return fullTextRetrievalFields_;
}

std::string DescribeCollectionResult::getParser()const
{
	return parser_;
}

