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

#include <alibabacloud/cas/model/DescribeCertificateListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

DescribeCertificateListResult::DescribeCertificateListResult() :
	ServiceResult()
{}

DescribeCertificateListResult::DescribeCertificateListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCertificateListResult::~DescribeCertificateListResult()
{}

void DescribeCertificateListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCertificateList = value["CertificateList"]["Certificate"];
	for (auto value : allCertificateList)
	{
		Certificate certificateListObject;
		if(!value["Id"].isNull())
			certificateListObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			certificateListObject.name = value["Name"].asString();
		if(!value["SourceType"].isNull())
			certificateListObject.sourceType = value["SourceType"].asString();
		if(!value["CertType"].isNull())
			certificateListObject.certType = value["CertType"].asString();
		if(!value["InstanceId"].isNull())
			certificateListObject.instanceId = value["InstanceId"].asString();
		if(!value["OrderId"].isNull())
			certificateListObject.orderId = std::stol(value["OrderId"].asString());
		if(!value["OrderType"].isNull())
			certificateListObject.orderType = value["OrderType"].asString();
		if(!value["BrandName"].isNull())
			certificateListObject.brandName = value["BrandName"].asString();
		if(!value["BeforeDate"].isNull())
			certificateListObject.beforeDate = std::stol(value["BeforeDate"].asString());
		if(!value["AfterDate"].isNull())
			certificateListObject.afterDate = std::stol(value["AfterDate"].asString());
		if(!value["Year"].isNull())
			certificateListObject.year = std::stoi(value["Year"].asString());
		if(!value["Domain"].isNull())
			certificateListObject.domain = value["Domain"].asString();
		if(!value["RemainingDays"].isNull())
			certificateListObject.remainingDays = std::stoi(value["RemainingDays"].asString());
		if(!value["DeploymentCloudProduct"].isNull())
			certificateListObject.deploymentCloudProduct = value["DeploymentCloudProduct"].asString();
		if(!value["StatusCode"].isNull())
			certificateListObject.statusCode = value["StatusCode"].asString();
		if(!value["NewBuyCertType"].isNull())
			certificateListObject.newBuyCertType = value["NewBuyCertType"].asString();
		if(!value["NewBuyDomainType"].isNull())
			certificateListObject.newBuyDomainType = value["NewBuyDomainType"].asString();
		if(!value["NewBuyBrand"].isNull())
			certificateListObject.newBuyBrand = value["NewBuyBrand"].asString();
		if(!value["NewBuyDomainCount"].isNull())
			certificateListObject.newBuyDomainCount = std::stoi(value["NewBuyDomainCount"].asString());
		if(!value["ShowDeployment"].isNull())
			certificateListObject.showDeployment = std::stoi(value["ShowDeployment"].asString());
		if(!value["ShowRefund"].isNull())
			certificateListObject.showRefund = value["ShowRefund"].asString() == "true";
		if(!value["AccessDownload"].isNull())
			certificateListObject.accessDownload = std::stoi(value["AccessDownload"].asString());
		if(!value["PartnerOrderId"].isNull())
			certificateListObject.partnerOrderId = value["PartnerOrderId"].asString();
		if(!value["IsFree"].isNull())
			certificateListObject.isFree = value["IsFree"].asString() == "true";
		certificateList_.push_back(certificateListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["ShowSize"].isNull())
		showSize_ = std::stoi(value["ShowSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());

}

int DescribeCertificateListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeCertificateListResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeCertificateListResult::Certificate> DescribeCertificateListResult::getCertificateList()const
{
	return certificateList_;
}

int DescribeCertificateListResult::getShowSize()const
{
	return showSize_;
}

