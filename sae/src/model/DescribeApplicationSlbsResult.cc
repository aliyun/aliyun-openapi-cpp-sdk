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

#include <alibabacloud/sae/model/DescribeApplicationSlbsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DescribeApplicationSlbsResult::DescribeApplicationSlbsResult() :
	ServiceResult()
{}

DescribeApplicationSlbsResult::DescribeApplicationSlbsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApplicationSlbsResult::~DescribeApplicationSlbsResult()
{}

void DescribeApplicationSlbsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["InternetIp"].isNull())
		data_.internetIp = dataNode["InternetIp"].asString();
	if(!dataNode["InternetSlbId"].isNull())
		data_.internetSlbId = dataNode["InternetSlbId"].asString();
	if(!dataNode["IntranetSlbId"].isNull())
		data_.intranetSlbId = dataNode["IntranetSlbId"].asString();
	if(!dataNode["IntranetIp"].isNull())
		data_.intranetIp = dataNode["IntranetIp"].asString();
	if(!dataNode["InternetSlbExpired"].isNull())
		data_.internetSlbExpired = dataNode["InternetSlbExpired"].asString() == "true";
	if(!dataNode["IntranetSlbExpired"].isNull())
		data_.intranetSlbExpired = dataNode["IntranetSlbExpired"].asString() == "true";
	auto allIntranetNode = dataNode["Intranet"]["IntranetItem"];
	for (auto dataNodeIntranetIntranetItem : allIntranetNode)
	{
		Data::IntranetItem intranetItemObject;
		if(!dataNodeIntranetIntranetItem["HttpsCertId"].isNull())
			intranetItemObject.httpsCertId = dataNodeIntranetIntranetItem["HttpsCertId"].asString();
		if(!dataNodeIntranetIntranetItem["Protocol"].isNull())
			intranetItemObject.protocol = dataNodeIntranetIntranetItem["Protocol"].asString();
		if(!dataNodeIntranetIntranetItem["TargetPort"].isNull())
			intranetItemObject.targetPort = std::stoi(dataNodeIntranetIntranetItem["TargetPort"].asString());
		if(!dataNodeIntranetIntranetItem["Port"].isNull())
			intranetItemObject.port = std::stoi(dataNodeIntranetIntranetItem["Port"].asString());
		data_.intranet.push_back(intranetItemObject);
	}
	auto allInternetNode = dataNode["Internet"]["InternetItem"];
	for (auto dataNodeInternetInternetItem : allInternetNode)
	{
		Data::InternetItem internetItemObject;
		if(!dataNodeInternetInternetItem["HttpsCertId"].isNull())
			internetItemObject.httpsCertId = dataNodeInternetInternetItem["HttpsCertId"].asString();
		if(!dataNodeInternetInternetItem["Protocol"].isNull())
			internetItemObject.protocol = dataNodeInternetInternetItem["Protocol"].asString();
		if(!dataNodeInternetInternetItem["TargetPort"].isNull())
			internetItemObject.targetPort = std::stoi(dataNodeInternetInternetItem["TargetPort"].asString());
		if(!dataNodeInternetInternetItem["Port"].isNull())
			internetItemObject.port = std::stoi(dataNodeInternetInternetItem["Port"].asString());
		data_.internet.push_back(internetItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeApplicationSlbsResult::getMessage()const
{
	return message_;
}

std::string DescribeApplicationSlbsResult::getTraceId()const
{
	return traceId_;
}

DescribeApplicationSlbsResult::Data DescribeApplicationSlbsResult::getData()const
{
	return data_;
}

std::string DescribeApplicationSlbsResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeApplicationSlbsResult::getCode()const
{
	return code_;
}

bool DescribeApplicationSlbsResult::getSuccess()const
{
	return success_;
}

