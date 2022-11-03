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

#include <alibabacloud/cas/model/ListCertWarehouseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

ListCertWarehouseResult::ListCertWarehouseResult() :
	ServiceResult()
{}

ListCertWarehouseResult::ListCertWarehouseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCertWarehouseResult::~ListCertWarehouseResult()
{}

void ListCertWarehouseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCertWarehouseListNode = value["CertWarehouseList"]["CertWarehouse"];
	for (auto valueCertWarehouseListCertWarehouse : allCertWarehouseListNode)
	{
		CertWarehouse certWarehouseListObject;
		if(!valueCertWarehouseListCertWarehouse["WhId"].isNull())
			certWarehouseListObject.whId = std::stol(valueCertWarehouseListCertWarehouse["WhId"].asString());
		if(!valueCertWarehouseListCertWarehouse["InstanceId"].isNull())
			certWarehouseListObject.instanceId = valueCertWarehouseListCertWarehouse["InstanceId"].asString();
		if(!valueCertWarehouseListCertWarehouse["Name"].isNull())
			certWarehouseListObject.name = valueCertWarehouseListCertWarehouse["Name"].asString();
		if(!valueCertWarehouseListCertWarehouse["PcaInstanceId"].isNull())
			certWarehouseListObject.pcaInstanceId = valueCertWarehouseListCertWarehouse["PcaInstanceId"].asString();
		if(!valueCertWarehouseListCertWarehouse["Qps"].isNull())
			certWarehouseListObject.qps = std::stol(valueCertWarehouseListCertWarehouse["Qps"].asString());
		if(!valueCertWarehouseListCertWarehouse["Type"].isNull())
			certWarehouseListObject.type = valueCertWarehouseListCertWarehouse["Type"].asString();
		if(!valueCertWarehouseListCertWarehouse["EndTime"].isNull())
			certWarehouseListObject.endTime = std::stol(valueCertWarehouseListCertWarehouse["EndTime"].asString());
		if(!valueCertWarehouseListCertWarehouse["IsExpired"].isNull())
			certWarehouseListObject.isExpired = valueCertWarehouseListCertWarehouse["IsExpired"].asString() == "true";
		certWarehouseList_.push_back(certWarehouseListObject);
	}
	if(!value["ShowSize"].isNull())
		showSize_ = std::stol(value["ShowSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stol(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListCertWarehouseResult::getTotalCount()const
{
	return totalCount_;
}

long ListCertWarehouseResult::getCurrentPage()const
{
	return currentPage_;
}

long ListCertWarehouseResult::getShowSize()const
{
	return showSize_;
}

std::vector<ListCertWarehouseResult::CertWarehouse> ListCertWarehouseResult::getCertWarehouseList()const
{
	return certWarehouseList_;
}

