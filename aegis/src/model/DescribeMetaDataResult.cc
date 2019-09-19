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

#include <alibabacloud/aegis/model/DescribeMetaDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeMetaDataResult::DescribeMetaDataResult() :
	ServiceResult()
{}

DescribeMetaDataResult::DescribeMetaDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMetaDataResult::~DescribeMetaDataResult()
{}

void DescribeMetaDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto metaDataNode = value["MetaData"];
	if(!metaDataNode["LogStoreName"].isNull())
		metaData_.logStoreName = metaDataNode["LogStoreName"].asString();
	if(!metaDataNode["ProjectName"].isNull())
		metaData_.projectName = metaDataNode["ProjectName"].asString();
	if(!metaDataNode["Status"].isNull())
		metaData_.status = std::stoi(metaDataNode["Status"].asString());
	auto allDatasourceFieldListNode = metaDataNode["DatasourceFieldList"]["DatasourceField"];
	for (auto metaDataNodeDatasourceFieldListDatasourceField : allDatasourceFieldListNode)
	{
		MetaData::DatasourceField datasourceFieldObject;
		if(!metaDataNodeDatasourceFieldListDatasourceField["FieldName"].isNull())
			datasourceFieldObject.fieldName = metaDataNodeDatasourceFieldListDatasourceField["FieldName"].asString();
		if(!metaDataNodeDatasourceFieldListDatasourceField["ValueType"].isNull())
			datasourceFieldObject.valueType = metaDataNodeDatasourceFieldListDatasourceField["ValueType"].asString();
		if(!metaDataNodeDatasourceFieldListDatasourceField["FieldDescription"].isNull())
			datasourceFieldObject.fieldDescription = metaDataNodeDatasourceFieldListDatasourceField["FieldDescription"].asString();
		if(!metaDataNodeDatasourceFieldListDatasourceField["FieldAliasName"].isNull())
			datasourceFieldObject.fieldAliasName = metaDataNodeDatasourceFieldListDatasourceField["FieldAliasName"].asString();
		if(!metaDataNodeDatasourceFieldListDatasourceField["FieldType"].isNull())
			datasourceFieldObject.fieldType = metaDataNodeDatasourceFieldListDatasourceField["FieldType"].asString();
		if(!metaDataNodeDatasourceFieldListDatasourceField["FieldValue"].isNull())
			datasourceFieldObject.fieldValue = metaDataNodeDatasourceFieldListDatasourceField["FieldValue"].asString();
		if(!metaDataNodeDatasourceFieldListDatasourceField["IsIdentification"].isNull())
			datasourceFieldObject.isIdentification = std::stoi(metaDataNodeDatasourceFieldListDatasourceField["IsIdentification"].asString());
		metaData_.datasourceFieldList.push_back(datasourceFieldObject);
	}

}

DescribeMetaDataResult::MetaData DescribeMetaDataResult::getMetaData()const
{
	return metaData_;
}

