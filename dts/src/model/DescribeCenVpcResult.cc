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

#include <alibabacloud/dts/model/DescribeCenVpcResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeCenVpcResult::DescribeCenVpcResult() :
	ServiceResult()
{}

DescribeCenVpcResult::DescribeCenVpcResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCenVpcResult::~DescribeCenVpcResult()
{}

void DescribeCenVpcResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCenVpcNode = value["CenVpc"]["CenVpcItem"];
	for (auto valueCenVpcCenVpcItem : allCenVpcNode)
	{
		CenVpcItem cenVpcObject;
		if(!valueCenVpcCenVpcItem["Engine"].isNull())
			cenVpcObject.engine = valueCenVpcCenVpcItem["Engine"].asString();
		if(!valueCenVpcCenVpcItem["GroupId"].isNull())
			cenVpcObject.groupId = valueCenVpcCenVpcItem["GroupId"].asString();
		if(!valueCenVpcCenVpcItem["InstanceId"].isNull())
			cenVpcObject.instanceId = valueCenVpcCenVpcItem["InstanceId"].asString();
		if(!valueCenVpcCenVpcItem["InstanceName"].isNull())
			cenVpcObject.instanceName = valueCenVpcCenVpcItem["InstanceName"].asString();
		if(!valueCenVpcCenVpcItem["Ip"].isNull())
			cenVpcObject.ip = valueCenVpcCenVpcItem["Ip"].asString();
		if(!valueCenVpcCenVpcItem["Port"].isNull())
			cenVpcObject.port = valueCenVpcCenVpcItem["Port"].asString();
		if(!valueCenVpcCenVpcItem["Region"].isNull())
			cenVpcObject.region = valueCenVpcCenVpcItem["Region"].asString();
		if(!valueCenVpcCenVpcItem["Status"].isNull())
			cenVpcObject.status = valueCenVpcCenVpcItem["Status"].asString();
		if(!valueCenVpcCenVpcItem["VpcCloudInstanceId"].isNull())
			cenVpcObject.vpcCloudInstanceId = valueCenVpcCenVpcItem["VpcCloudInstanceId"].asString();
		if(!valueCenVpcCenVpcItem["VpcId"].isNull())
			cenVpcObject.vpcId = valueCenVpcCenVpcItem["VpcId"].asString();
		cenVpc_.push_back(cenVpcObject);
	}
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int DescribeCenVpcResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<DescribeCenVpcResult::CenVpcItem> DescribeCenVpcResult::getCenVpc()const
{
	return cenVpc_;
}

std::string DescribeCenVpcResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeCenVpcResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeCenVpcResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribeCenVpcResult::getSuccess()const
{
	return success_;
}

std::string DescribeCenVpcResult::getErrCode()const
{
	return errCode_;
}

