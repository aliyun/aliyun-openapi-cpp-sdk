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

#include <alibabacloud/ddosdiversion/model/ListInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DdosDiversion;
using namespace AlibabaCloud::DdosDiversion::Model;

ListInstanceResult::ListInstanceResult() :
	ServiceResult()
{}

ListInstanceResult::ListInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstanceResult::~ListInstanceResult()
{}

void ListInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["Total"].isNull())
			dataObject.total = std::stol(valueDatadataItem["Total"].asString());
		if(!valueDatadataItem["Page"].isNull())
			dataObject.page = std::stol(valueDatadataItem["Page"].asString());
		if(!valueDatadataItem["Num"].isNull())
			dataObject.num = std::stol(valueDatadataItem["Num"].asString());
		auto allInstancesNode = valueDatadataItem["Instances"]["data"];
		for (auto valueDatadataItemInstancesdata : allInstancesNode)
		{
			DataItem::Data instancesObject;
			if(!valueDatadataItemInstancesdata["UserId"].isNull())
				instancesObject.userId = valueDatadataItemInstancesdata["UserId"].asString();
			if(!valueDatadataItemInstancesdata["SaleId"].isNull())
				instancesObject.saleId = valueDatadataItemInstancesdata["SaleId"].asString();
			if(!valueDatadataItemInstancesdata["InstanceId"].isNull())
				instancesObject.instanceId = valueDatadataItemInstancesdata["InstanceId"].asString();
			if(!valueDatadataItemInstancesdata["Name"].isNull())
				instancesObject.name = valueDatadataItemInstancesdata["Name"].asString();
			if(!valueDatadataItemInstancesdata["Status"].isNull())
				instancesObject.status = valueDatadataItemInstancesdata["Status"].asString();
			if(!valueDatadataItemInstancesdata["Comment"].isNull())
				instancesObject.comment = valueDatadataItemInstancesdata["Comment"].asString();
			if(!valueDatadataItemInstancesdata["Message"].isNull())
				instancesObject.message = valueDatadataItemInstancesdata["Message"].asString();
			if(!valueDatadataItemInstancesdata["GmtExpire"].isNull())
				instancesObject.gmtExpire = valueDatadataItemInstancesdata["GmtExpire"].asString();
			if(!valueDatadataItemInstancesdata["GmtCreate"].isNull())
				instancesObject.gmtCreate = valueDatadataItemInstancesdata["GmtCreate"].asString();
			if(!valueDatadataItemInstancesdata["GmtModify"].isNull())
				instancesObject.gmtModify = valueDatadataItemInstancesdata["GmtModify"].asString();
			auto specNode = value["Spec"];
			if(!specNode["IdcNumbers"].isNull())
				instancesObject.spec.idcNumbers = specNode["IdcNumbers"].asString();
			if(!specNode["NormalBandwidth"].isNull())
				instancesObject.spec.normalBandwidth = specNode["NormalBandwidth"].asString();
			if(!specNode["IpSubnetNums"].isNull())
				instancesObject.spec.ipSubnetNums = specNode["IpSubnetNums"].asString();
			if(!specNode["Coverage"].isNull())
				instancesObject.spec.coverage = specNode["Coverage"].asString();
			if(!specNode["Edition"].isNull())
				instancesObject.spec.edition = specNode["Edition"].asString();
			if(!specNode["MitigationCapacity"].isNull())
				instancesObject.spec.mitigationCapacity = specNode["MitigationCapacity"].asString();
			if(!specNode["MitigationNums"].isNull())
				instancesObject.spec.mitigationNums = specNode["MitigationNums"].asString();
			if(!specNode["DiversionType"].isNull())
				instancesObject.spec.diversionType = specNode["DiversionType"].asString();
			if(!specNode["MitigationAnalysis"].isNull())
				instancesObject.spec.mitigationAnalysis = specNode["MitigationAnalysis"].asString();
			if(!specNode["MitigationAnalysisCapacity"].isNull())
				instancesObject.spec.mitigationAnalysisCapacity = specNode["MitigationAnalysisCapacity"].asString();
			if(!specNode["InitialInstallation"].isNull())
				instancesObject.spec.initialInstallation = specNode["InitialInstallation"].asString();
			if(!specNode["InitialQty"].isNull())
				instancesObject.spec.initialQty = specNode["InitialQty"].asString();
			dataObject.instances.push_back(instancesObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stol(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListInstanceResult::getMessage()const
{
	return message_;
}

std::vector<ListInstanceResult::DataItem> ListInstanceResult::getData()const
{
	return data_;
}

long ListInstanceResult::getCode()const
{
	return code_;
}

