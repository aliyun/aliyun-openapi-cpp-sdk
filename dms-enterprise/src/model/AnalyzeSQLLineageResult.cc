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

#include <alibabacloud/dms-enterprise/model/AnalyzeSQLLineageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

AnalyzeSQLLineageResult::AnalyzeSQLLineageResult() :
	ServiceResult()
{}

AnalyzeSQLLineageResult::AnalyzeSQLLineageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AnalyzeSQLLineageResult::~AnalyzeSQLLineageResult()
{}

void AnalyzeSQLLineageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto lineageResultNode = value["LineageResult"];
	auto allLineagesNode = lineageResultNode["Lineages"]["LineageItem"];
	for (auto lineageResultNodeLineagesLineageItem : allLineagesNode)
	{
		LineageResult::LineageItem lineageItemObject;
		if(!lineageResultNodeLineagesLineageItem["LineageType"].isNull())
			lineageItemObject.lineageType = lineageResultNodeLineagesLineageItem["LineageType"].asString();
		if(!lineageResultNodeLineagesLineageItem["Src"].isNull())
			lineageItemObject.src = lineageResultNodeLineagesLineageItem["Src"].asString();
		if(!lineageResultNodeLineagesLineageItem["Dst"].isNull())
			lineageItemObject.dst = lineageResultNodeLineagesLineageItem["Dst"].asString();
		if(!lineageResultNodeLineagesLineageItem["OperType"].isNull())
			lineageItemObject.operType = lineageResultNodeLineagesLineageItem["OperType"].asString();
		auto processDetailNode = value["ProcessDetail"];
		if(!processDetailNode["Code"].isNull())
			lineageItemObject.processDetail.code = processDetailNode["Code"].asString();
		if(!processDetailNode["CalWay"].isNull())
			lineageItemObject.processDetail.calWay = processDetailNode["CalWay"].asString();
		lineageResult_.lineages.push_back(lineageItemObject);
	}
	auto allObjectMetadataNode = lineageResultNode["ObjectMetadata"]["ObjectMetadataItem"];
	for (auto lineageResultNodeObjectMetadataObjectMetadataItem : allObjectMetadataNode)
	{
		LineageResult::ObjectMetadataItem objectMetadataItemObject;
		if(!lineageResultNodeObjectMetadataObjectMetadataItem["Name"].isNull())
			objectMetadataItemObject.name = lineageResultNodeObjectMetadataObjectMetadataItem["Name"].asString();
		if(!lineageResultNodeObjectMetadataObjectMetadataItem["Type"].isNull())
			objectMetadataItemObject.type = lineageResultNodeObjectMetadataObjectMetadataItem["Type"].asString();
		if(!lineageResultNodeObjectMetadataObjectMetadataItem["Source"].isNull())
			objectMetadataItemObject.source = lineageResultNodeObjectMetadataObjectMetadataItem["Source"].asString();
		auto allFieldsNode = lineageResultNodeObjectMetadataObjectMetadataItem["Fields"]["Field"];
		for (auto lineageResultNodeObjectMetadataObjectMetadataItemFieldsField : allFieldsNode)
		{
			LineageResult::ObjectMetadataItem::Field fieldsObject;
			if(!lineageResultNodeObjectMetadataObjectMetadataItemFieldsField["Name"].isNull())
				fieldsObject.name = lineageResultNodeObjectMetadataObjectMetadataItemFieldsField["Name"].asString();
			objectMetadataItemObject.fields.push_back(fieldsObject);
		}
		lineageResult_.objectMetadata.push_back(objectMetadataItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

AnalyzeSQLLineageResult::LineageResult AnalyzeSQLLineageResult::getLineageResult()const
{
	return lineageResult_;
}

std::string AnalyzeSQLLineageResult::getErrorCode()const
{
	return errorCode_;
}

std::string AnalyzeSQLLineageResult::getErrorMessage()const
{
	return errorMessage_;
}

bool AnalyzeSQLLineageResult::getSuccess()const
{
	return success_;
}

