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

#include <alibabacloud/ddosdiversion/model/QueryNetListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DdosDiversion;
using namespace AlibabaCloud::DdosDiversion::Model;

QueryNetListResult::QueryNetListResult() :
	ServiceResult()
{}

QueryNetListResult::QueryNetListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryNetListResult::~QueryNetListResult()
{}

void QueryNetListResult::parse(const std::string &payload)
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
		auto allNetsNode = valueDatadataItem["Nets"]["data"];
		for (auto valueDatadataItemNetsdata : allNetsNode)
		{
			DataItem::Data netsObject;
			if(!valueDatadataItemNetsdata["UserId"].isNull())
				netsObject.userId = valueDatadataItemNetsdata["UserId"].asString();
			if(!valueDatadataItemNetsdata["SaleId"].isNull())
				netsObject.saleId = valueDatadataItemNetsdata["SaleId"].asString();
			if(!valueDatadataItemNetsdata["UpstreamType"].isNull())
				netsObject.upstreamType = valueDatadataItemNetsdata["UpstreamType"].asString();
			if(!valueDatadataItemNetsdata["Net"].isNull())
				netsObject.net = valueDatadataItemNetsdata["Net"].asString();
			if(!valueDatadataItemNetsdata["NetType"].isNull())
				netsObject.netType = valueDatadataItemNetsdata["NetType"].asString();
			if(!valueDatadataItemNetsdata["Mode"].isNull())
				netsObject.mode = valueDatadataItemNetsdata["Mode"].asString();
			if(!valueDatadataItemNetsdata["DeclaredState"].isNull())
				netsObject.declaredState = std::stoi(valueDatadataItemNetsdata["DeclaredState"].asString());
			if(!valueDatadataItemNetsdata["GmtCreate"].isNull())
				netsObject.gmtCreate = valueDatadataItemNetsdata["GmtCreate"].asString();
			if(!valueDatadataItemNetsdata["GmtModify"].isNull())
				netsObject.gmtModify = valueDatadataItemNetsdata["GmtModify"].asString();
			if(!valueDatadataItemNetsdata["NetExtend"].isNull())
				netsObject.netExtend = std::stol(valueDatadataItemNetsdata["NetExtend"].asString());
			if(!valueDatadataItemNetsdata["FwdEffect"].isNull())
				netsObject.fwdEffect = std::stol(valueDatadataItemNetsdata["FwdEffect"].asString());
			if(!valueDatadataItemNetsdata["NetMain"].isNull())
				netsObject.netMain = valueDatadataItemNetsdata["NetMain"].asString();
			auto allDeclaredNode = valueDatadataItemNetsdata["Declared"]["declaredItem"];
			for (auto valueDatadataItemNetsdataDeclareddeclaredItem : allDeclaredNode)
			{
				DataItem::Data::DeclaredItem declaredObject;
				if(!valueDatadataItemNetsdataDeclareddeclaredItem["Region"].isNull())
					declaredObject.region = valueDatadataItemNetsdataDeclareddeclaredItem["Region"].asString();
				if(!valueDatadataItemNetsdataDeclareddeclaredItem["Declared"].isNull())
					declaredObject.declared = valueDatadataItemNetsdataDeclareddeclaredItem["Declared"].asString();
				netsObject.declared.push_back(declaredObject);
			}
			auto dDoSDefenseNode = value["DDoSDefense"];
			auto djPolicyNode = dDoSDefenseNode["DjPolicy"];
			if(!djPolicyNode["PolicyName"].isNull())
				netsObject.dDoSDefense.djPolicy.policyName = djPolicyNode["PolicyName"].asString();
			auto cleanThNode = dDoSDefenseNode["CleanTh"];
			if(!cleanThNode["Mbps"].isNull())
				netsObject.dDoSDefense.cleanTh.mbps = std::stoi(cleanThNode["Mbps"].asString());
			if(!cleanThNode["Pps"].isNull())
				netsObject.dDoSDefense.cleanTh.pps = std::stoi(cleanThNode["Pps"].asString());
			auto holeThNode = dDoSDefenseNode["HoleTh"];
			if(!holeThNode["ThreshMbps"].isNull())
				netsObject.dDoSDefense.holeTh.threshMbps = std::stoi(holeThNode["ThreshMbps"].asString());
			dataObject.nets.push_back(netsObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stol(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryNetListResult::getMessage()const
{
	return message_;
}

std::vector<QueryNetListResult::DataItem> QueryNetListResult::getData()const
{
	return data_;
}

long QueryNetListResult::getCode()const
{
	return code_;
}

