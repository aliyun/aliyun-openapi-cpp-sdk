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

#include <alibabacloud/iot/model/GetDownloadFileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

GetDownloadFileResult::GetDownloadFileResult() :
	ServiceResult()
{}

GetDownloadFileResult::GetDownloadFileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDownloadFileResult::~GetDownloadFileResult()
{}

void GetDownloadFileResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PreviewSize"].isNull())
		data_.previewSize = std::stoi(dataNode["PreviewSize"].asString());
	if(!dataNode["CsvUrl"].isNull())
		data_.csvUrl = dataNode["CsvUrl"].asString();
	if(!dataNode["DatasetId"].isNull())
		data_.datasetId = dataNode["DatasetId"].asString();
	if(!dataNode["LongJobId"].isNull())
		data_.longJobId = dataNode["LongJobId"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["BeginTime"].isNull())
		data_.beginTime = std::stol(dataNode["BeginTime"].asString());
	if(!dataNode["EndTime"].isNull())
		data_.endTime = std::stol(dataNode["EndTime"].asString());
	if(!dataNode["ResultDataInString"].isNull())
		data_.resultDataInString = dataNode["ResultDataInString"].asString();
	if(!dataNode["AsyncExecute"].isNull())
		data_.asyncExecute = dataNode["AsyncExecute"].asString() == "true";
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	if(!dataNode["PageNo"].isNull())
		data_.pageNo = std::stoi(dataNode["PageNo"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["CsvUrl"].isNull())
		data_.csvUrl1 = dataNode["CsvUrl"].asString();
	if(!dataNode["CsvFileName"].isNull())
		data_.csvFileName = dataNode["CsvFileName"].asString();
	auto allHeaderNode = dataNode["Header"]["HeaderItem"];
	for (auto dataNodeHeaderHeaderItem : allHeaderNode)
	{
		Data::HeaderItem headerItemObject;
		if(!dataNodeHeaderHeaderItem["FieldName"].isNull())
			headerItemObject.fieldName = dataNodeHeaderHeaderItem["FieldName"].asString();
		if(!dataNodeHeaderHeaderItem["Alias"].isNull())
			headerItemObject.alias = dataNodeHeaderHeaderItem["Alias"].asString();
		if(!dataNodeHeaderHeaderItem["FieldType"].isNull())
			headerItemObject.fieldType = dataNodeHeaderHeaderItem["FieldType"].asString();
		if(!dataNodeHeaderHeaderItem["TypeClass"].isNull())
			headerItemObject.typeClass = dataNodeHeaderHeaderItem["TypeClass"].asString();
		if(!dataNodeHeaderHeaderItem["TimeClass"].isNull())
			headerItemObject.timeClass = dataNodeHeaderHeaderItem["TimeClass"].asString();
		if(!dataNodeHeaderHeaderItem["GeoClass"].isNull())
			headerItemObject.geoClass = dataNodeHeaderHeaderItem["GeoClass"].asString();
		if(!dataNodeHeaderHeaderItem["DimDateClass"].isNull())
			headerItemObject.dimDateClass = dataNodeHeaderHeaderItem["DimDateClass"].asString();
		data_.header.push_back(headerItemObject);
	}
	auto querySettingNode = dataNode["QuerySetting"];
	auto allSelectedHeadersNode = querySettingNode["SelectedHeaders"]["SelectedHeadersItem"];
	for (auto querySettingNodeSelectedHeadersSelectedHeadersItem : allSelectedHeadersNode)
	{
		Data::QuerySetting::SelectedHeadersItem selectedHeadersItemObject;
		if(!querySettingNodeSelectedHeadersSelectedHeadersItem["FieldName"].isNull())
			selectedHeadersItemObject.fieldName = querySettingNodeSelectedHeadersSelectedHeadersItem["FieldName"].asString();
		if(!querySettingNodeSelectedHeadersSelectedHeadersItem["Alias"].isNull())
			selectedHeadersItemObject.alias = querySettingNodeSelectedHeadersSelectedHeadersItem["Alias"].asString();
		if(!querySettingNodeSelectedHeadersSelectedHeadersItem["FieldType"].isNull())
			selectedHeadersItemObject.fieldType = querySettingNodeSelectedHeadersSelectedHeadersItem["FieldType"].asString();
		if(!querySettingNodeSelectedHeadersSelectedHeadersItem["TimeClass"].isNull())
			selectedHeadersItemObject.timeClass = querySettingNodeSelectedHeadersSelectedHeadersItem["TimeClass"].asString();
		if(!querySettingNodeSelectedHeadersSelectedHeadersItem["GeoClass"].isNull())
			selectedHeadersItemObject.geoClass = querySettingNodeSelectedHeadersSelectedHeadersItem["GeoClass"].asString();
		if(!querySettingNodeSelectedHeadersSelectedHeadersItem["DimDateClass"].isNull())
			selectedHeadersItemObject.dimDateClass = querySettingNodeSelectedHeadersSelectedHeadersItem["DimDateClass"].asString();
		data_.querySetting.selectedHeaders.push_back(selectedHeadersItemObject);
	}
	auto allAstExprNode = querySettingNode["AstExpr"]["AstExprItem"];
	for (auto querySettingNodeAstExprAstExprItem : allAstExprNode)
	{
		Data::QuerySetting::AstExprItem astExprItemObject;
		if(!querySettingNodeAstExprAstExprItem["Expr"].isNull())
			astExprItemObject.expr = querySettingNodeAstExprAstExprItem["Expr"].asString();
		if(!querySettingNodeAstExprAstExprItem["ExprType"].isNull())
			astExprItemObject.exprType = querySettingNodeAstExprAstExprItem["ExprType"].asString();
		data_.querySetting.astExpr.push_back(astExprItemObject);
	}
		auto allResult = dataNode["Result"]["Result"];
		for (auto value : allResult)
			data_.result.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

GetDownloadFileResult::Data GetDownloadFileResult::getData()const
{
	return data_;
}

std::string GetDownloadFileResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string GetDownloadFileResult::getCode()const
{
	return code_;
}

bool GetDownloadFileResult::getSuccess()const
{
	return success_;
}

