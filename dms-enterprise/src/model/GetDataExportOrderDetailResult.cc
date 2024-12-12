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

#include <alibabacloud/dms-enterprise/model/GetDataExportOrderDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetDataExportOrderDetailResult::GetDataExportOrderDetailResult() :
	ServiceResult()
{}

GetDataExportOrderDetailResult::GetDataExportOrderDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDataExportOrderDetailResult::~GetDataExportOrderDetailResult()
{}

void GetDataExportOrderDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataExportOrderDetailNode = value["DataExportOrderDetail"];
	auto keyInfoNode = dataExportOrderDetailNode["KeyInfo"];
	if(!keyInfoNode["PreCheckId"].isNull())
		dataExportOrderDetail_.keyInfo.preCheckId = std::stol(keyInfoNode["PreCheckId"].asString());
	if(!keyInfoNode["JobStatus"].isNull())
		dataExportOrderDetail_.keyInfo.jobStatus = keyInfoNode["JobStatus"].asString();
	if(!keyInfoNode["JobId"].isNull())
		dataExportOrderDetail_.keyInfo.jobId = std::stol(keyInfoNode["JobId"].asString());
	auto orderDetailNode = dataExportOrderDetailNode["OrderDetail"];
	if(!orderDetailNode["DbId"].isNull())
		dataExportOrderDetail_.orderDetail.dbId = std::stoi(orderDetailNode["DbId"].asString());
	if(!orderDetailNode["Database"].isNull())
		dataExportOrderDetail_.orderDetail.database = orderDetailNode["Database"].asString();
	if(!orderDetailNode["Classify"].isNull())
		dataExportOrderDetail_.orderDetail.classify = orderDetailNode["Classify"].asString();
	if(!orderDetailNode["ExeSQL"].isNull())
		dataExportOrderDetail_.orderDetail.exeSQL = orderDetailNode["ExeSQL"].asString();
	if(!orderDetailNode["Logic"].isNull())
		dataExportOrderDetail_.orderDetail.logic = orderDetailNode["Logic"].asString() == "true";
	if(!orderDetailNode["ActualAffectRows"].isNull())
		dataExportOrderDetail_.orderDetail.actualAffectRows = std::stol(orderDetailNode["ActualAffectRows"].asString());
	if(!orderDetailNode["IgnoreAffectRows"].isNull())
		dataExportOrderDetail_.orderDetail.ignoreAffectRows = orderDetailNode["IgnoreAffectRows"].asString() == "true";
	if(!orderDetailNode["IgnoreAffectRowsReason"].isNull())
		dataExportOrderDetail_.orderDetail.ignoreAffectRowsReason = orderDetailNode["IgnoreAffectRowsReason"].asString();
	if(!orderDetailNode["EnvType"].isNull())
		dataExportOrderDetail_.orderDetail.envType = orderDetailNode["EnvType"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetDataExportOrderDetailResult::DataExportOrderDetail GetDataExportOrderDetailResult::getDataExportOrderDetail()const
{
	return dataExportOrderDetail_;
}

std::string GetDataExportOrderDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetDataExportOrderDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetDataExportOrderDetailResult::getSuccess()const
{
	return success_;
}

